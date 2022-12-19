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
window.setFramerateLimit(40);
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
                window2.setFramerateLimit(60);
                sf::Sprite Menu2;
                sf::Texture tur2;
                tur2.loadFromFile("bg.png");
                Menu2.setTexture(tur2);


                //enemy
                sf::Sprite PL;
                sf::Texture tur3;
                tur3.loadFromFile("PL.png");
                PL.setTexture(tur3);
                PL.setTextureRect(sf::IntRect(0,0,64,64));

                sf::Sprite pl2;
                pl2.setTexture(tur3);
                pl2.setTextureRect(sf::IntRect(0,0,64,64));

                sf::Sprite pl3;
                pl3.setTexture(tur3);
                pl3.setTextureRect(sf::IntRect(0,0,64,64));

                sf::Sprite pl4;
                pl4.setTexture(tur3);
                pl4.setTextureRect(sf::IntRect(0,0,64,64));

                sf::Sprite pl5;
                pl5.setTexture(tur3);
                pl5.setTextureRect(sf::IntRect(0,0,64,64));

                sf::Sprite pl6;
                pl6.setTexture(tur3);
                pl6.setTextureRect(sf::IntRect(0,0,64,64));

                sf::Sprite pl7;
                pl7.setTexture(tur3);
                pl7.setTextureRect(sf::IntRect(0,0,64,64));

                sf::Sprite pl8;
                pl8.setTexture(tur3);
                pl8.setTextureRect(sf::IntRect(0,0,64,64));

                //player
                sf::Sprite P;
                sf::Texture tu3;
                tu3.loadFromFile("PL.png");
                P.setTexture(tu3);
                P.setTextureRect(sf::IntRect(0,0,64,64));


                sf::Music music1;
                music1.openFromFile("sorakan.wav");
                sf::Music music2;
                music2.openFromFile("foot.wav");
                music1.play();
                music2.play();
                music1.setLoop(true);
                music2.setLoop(true);


                while(window2.isOpen()){
                //player
                //sf::RectangleShape player(sf::Vector2f(30.0f, 30.0f));
                sf::Event evnt;

                //player.setFillColor(sf::Color::Red);
                P.setPosition(sf::Vector2f(200.f,500.f));

                while(window2.pollEvent(evnt))
                {
                    switch(evnt.type)
                    {
                    case sf::Event::Closed:
                        window2.close();
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

                //enemy

                //sf::RectangleShape enemy(sf::Vector2f(30.0f, 30.0f));
                PL.setPosition(sf::Vector2f(150.f,0.f));

                //sf::RectangleShape enemy2(sf::Vector2f(30.0f, 30.0f));
                pl2.setPosition(sf::Vector2f(200.f,50.f));

                //sf::RectangleShape enemy3(sf::Vector2f(30.0f, 30.0f));
                pl3.setPosition(sf::Vector2f(300.f,25.f));

                //sf::RectangleShape enemy4(sf::Vector2f(30.0f, 30.0f));
                pl4.setPosition(sf::Vector2f(250.f,100.f));

                //sf::RectangleShape enemy5(sf::Vector2f(30.0f, 30.0f));
                pl5.setPosition(sf::Vector2f(350.f,75.f));

                //sf::RectangleShape enemy6(sf::Vector2f(30.0f, 30.0f));
                pl6.setPosition(sf::Vector2f(100.f,125.f));

                //sf::RectangleShape enemy7(sf::Vector2f(30.0f, 30.0f));
                pl7.setPosition(sf::Vector2f(50.f,200.f));

                //sf::RectangleShape enemy8(sf::Vector2f(30.0f, 30.0f));
                pl8.setPosition(sf::Vector2f(0.f,150.f));

                //batas spawning
                sf::RectangleShape batas(sf::Vector2f(30.0f, 30.0f));
                batas.setPosition(sf::Vector2f(150.f,600.f));

                sf::RectangleShape batas2(sf::Vector2f(30.0f, 30.0f));
                batas2.setPosition(sf::Vector2f(200.f,600.f));

                sf::RectangleShape batas3(sf::Vector2f(30.0f, 30.0f));
                batas3.setPosition(sf::Vector2f(300.f,600.f));

                sf::RectangleShape batas4(sf::Vector2f(30.0f, 30.0f));
                batas4.setPosition(sf::Vector2f(250.f,600.f));

                sf::RectangleShape batas5(sf::Vector2f(30.0f, 30.0f));
                batas5.setPosition(sf::Vector2f(350.f,600.f));

                sf::RectangleShape batas6(sf::Vector2f(30.0f, 30.0f));
                batas6.setPosition(sf::Vector2f(100.f,600.f));

                sf::RectangleShape batas7(sf::Vector2f(30.0f, 30.0f));
                batas7.setPosition(sf::Vector2f(50.f,600.f));

                sf::RectangleShape batas8(sf::Vector2f(30.0f, 30.0f));
                batas8.setPosition(sf::Vector2f(0.f,600.f));

                int score = 0;

                while (PL.getPosition() != P.getPosition() || pl2.getPosition() != P.getPosition() || pl3.getPosition() != P.getPosition()
                       || pl4.getPosition() != P.getPosition() || pl5.getPosition() != P.getPosition() || pl6.getPosition() != P.getPosition()
                       || pl7.getPosition() != P.getPosition() || pl8.getPosition() != P.getPosition()){

                    int xtexture = 0;
                    xtexture = (int)PL.getPosition().y / 20 % 4;
                    xtexture = xtexture*64;
                    PL.setTextureRect(sf::IntRect(xtexture,0,64,64));
                    PL.move(0, 10.f);

                    int xtexture2 = 0;
                    xtexture2 = (int)pl2.getPosition().y / 20 % 4;
                    xtexture2 = xtexture2*64;
                    pl2.setTextureRect(sf::IntRect(xtexture2,0,64,64));
                    pl2.move(0, 10.f);

                    int xtexture3 = 0;
                    xtexture3 = (int)pl3.getPosition().y / 20 % 4;
                    xtexture3 = xtexture3*64;
                    pl3.setTextureRect(sf::IntRect(xtexture3,0,64,64));
                    pl3.move(0, 10.f);

                    int xtexture4 = 0;
                    xtexture4 = (int)pl4.getPosition().y / 20 % 4;
                    xtexture4 = xtexture4*64;
                    pl4.setTextureRect(sf::IntRect(xtexture4,0,64,64));
                    pl4.move(0, 10.f);

                    int xtexture5 = 0;
                    xtexture5 = (int)pl5.getPosition().y / 20 % 4;
                    xtexture5 = xtexture5*64;
                    pl5.setTextureRect(sf::IntRect(xtexture5,0,64,64));
                    pl5.move(0, 10.f);

                    int xtexture6 = 0;
                    xtexture6 = (int)pl6.getPosition().y / 20 % 4;
                    xtexture6 = xtexture6*64;
                    pl6.setTextureRect(sf::IntRect(xtexture6,0,64,64));
                    pl6.move(0, 10.f);

                    int xtexture7 = 0;
                    xtexture7 = (int)pl7.getPosition().y / 20 % 4;
                    xtexture7 = xtexture7*64;
                    pl7.setTextureRect(sf::IntRect(xtexture7,0,64,64));
                    pl7.move(0, 10.f);

                    int xtexture8 = 0;
                    xtexture8 = (int)pl8.getPosition().y / 20 % 4;
                    xtexture8 = xtexture8*64;
                    pl8.setTextureRect(sf::IntRect(xtexture8,0,64,64));
                    pl8.move(0, 10.f);


                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
                    {
                       int xtexture1 = 0;
                       xtexture1 = (int)P.getPosition().x / 20 % 4;
                       xtexture1 = xtexture1*64;
                       P.setTextureRect(sf::IntRect(xtexture1,0,64,64));
                       P.move(-5.0f, 0.0f);
                    }
                    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
                    {
                        int xtexture1 = 0;
                        xtexture1 = (int)P.getPosition().x / 20 % 4;
                        xtexture1 = xtexture1*64;
                        P.setTextureRect(sf::IntRect(xtexture1,0,64,64));

                        P.move(5.0f, 0.0f);
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
                    window2.draw(Menu2);
                    window2.draw(PL);
                    window2.draw(P);

                    window2.draw(pl2);
                    window2.draw(pl3);
                    window2.draw(pl4);
                    window2.draw(pl5);
                    window2.draw(pl6);
                    window2.draw(pl7);
                    window2.draw(pl8);

                    window2.draw(P);
                    window2.draw(text);
                    window2.display();

                    //kalah Muncul Text
                    //dihitung kalah saat posisi enemy sama persis dengan posisi P
                    while (PL.getPosition() == P.getPosition() || pl2.getPosition() == P.getPosition() || pl3.getPosition() == P.getPosition()
                        || pl4.getPosition() == P.getPosition() || pl5.getPosition() == P.getPosition() || pl6.getPosition() == P.getPosition()
                         || pl7.getPosition() == P.getPosition() || pl8.getPosition() == P.getPosition()){

                        //window2.close();
                         music1.stop();
                         music2.stop();
                         PL.move(0, 0.f);
                         pl2.move(0, 0.f);
                         pl3.move(0, 0.f);
                         pl4.move(0, 0.f);
                         pl5.move(0, 0.f);
                         pl6.move(0, 0.f);
                         pl7.move(0, 0.f);
                         pl8.move(0, 0.f);
                         P.move(0, 0.f);

                        sf::Font font;
                        font.loadFromFile("tf.ttf");

                        sf::Text text2;
                        text2.setFont(font);
                        text2.setString("NT!!! PRESS ENTER...");
                        text2.setCharacterSize(30);
                        text2.setFillColor(sf::Color::Red);
                        text2.setPosition(sf::Vector2f(120.f,300.f));

                        sf::Text text3;
                        text3.setFont(font);
                        text3.setString("ESC to Exit!");
                        text3.setCharacterSize(25);
                        text3.setFillColor(sf::Color::Red);
                        text3.setPosition(sf::Vector2f(150.f,350.f));


                        window2.clear();
                        window2.draw(PL);
                        window2.draw(pl2);
                        window2.draw(pl3);
                        window2.draw(pl4);
                        window2.draw(pl5);
                        window2.draw(pl6);
                        window2.draw(pl7);
                        window2.draw(pl8);

                        window2.draw(P);
                        window2.draw(text);
                        window2.draw(text2);
                        window2.draw(text3);
                        window2.display();

                        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Enter))
                        {
                           goto game;
                        }

                        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
                        {
                           window2.close();
                           break;

                        }


                    }

                    //reset posisi enemy setelah mencapai batas
                    if (PL.getPosition()== batas.getPosition()){
                        PL.setPosition(sf::Vector2f(150.f,0.f));
                    }

                    if(pl2.getPosition()== batas2.getPosition()){
                        pl2.setPosition(sf::Vector2f(200.f,50.f));
                    }
                    //bermasalah
                    if(pl3.getPosition()== batas3.getPosition()){
                        pl3.setPosition(sf::Vector2f(300.f,25.f));
                    }

                    if(pl4.getPosition()== batas4.getPosition()){
                        pl4.setPosition(sf::Vector2f(250.f,100.f));
                        pl5.setPosition(sf::Vector2f(350.f,100.f));
                    }
                    //bermasalah
                    if(pl5.getPosition()== batas5.getPosition()){
                        pl5.setPosition(sf::Vector2f(350.f,75.f));
                    }
                    //bermasalah
                    if(pl6.getPosition()== batas6.getPosition()){
                        pl6.setPosition(sf::Vector2f(100.f,125.f));
                    }

                    if(pl7.getPosition()== batas7.getPosition()){
                        pl7.setPosition(sf::Vector2f(50.f,200.f));
                        pl3.setPosition(sf::Vector2f(300.f,200.f));
                   }

                    if(pl8.getPosition()== batas8.getPosition()){
                        pl8.setPosition(sf::Vector2f(0.f,150.f));
                        pl6.setPosition(sf::Vector2f(100.f,150.f));
                    }

                }

            }

    return 0;
}
