#include"20_2.h"
#include<iostream>

base::base()
{
	std::cout<<"base ctor- 0 arg\n";
	p=0; q=0;
}
base::base(int k1,int k2)
{
	std::cout<<"base ctor - 2 arg\n";
	p=k1; q=k2;
}
void base::set_value(int k1,int k2)
{
	p=k1; q=k2;
}
base::base(const base &b)
{
	std::cout<<"base copy ctor\n";
	p=b.p;
	q=b.q;
}
base base::operator=(const base &b)
{
	std::cout<<"base overloaded=operator\n";
	p=b.p;
	q=b.q;
	return *this;
}
base::~base()
{
	std::cout<<"base dctor\n";
}

void base::display()
{
	std::cout<<p<<" "<<q<<"\n";
}



der::der()
{
	std::cout<<"derived ctor- 0 arg\n";
}
der::der(der &d)
{
	std::cout<<"derived copy ctor\n";
	x=d.x;
	y=d.y;
	for(int i=0;i<=3;i++)
	{
		*(p+i)=d.p[i];
	}
}
der& der::operator=(const der &d)
{
	std::cout<<"derived overloaded operator\n";
	x=d.x;
	y=d.y;
	for(int i=0;i<=3;i++)
	{
		*(p+i)=d.p[i];
	}
	return *this;
	
}
der::~der()
{
	std::cout<<"derived dctor\n";
	delete []p;
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








