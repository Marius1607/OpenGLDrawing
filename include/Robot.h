#ifndef ROBOT_H
#define ROBOT_H
#include <Triangle.h>
#include <Rectangle.h>
#include <Line.h>
#include <Point.h>


class Robot
{
    public:
        Robot();
        virtual ~Robot();
        void draw();

    private:
        Triangle nose;
        Point eye1, eye2;
        Rectangle body, head;
        Line mouth, leftArm, rightArm, leftLeg, rightLeg, neck;
};

#endif // ROBOT_H
