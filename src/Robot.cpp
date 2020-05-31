#include "Robot.h"

Robot::Robot()
{
    this -> neck = Line(0,0,0,5);
    this -> head = Rectangle(-20, 45, 40, 40, false);
    this -> eye1 = Point(-13, 30);
    this -> eye2 = Point(13, 30);
    this -> nose = Triangle(0, 25, -4, 20, 4, 20, false);
    this -> mouth = Line(-13,12, 13,12);
    this -> body = Rectangle(-25,0,100,50,false);
    this -> leftArm = Line(-25,-5,-50,-70);
    this -> rightArm = Line(25,-5,50,-70);
    this -> leftLeg = Line(-15,-100,-15,-150);
    this -> rightLeg = Line(15,-100,15,-150);
}

Robot::~Robot()
{
    //dtor
}

void Robot::draw() {
    this -> head.draw();
    this -> neck.draw();
    this -> eye1.draw();
    this -> eye2.draw();
    this -> nose.draw();
    this -> mouth.draw();
    this -> body.draw();
    this -> leftArm.draw();
    this -> rightArm.draw();
    this -> leftLeg.draw();
    this -> rightLeg.draw();
}
