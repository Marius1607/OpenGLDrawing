#include "Point.h"
#include "EngineGlut.h"

Point ::Point(){
    this -> x = this ->y = 0;
    }
Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{

}

float Point::getX(){
    return this -> x;
}

void Point::setX(double x){
    this -> x =x;
}

float Point::getY(){
    return this -> y;
}

void Point::setY(double y){
    this -> y = y;
}

void Point::draw()
{
    EngineGlut e;
    e.drawPoint(int(this->x), int(this-> y));
}
