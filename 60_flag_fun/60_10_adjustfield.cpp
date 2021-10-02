#include<iostream>
#include<iomanip>
int main()
{
	std::cout<<std::cout.flags()<<"\n";
	std::cout<<std::setw(20);
	std::cout<<std::cout.flags()<<"\n";
	std::cout.setf(std::ios::left | std::ios::right | std::ios::internal);
	std::cout<<std::cout.flags()<<"\n";
	
//	std::cout.setf(std::ios::left);
//	std::cout.setf(std::ios::right, std::ios::adjustfield);
	std::cout<<"abhishek";
}
