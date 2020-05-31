#include "Rectangle.h"
#include <EngineGlut.h>
#include <iostream>
Rectangle::Rectangle()
{
    this -> a.setX(100);
    this -> a.setY(100);
    this -> b.setX(-100);
    this -> b.setY(100);
    this -> c.setX(50);
    this -> c.setY(30);
    this -> d.setX(-30);
    this -> d.setY(50);
    this -> fullDraw = false;
}

Rectangle::~Rectangle()
{
    //dtor
}

Rectangle::Rectangle(Point a, double height, double width, bool fullDraw){
    this -> a = a;
    this -> b.setX(a.getX()+width);
    this -> b.setY(a.getY());
    this -> c.setX(a.getX());
    this -> c.setY(a.getY() - height);
    this -> d.setX(this -> b.getX());
    this -> d.setY(this -> b.getY() - height);
    this ->fullDraw = fullDraw;
}

Rectangle::Rectangle(double x, double y, double height, double width, bool fullDraw){
    this -> a.setX(x);
    this -> a.setY(y);
    this -> b.setX(x+width);
    this -> b.setY(y);
    this -> c.setX(x);
    this -> c.setY(y - height);
    this -> d.setX(this -> b.getX());
    this -> d.setY(this -> b.getY() - height);
    this ->fullDraw = fullDraw;
    this -> fullDraw = fullDraw;
}

Rectangle Rectangle::operator*(float n)
{
    this -> b.setX(this->b.getX() * n);
    this -> b.setY(this->b.getY() * n);
    this -> c.setX(this->c.getX() * n);
    this -> c.setY(this->c.getY() * n);
    this -> d.setX(this->d.getX() * n);
    this -> d.setY(this->d.getY() * n);
}

void Rectangle::draw(){
    if (this -> fullDraw)
    {
        this->e.drawSurface(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
        this->e.drawSurface(this -> d.getX(), this -> d.getY(), this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
    }

    else {
        this->e.drawLine(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY());
        this->e.drawLine(this -> b.getX(), this -> b.getY(), this -> d.getX(), this -> d.getY());
        this->e.drawLine(this -> d.getX(), this -> d.getY(), this -> c.getX(), this -> c.getY());
        this->e.drawLine(this -> c.getX(), this -> c.getY(), this -> a.getX(), this -> a.getY());

    }
}

void Rectangle::print(){
    std::cout << *this;
}

ostream& operator<<(ostream& os, const Rectangle &r)
{
    os << "The X coordinate of the point A: " << r.a.getX() << endl;
    os << "The Y coordinate of the point A: " << r.a.getY() << endl;
    os << "The X coordinate of the point B: " << r.b.getX() << endl;
    os << "The Y coordinate of the point B: " << r.b.getY() << endl;
    os << "The X coordinate of the point C: " << r.c.getX() << endl;
    os << "The Y coordinate of the point C: " << r.c.getY() << endl;
    os << "The X coordinate of the point D: " << r.d.getX() << endl;
    os << "The Y coordinate of the point D: " << r.d.getY() << endl;
    return os;
}
