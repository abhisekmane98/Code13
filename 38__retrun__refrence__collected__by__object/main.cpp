#include"38.h"
#include<iostream>

int main()
{
	A a1,a2;
	a1.set_value(2,3);
//	a2.set_value(8,9);
	
	a2=a1.return_reference();
	std::cout<<"&a2 "<<&a2<<"\n";
	

}
