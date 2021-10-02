#include"27.h"
#include<iostream>
#include<cstring>

A::A()
{
	
}
A::A(const char *str, int k)
{
	s=new char[strlen(str)+1];
	strcpy(s,str);
	n=k;
}
void A::display()
{
	std::cout<<s<<" "<<n<<"\n";
}
