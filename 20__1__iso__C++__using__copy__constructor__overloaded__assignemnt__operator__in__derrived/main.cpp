#include"20.h"
#include<iostream>

int main()
{
	der d1,d2;
	
	
	d1.set_value_der(1,2);
	d1.set_dynamic_array();
	d1.set_value(3,4);
	
	d2=d1;
	
	
	d2.display();
	d2.display_der();
	
}
