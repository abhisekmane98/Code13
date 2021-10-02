#include"42.h"
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
//	d.base(d);
	d.operator=(d);
	getch();
	d.~base();
	getch();
}
