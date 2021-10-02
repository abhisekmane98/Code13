#include"34_4.h"
#include<iostream>

A make_A();
int main()
{
	A a1;
	a1=make_A();

	
	a1.display();
	
}
A make_A()
{
	A a(2,"bonapart");
	return a;
	
}
