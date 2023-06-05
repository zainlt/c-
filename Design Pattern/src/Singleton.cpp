#include "Singleton.h"

//static要特殊处理
//instance是私有，在类内调用
Singleton* Singleton::instance = new Singleton();
Singleton* Singleton::getSingleton() {
	return instance;
}

Singleton::Singleton() {

}