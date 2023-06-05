#ifndef BAOMAFACTORY_H
#define BAOMAFACTORY_H
#include "CarFactory.h"

class BaomaFactory :public CarFactory {
public:
	Car* getCar() override;
};

#endif // !BAOMAFACTORY_H
