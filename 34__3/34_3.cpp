#include"34_3.h"
#include<iostream>
#include<conio.h>
#include<cstring>

A::A()                                       // O arg ctor
{
	std::cout<<"0 arg ctor\n";
	p=0;
	s=nullptr;
		
}

A::A(int k1,const char *str)                 // 2 arg ctor
{
	std::cout<<"2 arg ctor\n";
	
	p=k1;
	s=new char[strlen(str)+1];
	strcpy(s,str);
	
}

A::A(A &a)                                    // copy ctor
{
	std::cout<<"copy ctor\n";
	
	p=a.p;
	s=new char[strlen(a.s)+1];
	strcpy(s,a.s);
	
}

A::A(A &&a)                                    //  Move ctor
{
	std::cout<<"Move ctor\n";
	
	p=a.p;
	s=a.s;
	
	a.s=nullptr;
	
}


A& A::operator=(A &a)                          // Overloaded assignement opeator `OVA`
{
	std::cout<<"overloade= operator\n";
	
	if(this!=&a)
	{
		delete []s;
		s=nullptr;
	
		p=a.p;
		s=new char[strlen(a.s)+1];
		strcpy(s,a.s);
	}
	else
	{
		
	}
	
	return *this;
	
}

A& A::operator=(A &&a)                           // `M_OVA`
{
	std::cout<<"Move overloade = operator\n";
	
	p=a.p;
	delete []s;
	s=nullptr;
	
	s=a.s;
	a.s=nullptr;
	
	return *this;
	
}

A::~A()                                         // Dctor
{
	delete []s;
	std::cout<<"Dctor\n";
	
}

void A::display()
{
	std::cout<<p<<" "<<s<<"\n";
	
}
