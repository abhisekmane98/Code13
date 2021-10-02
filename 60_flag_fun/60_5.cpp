#include<iostream>
int main()
{
	std::cout<<std::cout.flags()<<"\n";
	
	std::cout<<(std::cout.flags() | std::ios::showpos)<<"\n";
	std::cout.flags(std::cout.flags() | std::ios::showpos);
	
	std::cout<<std::cout.flags()<<"\n";
	
}
