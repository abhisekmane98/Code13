#include"30_1.h"
#include<iostream>
#include<cstring>

A::A()
{
	std::cout<<"ctor with no arg\n";
	p=0;
	s=nullptr;
}

A::A(int k1,const char *str) // ctor with arg
{
	std::cout<<"ctor with 2 arg\n";
	p=k1;
	s=new char[strlen(str)+1];
	strcpy(s,str);
}

void A::set_data(int k1,const char *str)
{
	std::cout<<"set data fun\n";
	p=k1;
	s=new char[strlen(str)+1];
	strcpy(s,str);
}
void A::display()
{
	if(s=nullptr)
	{
		std::cout<<p<<" "<<"not pointing to any string\n";
	}
	else
	{
		std::cout<<p<<" "<<s<<"\n";
	}
	
}

/*A::A(A &a)                             // copy ctor
{
	std::cout<<"copy ctor\n";
	p=a.p;
	s=new char[strlen(a.s)+1];
	strcpy(s,a.s);
}*/

/*A::A(A &a)                            // auto_ptr Move ctor
{
	std::cout<<"auto_ptr Move ctor\n";
	p=a.p;
	s=a.s;            // sharing owenership
	a.s=nullptr;	  // trasnfering ownership
}*/

A::A(A &&a)                           // unique_ptr Move ctor
{
	std::cout<<"unique_ptr Move ctor\n";
	p=a.p;
	s=a.s;             // sharing owenership
	a.s=nullptr;	   // transfering ownership
}


