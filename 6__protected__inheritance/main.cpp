#include"6.h"
#include<iostream>

int main()
{
	B b1(2,3,5,7,1,1);
	
	b1.B_display();
	b1.display_A_via_B();
	b1.display_private_A_via_B();
	b1.display_protected_n_public_A_via_B();	
	
	C c;
	c.modify_A_protected_n_public_via_C();
	c.display_A_via_C();
	c.c5=80;
	c.display_A_via_C();
}
