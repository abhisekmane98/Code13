#include"40.h"
#include<iostream>

A return_rvalue(void);

int main()
{
//	A a1(3,5);
//	A &a2=a1;
//	std::cout<<&a2<<"\n"<<&a1<<"\n";
	
	A &&a3=return_rvalue();
	std::cout<<&a3<<"\n";

}

A return_rvalue()
{
	std::cout<<"return_rvalue fun\n";
	A a(11,13);
	std::cout<<&a<<"\n";
	return a;
}



