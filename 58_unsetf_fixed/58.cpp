#include<iostream>
int main()
{
	float f=42.211;
	std::cout<<std::fixed;
	std::cout<<f<<"\n";
	std::cout.unsetf(std::ios::fixed);
	std::cout<<f<<"\n";
}
