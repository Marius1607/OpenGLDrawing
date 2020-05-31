#include "Triangle.h"
#include <EngineGlut.h>
#include <iostream>
Triangle::Triangle()
{
    this -> a.setX(0);
    this -> a.setY(100);
    this -> b.setX(-50);
    this -> b.setY(0);
    this -> c.setX(50);
    this -> c.setY(0);
    this -> fullDraw = false;
}

Triangle::~Triangle()
{
    //dtor
}

Triangle::Triangle(double a, double b, double c, double d, double e, double f, bool full){
    this -> a.setX(a);
    this -> a.setY(b);
    this -> b.setX(c);
    this -> b.setY(d);
    this -> c.setX(e);
    this -> c.setY(f);
    this -> fullDraw = full;
}

Triangle Triangle::operator*(float n)
{
    this -> b.setX(this->b.getX() * n);
    this -> b.setY(this->b.getY() * n);
    this -> c.setX(this->c.getX() * n);
    this -> c.setY(this->c.getY() * n);
}


Triangle::Triangle(Point a, Point b, Point c, bool full)
{
    this -> a = a;
    this -> b = b;
    this -> c = c;
    this -> fullDraw = full;
}

void Triangle::draw(){
    if (this -> fullDraw)
    {
        this->e.drawSurface(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
    }

    else {
    this->e.drawLine(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY());
    this->e.drawLine(this -> a.getX(), this -> a.getY(), this -> c.getX(), this -> c.getY());
    this->e.drawLine(this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
    }
}

void Triangle::print(){
    std::cout << *this;
}

ostream& operator<<(ostream& os, const Triangle &t)
{
    os << "The X coordinate of the point A: " << t.a.getX() << endl;
    os << "The Y coordinate of the point A: " << t.a.getY() << endl;
    os << "The X coordinate of the point B: " << t.b.getX() << endl;
    os << "The Y coordinate of the point B: " << t.b.getY() << endl;
    os << "The X coordinate of the point C: " << t.c.getX() << endl;
    os << "The Y coordinate of the point C: " << t.c.getY() << endl;
    return os;
}
