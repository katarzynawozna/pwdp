#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    int keyonoff=1;
    float height = 800;
    float width = 800;
    float radius = 100;
    float x = width/2;
    float y = height/2;
    float vx = 0.3;
    float vy = 0.1;
    float t = 0.1;

    sf::RenderWindow window(sf::VideoMode(width, height), "Lista 7");
    sf::CircleShape shape(radius);
    shape.setFillColor(sf::Color::Red);
    shape.setOrigin( radius, radius );    //mozna tez uzyc shape.getRadius();
    shape.setPosition(x, y);

    while (window.isOpen()){
        sf::Event event;

        if ( x > width-radius  ) { vx *= -1; }
        else if ( y > height-radius ) { vy *= -1; }
        else if ( x <= radius || x <= 0 ) { vx *= -1; }
        else if ( y <= radius || y <= 0 ) { vy *= -1; } 
        else if ( x == radius && y == radius ) { vx, vy *= -1;}

        x = x + vx *t;
        y = y + vy *t;

        shape.setPosition(x,y);


    while (window.pollEvent(event)){
        if (event.type == sf::Event::Closed)
                window.close();
            
            if(event.type == sf::Event::KeyPressed)
                    keyonoff=1-keyonoff;
                    if (event.key.code == sf::Keyboard::Key::Escape)
                        window.close();
        
        
    }

    window.clear(sf::Color::Black);

    if(keyonoff)
         
        window.draw(shape);
        window.display();    
        }
    
    return 0;
}