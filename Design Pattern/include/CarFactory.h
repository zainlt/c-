#ifndef CARFACTORY_H
#define CARFACTORY_H
#include "Car.h"

class CarFactory {
public:
	virtual Car* getCar() = 0;
};

#endif // !CARFACTORY_H
