#include<iostream>
int main()
{
	std::ios_base::fmtflags flag=std::ios::showpos;
	
	std::cout<<flag<<"\n";
	
	std::cout<<std::cout.flags()<<"\n";
	std::cout.setf(flag);
	
	std::cout<<std::cout.flags()<<"\n";
	
}
