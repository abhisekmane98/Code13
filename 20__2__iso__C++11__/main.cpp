#include"20_2.h"
#include<iostream>
#include<conio.h>
int main()
{
	der d1,d2;
	d1.set_value_der(1,2);
	d1.set_dynamic_array();
	d1.set_value(3,4);
	
	std::cout<<"\n";
	der d3=d1;
	std::cout<<"\n";
//	d2.display();
//	d2.display_der();
}
