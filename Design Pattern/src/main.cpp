#include <iostream>
#include "Singleton.h"
#include "Baoma.h"
#include "BaomaFactory.h"

int main() {

	//����ģʽ
	auto a = Singleton::getSingleton();
	auto b = Singleton::getSingleton();
	//���������ͬһ����ַ
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	//�ǹ���ģʽ���ɶ���
	Car* c = new Baoma();
	std::cout << c->get_name() << std::endl;

	//����ģʽ���ɶ���
	Car* x = (new BaomaFactory())->getCar();
	std::cout << (*x).get_name() << std::endl;

	return 0;
}