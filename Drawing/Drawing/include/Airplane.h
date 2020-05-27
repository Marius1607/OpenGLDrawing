#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <Triangle.h>
#include <Rectangle.h>
#include <Point.h>

class Airplane
{
    private:
        Triangle head, body1, body2, tail1, tail2;
        Point point1, point2;
        Rectangle body;
    public:
        Airplane();

};

#endif // AIRPLANE_H
