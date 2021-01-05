#ifndef STREET_H
#define STREET_H

#include "TrafficObject.h"

class Interesection;

class Steet : public TrafficObject, public std::enable_shared_from_this<Street> // needed for safely generating additional std::shared_ptr instaces
{
    public:
        Street(); //constructor

        //getter/setter
        double getLength() {return _length;}
        void setInIntersection(std::shared_ptr<Intersection> in);
        void setOutIntersection(std::shared_ptr<Intersection> out);
        std::shared_ptr<Intersection> getOutIntersection() {return _interOut;}
        std::shared_ptr<Intersection> getInIntersection() {return _interIn;}
        
        // This function is needed for sharing the current shared instance with other entities by creating another instance of the shared pointer and managing it
        std::shared_ptr<Street> get_shared_this() {return shared_from_this();} 

    private:
        //variables
        double _length:
        std::shared_ptr<Intersection> _interIn, _interOut;
};

#endif