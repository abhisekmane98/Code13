#include"24.h"
#include<iostream>

int main()
{
	int x=99;
	std::cout<<x<<" "<<&x<<"\n";
	A a1(x);
	
	std::cout<<&A::i;
	
}
