#include "Line.h"
#include "EngineGlut.h"
#include <iostream>

Line::Line()
{
    this -> x.setX(0);
    this -> x.setY(100);
    this -> y.setX(0);
    this -> y.setY(0);
}

Line::~Line()
{
    //dtor
}

Line::Line(double a, double b, double c, double d)
{
    this -> x.setX(a);
    this -> x.setY(b);
    this -> y.setX(c);
    this -> y.setY(d);

}

Line Line::operator*(float n)
{
    this -> y.setX(this->y.getX() * n);
    this -> y.setY(this->y.getY() * n);
}
Line::Line(Point x, Point y)
{
    this -> x = x;
    this -> y = y;
}

void Line::draw(){
    this->e.drawLine(this -> x.getX(), this -> x.getY(), this -> y.getX(), this -> y.getY());
}

void Line::print(){
    std::cout << *this;
}

ostream& operator<<(ostream& os, const Line &l)
{
    os << "The X coordinate of the point A: " << l.x.getX() << endl;
    os << "The Y coordinate of the point A: " << l.x.getY() << endl;
    os << "The X coordinate of the point B: " << l.y.getX() << endl;
    os << "The Y coordinate of the point B: " << l.y.getY() << endl;
    return os;
}
