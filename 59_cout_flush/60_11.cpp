#include<iostream>
int main()
{
	std::cout<<std::ios::showpoint<<"\n";
	std::cout<<std::cout.flags()<<"\n";
	std::ios_base::fmtflags flag=std::ios::showpos | std::ios::showpoint;
	std::cout<<flag<<"\n";
	
	std::cout.flags(flag | std::cout.flags());
	std::cout<<std::cout.flags()<<"\n";
}
