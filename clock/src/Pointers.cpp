#include "Pointers.h"

Pointers::Pointers(sf::RenderWindow *w, sf::Vector2u windowSize)
{
    this->window = window;
    this->windowSize = windowSize;
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
}

Pointers::~Pointers()
{
    //dtor
}
void Pointers::draw(){
    this->window.draw(secPointer);
    //this->windowdraw(minPointer);
    //this->window->draw(hourPointer);
}
