#include<iostream>

int& return_int();
int main()
{
	int a;
	a=return_int();
	std::cout<<a;
}
int& return_int()
{
	static int p=4;
	return p;
}
