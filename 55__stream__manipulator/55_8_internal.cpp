#include<iostream>
#include<iomanip>
int main()
{
	int a=-73;
	std::cout<<std::setfill('x');
	std::cout<<std::setw(10)<<std::internal<<a<<"\n";
	std::cout<<std::setw(6)<<std::left<<a<<"\n";
	std::cout<<std::setw(6)<<std::right<<a<<"\n";
}
