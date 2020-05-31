#include "Airplane.h"
#include <Triangle.h>
Airplane::Airplane()
{
    this->head = Triangle(0,0,-10,-20,10,-20,false);
    this->body1 = Triangle(30, -20, 30, -40, -30, -20, false);
    this->body2 = Triangle(-30, -20, -30, -40, 30, -40, false);
    this->body = Rectangle(-10,-40,30,20,false);
    this->tail1 = Triangle(-20,-70,20,-70,-20,-90,false);
    this->tail2 = Triangle(20,-70,20,-90,-20,-90,false);
    this->point1 = Point(20,-30);
    this->point2 = Point(-20,-30);
}

void Airplane::draw(){
    this -> head.draw();
    this -> body1.draw();
    this -> body2.draw();
    this -> body.draw();
    this -> tail1.draw();
    this -> tail2.draw();
    this -> point1.draw();
    this -> point2.draw();
}
