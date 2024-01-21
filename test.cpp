#include<iostream>
#include "Iterator.hpp"

int main() {
	int a[] = { 1,2,4,7,8};
	Iterator<int> begin = a;
	Iterator<int> end = a+sizeof(a)/sizeof(int)-1;
	std::cout << *begin << '\n';
	std::cout << *(begin + 2) << '\n';
	Iterator<int> t1 = begin;
	Iterator<int> t2 = end;
	std::cout << "Ë³Ðò±éÀú£º";
	while (t1 < t2) {
	std::cout << *t1 << ' ';
	t1++;
	}
	std::cout << "\nÄæÐò±éÀú£º";
	t2 = begin;
	--t1;
	while (t1>=t2) {
		std::cout << *t1 << ' ';
		t1--;
	}
	return 0;
}