#ifndef BAOMA_H
#define BAOMA_H
#include "Car.h"

class Baoma :public Car {
public:
	std::string get_name() override;
};

#endif // !BAOMA_H

