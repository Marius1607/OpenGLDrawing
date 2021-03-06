#include "Point.h"
#include "EngineGlut.h"
#include <iostream>
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

float Point::getX()const{
    return this -> x;
}

void Point::setX(double x){
    this -> x =x;
}

float Point::getY() const{
    return this -> y;
}

void Point::setY(double y){
    this -> y = y;
}

void Point::draw()
{
    this ->e.drawPoint(int(this->x), int(this-> y));
}

void Point::print(){
    std::cout << *this;
}
ostream& operator<<(ostream& os, const Point& p)
{
    os << "The X coordinate of the point: " << p.x << endl;
    os << "The Y coordinate of the point: " << p.y << endl;
    return os;
}
