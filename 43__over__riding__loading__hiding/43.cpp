#include"43.h"
#include<iostream>

void base::f1()
{
	std::cout<<"f1 base\n";
}
void base::f2()
{
	std::cout<<"f2 base\n";
}

void der::f1()
{
	std::cout<<"f1 der\n";
}
void der::f2(int k)
{
	std::cout<<"f2 der\n";
}
