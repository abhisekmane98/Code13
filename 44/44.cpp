#include<iostream>

int main()
{
	int (*p)[3];
	std::cout<<&p<<"\n";
	std::cout<<p<<"\n";
	std::cout<<&p[0]<<"\n";
	std::cout<<&p[1]<<"\n";
	std::cout<<&p[2]<<"\n";
}
