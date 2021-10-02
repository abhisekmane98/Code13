#include"30_1.h"
#include<iostream>
#include<conio.h>

A make_A(void);
int main()
{
	A a1(1857,"Revolution");      // ctor with arg
	
//	A a2(a1);                // copy ctor

//	A a2(a1);				 // auto_ptr Move ctor	       a2(lvalue of A)
//	A a3(make_A() );         // auto_ptr Move ctor         a3(rvalue of A)

	A a4(make_A() );         // unique_ptr Move ctor       a3(rvalue of A)
	
}
A make_A()
{
	A *a=new A;
	a->set_data(1769,"nepoleon");
	return *a;
	
}
