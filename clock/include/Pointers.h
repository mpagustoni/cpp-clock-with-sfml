#ifndef POINTERS_H
#define POINTERS_H
#include <SFML/Graphics.hpp>
#include <ctime>
using namespace sf;
class Pointers
{
    public:
        Pointers(Vector2f windowSize);
        virtual ~Pointers();
        RectangleShape secPointer;
        RectangleShape minPointer;
        RectangleShape hourPointer;
        void update();
    protected:

    private:
        const float pointerWidth = 3.0;
        Vector2f pointerPos;
        time_t now;
        struct tm  tstruct;
};

#endif // POINTERS_H
