#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>

class Object
{
private:
    std::string _title;
public:
    Object();
    ~Object();
    std::string getTitle(void) const {return _title;}
};

#endif