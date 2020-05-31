#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<Triangle.h>
#include<Point.h>
#include<Rectangle.h>

class Airplane
{
    public:
        Airplane();
        void draw();

    private:
        Triangle head, body1, body2, tail1, tail2;
        Point point1, point2;
        Rectangle body;
};

#endif // AIRPLANE_H
