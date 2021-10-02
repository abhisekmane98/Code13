#include"39.h"
#include<iostream>
#include<conio.h>

A return_rvalue(void);

int main()
{
	A a1,a2(3,5);
//	A &a3=a2;
//	std::cout<<&a3<<"\n"<<&a2<<"\n";
	
	A &&a3=return_rvalue();
	std::cout<<&a3<<"\n";
	
//	std::cout<<&a2<<"\n";
	
//	a2.return_object_val();
//	a2.return_object_ref();
//	a1.passing_object_ref(a2);
//	a1.passing_object_val(a2);
	getch();
	
//	a1.operator=(a2.return_object() );

}

A return_rvalue()
{
	std::cout<<"return_rvalue fun\n";
	A a(11,13);
	std::cout<<&a<<"\n";
	return a;
}

