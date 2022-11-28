//Movement
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <string>
#include <sstream>

using namespace std;
int main()
{

sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Tutorial", sf::Style::Close | sf::Style::Titlebar| sf::Style::Resize);
sf::Music music;
music.openFromFile("indo2.wav");
music.play();

 while(window.isOpen())
    {

        sf::Event evnt;
        sf::Sprite Menu;
        sf::Texture tur;
        tur.loadFromFile("ENTER.png");
        Menu.setTexture(tur);
        window.clear();
        window.draw(Menu);
        window.display();

            while(window.pollEvent(evnt))
            {
                switch(evnt.type)
                {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    cout<<"New window width: "<<evnt.size.width<<" New window height: "<<evnt.size.height<<endl;
                    break;
                case sf::Event::TextEntered:
                    if(evnt.text.unicode < 128){
                    printf("%c", evnt.text.unicode);
                    }
                }

            }
        //ganti window setelah ditekan enter
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
                window.close();
                music.stop();
                goto game;
        }
    }

                game://800
                sf::RenderWindow window2(sf::VideoMode(400, 600), "SFML Tutorial", sf::Style::Close | sf::Style::Titlebar| sf::Style::Resize);
                sf::Music music1;
                music1.openFromFile("are.wav");
                music1.play();

                while(window2.isOpen()){
                //player
                sf::RectangleShape player(sf::Vector2f(30.0f, 30.0f));
                player.setFillColor(sf::Color::Red);
                player.setPosition(sf::Vector2f(200.f,500.f));

                //enemy
                sf::RectangleShape enemy(sf::Vector2f(30.0f, 30.0f));
                enemy.setPosition(sf::Vector2f(150.f,0.f));

                sf::RectangleShape enemy2(sf::Vector2f(30.0f, 30.0f));
                enemy2.setPosition(sf::Vector2f(200.f,50.f));

                sf::RectangleShape enemy3(sf::Vector2f(30.0f, 30.0f));
                enemy3.setPosition(sf::Vector2f(300.f,25.f));

                sf::RectangleShape enemy4(sf::Vector2f(30.0f, 30.0f));
                enemy4.setPosition(sf::Vector2f(250.f,100.f));

                sf::RectangleShape enemy5(sf::Vector2f(30.0f, 30.0f));
                enemy5.setPosition(sf::Vector2f(350.f,75.f));

                sf::RectangleShape enemy6(sf::Vector2f(30.0f, 30.0f));
                enemy6.setPosition(sf::Vector2f(100.f,125.f));

                sf::RectangleShape enemy7(sf::Vector2f(30.0f, 30.0f));
                enemy7.setPosition(sf::Vector2f(50.f,200.f));

                sf::RectangleShape enemy8(sf::Vector2f(30.0f, 30.0f));
                enemy8.setPosition(sf::Vector2f(0.f,150.f));

                //batas spawning
                sf::RectangleShape batas(sf::Vector2f(400.0f, 600.0f));
                batas.setPosition(sf::Vector2f(150.f,600.f));

                sf::RectangleShape batas2(sf::Vector2f(400.0f, 600.0f));
                batas2.setPosition(sf::Vector2f(200.f,600.f));

                sf::RectangleShape batas3(sf::Vector2f(400.0f, 600.0f));
                batas3.setPosition(sf::Vector2f(300.f,600.f));

                sf::RectangleShape batas4(sf::Vector2f(400.0f, 600.0f));
                batas4.setPosition(sf::Vector2f(250.f,600.f));

                sf::RectangleShape batas5(sf::Vector2f(400.0f, 600.0f));
                batas5.setPosition(sf::Vector2f(350.f,600.f));

                sf::RectangleShape batas6(sf::Vector2f(400.0f, 600.0f));
                batas6.setPosition(sf::Vector2f(100.f,600.f));

                sf::RectangleShape batas7(sf::Vector2f(400.0f, 600.0f));
                batas7.setPosition(sf::Vector2f(50.f,600.f));

                sf::RectangleShape batas8(sf::Vector2f(400.0f, 600.0f));
                batas8.setPosition(sf::Vector2f(0.f,600.f));

                int score = 0;

                while (enemy.getPosition() != player.getPosition() || enemy2.getPosition() != player.getPosition() || enemy3.getPosition() != player.getPosition()
                       || enemy4.getPosition() != player.getPosition() || enemy5.getPosition() != player.getPosition() || enemy6.getPosition() != player.getPosition()
                       || enemy7.getPosition() != player.getPosition() || enemy8.getPosition() != player.getPosition()){

                    enemy.move(0, 10.f);
                    enemy2.move(0, 10.f);
                    enemy3.move(0, 10.f);
                    enemy4.move(0, 10.f);
                    enemy5.move(0, 10.f);
                    enemy6.move(0, 10.f);
                    enemy7.move(0, 10.f);
                    enemy8.move(0, 10.f);

                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
                    {
                       player.move(-5.0f, 0.0f);
                    }
                    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
                    {
                        player.move(5.0f, 0.0f);
                    }



                    //Score player berdasarkan kecepatan dari enemy
                    score++;

                    stringstream ss;
                    ss << score;
                    string str = ss.str();

                    sf::Font font;
                    font.loadFromFile("tf.ttf");

                    sf::Text text;
                    text.setFont(font);
                    text.setString(str);
                    text.setCharacterSize(50);
                    text.setFillColor(sf::Color::Red);
                    text.setPosition(sf::Vector2f(300.f,0.f));

                    window2.clear();
                    window2.draw(enemy);
                    window2.draw(enemy2);
                    window2.draw(enemy3);
                    window2.draw(enemy4);
                    window2.draw(enemy5);
                    window2.draw(enemy6);
                    window2.draw(enemy7);
                    window2.draw(enemy8);

                    window2.draw(player);
                    window2.draw(text);
                    window2.display();

                    //kalah close window
                    //dihitung kalah saat posisi enemy sama persis dengan posisi player
                    if (enemy.getPosition() == player.getPosition() || enemy2.getPosition() == player.getPosition() || enemy3.getPosition() == player.getPosition()
                        || enemy4.getPosition() == player.getPosition() || enemy5.getPosition() == player.getPosition() || enemy6.getPosition() == player.getPosition()
                         || enemy7.getPosition() == player.getPosition() || enemy8.getPosition() == player.getPosition()){

                        window2.close();
                        music1.stop();

                    }

                    //reset posisi enemy setelah mencapai batas
                    if (enemy.getPosition()== batas.getPosition()){
                        enemy.setPosition(sf::Vector2f(150.f,0.f));
                    }

                    if(enemy2.getPosition()== batas2.getPosition()){
                        enemy2.setPosition(sf::Vector2f(200.f,50.f));
                    }

                    if(enemy3.getPosition()== batas3.getPosition()){
                        enemy3.setPosition(sf::Vector2f(300.f,25.f));
                    }

                    if(enemy4.getPosition()== batas4.getPosition()){
                        enemy4.setPosition(sf::Vector2f(250.f,100.f));
                    }

                    if(enemy5.getPosition()== batas5.getPosition()){
                        enemy5.setPosition(sf::Vector2f(350.f,75.f));
                    }

                    if(enemy6.getPosition()== batas6.getPosition()){
                        enemy6.setPosition(sf::Vector2f(100.f,125.f));
                    }

                    if(enemy7.getPosition()== batas7.getPosition()){
                        enemy7.setPosition(sf::Vector2f(50.f,200.f));
                    }

                    if(enemy8.getPosition()== batas8.getPosition()){
                        enemy8.setPosition(sf::Vector2f(0.f,150.f));
                    }

                }

            }

    return 0;
}
