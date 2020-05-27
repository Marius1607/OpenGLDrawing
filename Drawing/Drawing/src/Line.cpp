#include "Line.h"
#include "EngineGlut.h"


Line::Line()
{
    //ctor
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

Line::Line(Point x, Point y)
{
    this -> x = x;
    this -> y = y;
}

void Line::draw(){
    EngineGlut e;
    e.drawLine(this -> x.getX(), this -> x.getY(), this -> y.getX(), this -> y.getY());
}
