#include "Singleton.h"

//staticҪ���⴦��
//instance��˽�У������ڵ���
Singleton* Singleton::instance = new Singleton();
Singleton* Singleton::getSingleton() {
	return instance;
}

Singleton::Singleton() {

}