#include"20.h"
#include<iostream>

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
base base::operator=(const base &b)
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







