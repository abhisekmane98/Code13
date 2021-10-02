#include"2.h"
#include<iostream>

void Ex::fun()
{
	std::cout<<"Ex->fun\n";
}
void Ex::open()
{
	std::cout<<"Ex->open\n";
}



void NewEx::save()
{
	std::cout<<"NewEx->save\n";
	open();
	Ex::open();
}
void NewEx::open()
{
	std::cout<<"NewEx->open\n";
}

