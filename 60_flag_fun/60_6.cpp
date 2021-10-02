#include<iostream>
#include<bitset>
int main()
{
	int a=2048|4098;
	std::cout<<a<<"\n"<<std::bitset<16>(a)<<"\n";
}
