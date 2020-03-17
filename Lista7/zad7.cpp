#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <vector>
#include <ctime>


const int width=800;
const int height=800;
const int N=10;
float x[N] = {};
float y[N] = {};
float vx[N] = {};
float vy[N] = {};
int colors[N] = {};
float dt = 0.001;
float g = -0.5;
  
int main()
{
    srand(time(NULL));
    int j = 0;
    while (j < N)
    {   
        float random_x = rand() % width/2;
        float random_y = rand() % height/2;
        float random_vx = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
        float random_vy = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
        int random_color = rand() % 255;

        vx[j] = random_vx;
        vy[j] = random_vy;
        x[j] = random_x;
        y[j] = random_y; 
        colors[j] = random_color;
        j++;
    }

sf::RenderWindow window(sf::VideoMode(width, height), "Lista 7 punkty 7-9");
std::vector<sf::CircleShape> circle(N);
for (int i = 0; i < N; i++)
{
        sf::CircleShape shape(height/6);
        shape.setOutlineThickness(3);
        shape.setOutlineColor(sf::Color(10,0,0));
        circle[i] = shape;

}
while (window.isOpen())
{
    for (int i = 0;i<N;i++){

        if (x[i] > width - (width/3))
        {
            vx[i] = -vx[i];
        }
        if(x[i] < 3)
        {
            vx[i] = -vx[i];
        }
        if(y[i] > (height - (height/3)))
        {
          vy[i] = -vy[i];
           y[i] = height -( height/3); 
        }
        if(y[i] < 3)
        {
            vy[i] = -vy[i];
        }
        vy[i] = vy[i] - g*dt;
        x[i] += vx[i];
        y[i] += vy[i];
         
        circle[i].setFillColor(sf::Color(colors[i],0, 100));
    }
        sf::Event event; 
        while (window.pollEvent(event))
        {
            
        if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape) // uzytkownik kliknal zamkniecie okna
            window.close();
        }
    window.clear(sf::Color::Black); 
    for(int i = 0; i<N; i++)
        {
            window.draw(circle[i]);
            circle[i].setPosition(x[i], y[i]);
        }
    window.display();
        }

return 0;
};