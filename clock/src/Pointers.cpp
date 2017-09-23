#include "Pointers.h"
Pointers::Pointers(Vector2f windowSize)
{
    this->pointerPos = Vector2f(98, 98);
    this->secPointer = RectangleShape(Vector2f(pointerWidth, (-windowSize.y / 2) + 10));
    this->secPointer.setOrigin(pointerWidth / 2, 0);
    this->secPointer.setPosition(pointerPos.x, pointerPos.y);
    this->secPointer.setFillColor(Color::Red);

    this->minPointer = RectangleShape(Vector2f(pointerWidth, (-windowSize.y / 2) + 10));
    this->minPointer.setOrigin(pointerWidth / 2 , 0);
    this->minPointer.setPosition(pointerPos.x, pointerPos.y);
    this->minPointer.setFillColor(Color::Black);

    this->hourPointer = RectangleShape(Vector2f(pointerWidth, (-windowSize.y / 2) + 25));
    this->hourPointer.setOrigin(pointerWidth / 2, 0);
    this->hourPointer.setPosition(pointerPos.x, pointerPos.y);
    this->hourPointer.setFillColor(Color::Black);
}

Pointers::~Pointers()
{
    //dtor
}

void Pointers::update(){
    now = time(0);
    tstruct = *localtime(&now);
    this->secPointer.setRotation(tstruct.tm_sec * 6);
    this->minPointer.setRotation(tstruct.tm_min * 6);
    this->hourPointer.setRotation(tstruct.tm_hour * 30);
}
