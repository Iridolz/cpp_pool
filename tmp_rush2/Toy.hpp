#ifndef TOY_H
#define TOY_H

#include "Object.hpp"

class Toy : public Object
{
private:
public:
    Toy();
    ~Toy();
    virtual void isTaken(void) const = 0;
};

#endif