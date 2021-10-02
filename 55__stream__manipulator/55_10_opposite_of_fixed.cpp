#include<iostream>
#include<iomanip>
int main()
{
	float a=-73.12;
	std::cout<<std::fixed;
	std::cout<<std::setprecision(3);
	std::cout<<a<<"\n";
	std::cout.unsetf(std::ios_base::floatfield);
	std::cout<<std::cout.precision()<<"\n";
	std::cout<<a<<"\n";
}
