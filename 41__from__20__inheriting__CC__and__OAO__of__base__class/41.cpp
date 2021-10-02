#include"41.h"
#include<iostream>
#include<conio.h>

base::base()
{
	std::cout<<"constructor base-no arg\n";
	p=0; q=0;
}
base::base(int k1,int k2)
{
	std::cout<<"constructor base-arg\n";
	p=k1; q=k2;
}
void base::set_value(int k1,int k2)
{
	p=k1; q=k2;
}
base::base(base &b)
{
	std::cout<<"copy constructor base\n";
	p=b.p;
	q=b.q;
}
base base::operator=(base &b)
{
	std::cout<<"overloaded=operator base\n";
	p=b.p;
	q=b.q;
	return *this;
}
base::~base()
{
	std::cout<<"dctor base\n";
}

void base::display()
{
	std::cout<<p<<" "<<q<<"\n";
}
void der::set_value_der(int k1,int k2)
{
	x=k1; y=k2;
}
void der::display_der()
{
	std::cout<<x<<" "<<y<<"\n";
	for(int i=0;i<=3;i++)
	{
		std::cout<<*(p+i)<<" ";
	}
	std::cout<<"\n";
	
}
void der::set_dynamic_array()
{
	for(int i=0;i<=3;i++)
	{
		*(p+i)=i;
	}
}
void der::call_base_class_3(der d)
{
	std::cout<<"call_base_class_3\n";
	std::cout<<"\n";
	
//	d.base(d);
	base b1;
	b1.base();
	std::cout<<"\n";
	getch();
	
/*	base b1;
	base::base(b1);
	std::cout<<"\n";
	getch(); */
	
	operator=(d);
	std::cout<<"\n";
	getch();
	
	d.~base();
	std::cout<<"\n";
	getch();
}
der::~der()
{
	delete []p;
	std::cout<<"dctor derived\n";
}
