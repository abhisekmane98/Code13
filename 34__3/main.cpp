#include"34_3.h"
#include<iostream>
#include<conio.h>
#include<utility>

A make_A();
int main()
{
	
	A a1=std::move(make_A());
	
}
A make_A()
{
	A a(2,"bonapart");
	return a;
	
}
