#include<iostream>
int main()
{
	std::cout<<std::cout.precision()<<"\n";
	float f=30.1;
	std::cout<<f<<"\n";
	
	std::cout<<std::showpoint;
	std::cout<<f<<"\n";
	
	std::cout<<std::noshowpoint;
	std::cout<<f<<"\n";
}
