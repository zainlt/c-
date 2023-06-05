#include <iostream>
#include "Singleton.h"
#include "Baoma.h"
#include "BaomaFactory.h"

int main() {

	//单例模式
	auto a = Singleton::getSingleton();
	auto b = Singleton::getSingleton();
	//输出发现是同一个地址
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	//非工厂模式生成对象
	Car* c = new Baoma();
	std::cout << c->get_name() << std::endl;

	//工厂模式生成对象
	Car* x = (new BaomaFactory())->getCar();
	std::cout << (*x).get_name() << std::endl;

	return 0;
}