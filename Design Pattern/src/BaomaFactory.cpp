#include "BaomaFactory.h"
#include "Baoma.h"

Car* BaomaFactory::getCar() {
	return new Baoma();
}