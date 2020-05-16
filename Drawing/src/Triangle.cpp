#include "Triangle.h"
#include <EngineGlut.h>
Triangle::Triangle()
{
    //ctor
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
Triangle::Triangle(Point a, Point b, Point c, bool full)
{
    this -> a = a;
    this -> b = b;
    this -> c = c;
    this -> fullDraw = full;
}

void Triangle::draw(){
    EngineGlut e;
    if (this -> fullDraw)
    {
        e.drawSurface(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
    }

    else {
    e.drawLine(this -> a.getX(), this -> a.getY(), this -> b.getX(), this -> b.getY());
    e.drawLine(this -> a.getX(), this -> a.getY(), this -> c.getX(), this -> c.getY());
    e.drawLine(this -> b.getX(), this -> b.getY(), this -> c.getX(), this -> c.getY());
    }
}
