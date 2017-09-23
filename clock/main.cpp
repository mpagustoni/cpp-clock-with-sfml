#include <iostream>
#include <SFML/Graphics.hpp>
#include <Pointers.h>

using namespace std;

int main()
{
    sf::Vector2f windowSize(200, 200);
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "SFML works!", sf::Style::Default, settings);
    window.setFramerateLimit(2);//2 per second so the cpu doesn't make massive work :/
    Pointers pts(windowSize);

    sf::Texture clockTexture;
    if(!clockTexture.loadFromFile("clockTexture.png")){
        return EXIT_FAILURE;
    }

    sf::Sprite clockSprite(clockTexture);
    clockSprite.setScale(windowSize.x / clockSprite.getLocalBounds().width, windowSize.y / clockSprite.getLocalBounds().height);

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
        pts.update();
        window.draw(pts.hourPointer);
        window.draw(pts.minPointer);
        window.draw(pts.secPointer);
        window.display();
    }

    return EXIT_SUCCESS;
}
