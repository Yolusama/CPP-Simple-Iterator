#pragma once

//以数组指针迭代为例
template<class T>
class Iterator {
private:
	T* ptr;
public:
	Iterator():ptr(nullptr){}
	Iterator(T* ptr) {
		this->ptr = ptr;
	}
	//重载*，&运算符使类具有指针的功能
	T& operator *() {
		return *ptr;
	}
	T* operator ->() {
		return ptr;
	}
	const T& operator *()const {
		return *ptr;
	}
	const T* operator ->()const {
		return ptr;
	}
	//重载后置++运算符
	Iterator& operator ++(int){
		ptr++;
		return *this;
	}
	//重载前置++运算符
	Iterator& operator ++() {
		++ptr;
		return *this;
	}
	//重载+运算符
	const Iterator& operator +(const int& count) {
		return Iterator(ptr + count);
	}
	//重载后置--运算符
	Iterator& operator--(int) {
		ptr--;
		return *this;
	}
	//重载前置--运算符
	Iterator& operator --() {
		--ptr;
		return *this;
	}
	//重载+运算符
	const Iterator& operator -(const int& count) {
		return Iterator(ptr - count);
	}
	//重载==运算符
	bool operator ==(const Iterator& other)const {
		return this->ptr == other.ptr;
	}
	//重载!=运算符
	bool operator !=(const Iterator& other)const {
		return this->ptr != other.ptr;
	}
	//重载>运算符
	bool operator >(const Iterator& other)const {
		return this->ptr > other.ptr;
	}
	//重载<运算符
	bool operator < (const Iterator& other)const {
		return this->ptr <= other.ptr;
	}
	//重载>=运算符
	bool operator >=(const Iterator& other)const {
		return this->ptr >= other.ptr;
	}
	//重载<=运算符
	bool operator <= (const Iterator & other)const {
		return this->ptr <= other.ptr;
	}
};