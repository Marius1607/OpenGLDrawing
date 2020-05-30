#include "Rectangle.h"
#include <EngineGlut.h>

Rectangle::Rectangle()
{
    //ctor
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

void Rectangle::draw(){
    EngineGlut e;
    if (this -> fullDraw)
    {
        e.drawSurface(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
        e.drawSurface(this -> d.getX(), this -> d.getY(), this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
    }

    else {
        e.drawLine(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY());
        e.drawLine(this -> b.getX(), this -> b.getY(), this -> d.getX(), this -> d.getY());
        e.drawLine(this -> d.getX(), this -> d.getY(), this -> c.getX(), this -> c.getY());
        e.drawLine(this -> c.getX(), this -> c.getY(), this -> a.getX(), this -> a.getY());

    }
}
