#include"7.h"
#include<iostream>

int main()
{
	B b1;
	b1.a5=89;
	b1.a6=90;
	
	C c1;  // o arg constructor runs for all class C,B,A
	c1.a5=111;
	c1.a6=113;
	
	std::cout<<c1.a5<<" "<<c1.a6<<"\n";
}
