#ifndef POINTERS_H
#define POINTERS_H


class Pointers
{
    public:
        Pointers(sf::RenderWindow window);
        virtual ~Pointers();

    protected:

    private:
        sf::RectangleShape secPointer;
        sf::RectangleShape minPointer;
        sf::RectangleShape hourPointer;
        sf::RenderWindow window;
        void draw();
};

#endif // POINTERS_H
