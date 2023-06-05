#include<iostream>
#include<cassert>
using namespace std;

class Person {
public:
	string name;
	int age;
	public: Person() {
		name = "hhh";
		age = 18;
		cout << "构造函数" << endl;
	}

	~Person() {
		cout << "析构函数" << endl;
	}
};

template<class T>
class smartPointer {
private:
	T* _ptr;
	size_t* _count;
public:
	smartPointer(T* p = nullptr) {
		_ptr = p;
		if (p == nullptr) {
			_count = new size_t(0);
		}
		else {
			_count = new size_t(1);
		}
	}

	smartPointer(smartPointer& sp) {
		_ptr = sp._ptr;
		_count = sp._count;
		(*_count)++;
	}

	smartPointer& operator=(smartPointer& sp) {
		if (sp._ptr == _ptr) {
			return *this;
		}
		//1.解决旧的
		(*_count)--;
		if (*_count == 0) {
			delete _ptr;
			delete _count;
			cout << "智能指针指向的对象已释放" << endl;
		}
		//2.指向新对象
		_ptr = sp._ptr;
		_count = sp._count;
		(*_count)++;

		return *this;
	}
	
	T* operator->() {
		assert(_ptr != nullptr);
		return _ptr;
	}
	T& operator*() {
		assert(_ptr != nullptr);
		return *_ptr;
	}
	size_t use_count() {
		return *_count;
	}

	~smartPointer() {
		if (_ptr == nullptr) {
			cout << "指针为空" << endl;
			delete _count;
			return;
		}
		(*_count)--;
		if (*_count == 0) {
			delete _ptr;
			delete _count;
			cout << "智能指针指向的对象已释放" << endl;
		}
	}
};

int main() {
	smartPointer<Person> sp(new Person());
	cout << sp->name << endl;
	cout << (*sp).age << endl;
	cout << sp.use_count() << endl;
	smartPointer<Person> sp2(sp);
	cout << sp2.use_count() << endl;
	smartPointer<Person> sp3(new Person());
	sp3 = sp;
	cout << sp3.use_count() << endl;
}