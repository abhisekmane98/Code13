#include<iostream>
#include<bitset>
int main()
{
	std::cout<<std::cout.flags()<<"\n";
	
	std::cout.setf(std::ios::fixed | std::ios::scientific);

	std::cout<<std::cout.flags()<<"\n";
	
	std::cout<<std::bitset<16>(4098)<<"\n";
	std::cout<<std::bitset<16>(4358)<<"\n";
	
	std::cout<<std::cout.precision()<<"\n";
	std::cout<<20.34<<"\n";
	
}
