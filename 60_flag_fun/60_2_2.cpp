#include<iostream>
#include<bitset>
int main()
{
	
	std::cout<<std::cout.flags()<<"\n";
	
	std::cout<<std::showpos;
	std::cout<<std::cout.flags()<<"\n";
	
	std::cout<<59.20<<"\n";

	std::cout<<std::bitset<16>(4098)<<"\n";
	std::cout<<std::bitset<16>(6146)<<"\n";
}
