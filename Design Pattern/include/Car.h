#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
public:
	virtual std::string get_name() = 0;
	Car() = default;
};

#endif //CAR_H
