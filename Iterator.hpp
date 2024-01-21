#pragma once

//������ָ�����Ϊ��
template<class T>
class Iterator {
private:
	T* ptr;
public:
	Iterator():ptr(nullptr){}
	Iterator(T* ptr) {
		this->ptr = ptr;
	}
	//����*��&�����ʹ�����ָ��Ĺ���
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
	//���غ���++�����
	Iterator& operator ++(int){
		ptr++;
		return *this;
	}
	//����ǰ��++�����
	Iterator& operator ++() {
		++ptr;
		return *this;
	}
	//����+�����
	const Iterator& operator +(const int& count) {
		return Iterator(ptr + count);
	}
	//���غ���--�����
	Iterator& operator--(int) {
		ptr--;
		return *this;
	}
	//����ǰ��--�����
	Iterator& operator --() {
		--ptr;
		return *this;
	}
	//����+�����
	const Iterator& operator -(const int& count) {
		return Iterator(ptr - count);
	}
	//����==�����
	bool operator ==(const Iterator& other)const {
		return this->ptr == other.ptr;
	}
	//����!=�����
	bool operator !=(const Iterator& other)const {
		return this->ptr != other.ptr;
	}
	//����>�����
	bool operator >(const Iterator& other)const {
		return this->ptr > other.ptr;
	}
	//����<�����
	bool operator < (const Iterator& other)const {
		return this->ptr <= other.ptr;
	}
	//����>=�����
	bool operator >=(const Iterator& other)const {
		return this->ptr >= other.ptr;
	}
	//����<=�����
	bool operator <= (const Iterator & other)const {
		return this->ptr <= other.ptr;
	}
};