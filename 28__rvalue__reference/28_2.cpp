#include<iostream>

void fun(int&&);
int main()
{
	int a=97;
	std::cout<<&a<<"\n";
	fun(+a);
}
void fun(int&& p)
{
	p=p+2;
	std::cout<<&p;
}
