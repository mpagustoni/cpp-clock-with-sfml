#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    sf::Vector2u windowSize(200, 200);
    sf::RenderWindow window(sf::VideoMode(windowSize.x, windowSize.y), "SFML works!");
    sf::Texture clockTexture;
    if(!clockTexture.loadFromFile("clockTexture.png")){
        return EXIT_FAILURE;
    }
    sf::Sprite clockSprite(clockTexture);
    clockSprite.setScale(windowSize.x / clockSprite.getLocalBounds().width, windowSize.y / clockSprite.getLocalBounds().height);
    cout << windowSize.x << endl;

    sf::Vector2u pointerPos(98, 98);

    sf::RectangleShape secPointer(sf::Vector2f(5, (windowSize.y / 2) - 10));
    secPointer.setPosition(pointerPos.x, pointerPos.y);
    secPointer.setFillColor(sf::Color::Red);

    sf::RectangleShape minPointer(sf::Vector2f(5, (windowSize.y / 2) - 10));
    minPointer.setPosition(pointerPos.x, pointerPos.y);
    minPointer.setFillColor(sf::Color::Black);

    minPointer.rotate(270);

    sf::RectangleShape hourPointer(sf::Vector2f(sf::Vector2f(5, (windowSize.y / 2) - 25)));
    hourPointer.setPosition(pointerPos.x, pointerPos.y);
    hourPointer.setFillColor(sf::Color::Black);

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
        window.draw(secPointer);
        window.draw(minPointer);
        window.draw(hourPointer);
        window.display();
    }

    return EXIT_SUCCESS;
}
