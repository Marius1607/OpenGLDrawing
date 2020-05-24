#include "Airplane.h"
#include <Triangle.h>
Airplane::Airplane()
{
    this->head = Triangle(0,0,-10,-20,10,-20,false);
    this->body1 = Triangle(30, -20, 30, -40, -30, -20, false);
    this->body2 = Triangle(-20, -30, -40, -30, 30, -40, false);
}
