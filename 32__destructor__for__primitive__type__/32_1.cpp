#include<iostream>

int main()
{
	typedef int INT;
	
	INT a=3;

 	std::cout<<a<<"\n";
	a.~INT();
	
	std::cout<<a;
	
}
