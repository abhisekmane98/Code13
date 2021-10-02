#include<iostream>
int main()
{
	std::cout<<std::cout.flags()<<"\n";
	std::cout.setf(std::ios::dec,std::ios::basefield);	
	std::cout<<std::cout.flags()<<"\n";
	
//	std::cout.setf(std::ios::hex | std::ios::dec | std::ios::oct);
	int a=20;
	

	std::cout<<a;
}
