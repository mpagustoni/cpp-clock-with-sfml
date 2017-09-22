#include <iostream>
#include <SFML/Graphics.hpp>
#include <Pointers.h>

using namespace std;

int main()
{
    sf::Vector2u windowSize(200, 200);
    sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "SFML works!");
    Pointers pts(window);

    sf::Texture clockTexture;
    if(!clockTexture.loadFromFile("clockTexture.png")){
        return EXIT_FAILURE;
    }
    sf::Sprite clockSprite(clockTexture);
    clockSprite.setScale(windowSize.x / clockSprite.getLocalBounds().width, windowSize.y / clockSprite.getLocalBounds().height);

    sf::Vector2u pointerPos(98, 98);



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(clockSprite);
        window.display();
    }

    return EXIT_SUCCESS;
}
