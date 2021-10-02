#include"3.h"
#include<iostream>

base::base()
{
	a=0;
}
base::base(int k)
{
	a=k;
}
void base::display_base()
{
	std::cout<<"a= "<<a<<"\n";
}


/*der::der()
{
	p=0;
}
der::der(int k): base(11)
{
	p=k;
}*/
void der::display_der()
{
	base::display_base();
	std::cout<<"p= "<<p<<"\n";
}
