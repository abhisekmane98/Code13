#include"18.h"
#include<iostream>
#include<cstring>

int main()
{
	Base a1;
	
	a1.display_Base();
	
//	Base *p1=(Base*)&b1;  // can it call derrived class object
	Der *p2=(Der*)&a1;  //  if he trying to acess derr class object
	
	p2->a=3;
	p2->b=4;
	p2->c=5.5555;
//	p2->ch='a';
//	strcpy(p2->str,"bonapart");
	
//	p2->display_Base();
	p2->display_Der();
//	p2->display_b_Der();
	p2->display_c_Der();
	
	
}
