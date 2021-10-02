#include"27.h"
#include<iostream>

int main()
{
	A a1("bonapart",52);
	a1.display();
	
	A a2(a1);
	a2.display();
	
	A a3;
	a3=a1;
	a3.display();
	
}
