#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    int keyonoff=1;
    float height = 800;
    float width = 600;
    float radius = 100;
    float x = width/2;
    float y = height/2;

    sf::RenderWindow window(sf::VideoMode(width, height), "Lista 7");
    sf::CircleShape shape(radius);
    shape.setFillColor(sf::Color::Red);
    shape.setOrigin( radius, radius );    //mozna tez uzyc shape.getRadius();
    shape.setPosition(x, y);

    while (window.isOpen()){
        sf::Event event;

    while (window.pollEvent(event)){
        if (event.type == sf::Event::Closed)
                window.close();
            
            if(event.type == sf::Event::KeyPressed)
                    keyonoff=1-keyonoff;
    }

    window.clear(sf::Color::Black);

    if(keyonoff)

        
        window.draw(shape);
        
        window.display();    
        }
    
    return 0;
}