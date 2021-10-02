#include<iostream>
#include<bitset>

int main()
{
	std::cout<<std::cout.flags()<<"\n";
	std::cout<<std::bitset<16>(4098)<<"\n";

	std::cout.setf(std::ios::hex | std::ios::dec | std::ios::oct);
	
	std::cout<<std::cout.flags()<<"\n";
	std::cout<<std::bitset<16>(4170)<<"\n";

	int a=20;
	std::cout<<a;
}
