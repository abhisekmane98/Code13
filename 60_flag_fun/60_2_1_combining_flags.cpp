#include<iostream>
#include<bitset>
int main()
{
	
	std::ios_base::fmtflags flag;
	flag=std::cout.flags();
	
	std::cout<<flag<<"\n";
	
	std::cout.flags(flag);
	
	std::cout<<std::cout.flags()<<"\n";
	
	std::cout<<59.20<<"\n";

	std::cout<<std::bitset<16>(4098)<<"\n";
	std::cout<<std::bitset<16>(2048)<<"\n";
}
