#ifndef POINTERS_H
#define POINTERS_H
#include <SFML/Graphics.hpp>

class Pointers
{
    public:
        Pointers(sf::RenderWindow *w, sf::Vector2u windowSize);
        virtual ~Pointers();
        void draw();
    protected:

    private:
        sf::RectangleShape secPointer;
        sf::RectangleShape minPointer;
        sf::RectangleShape hourPointer;
        sf::Vector2u windowSize;
        sf::RenderWindow *window;
        sf::Vector2u pointerPos;
};

#endif // POINTERS_H
