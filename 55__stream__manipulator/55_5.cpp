#include<iostream>
#include<iomanip>

int main()
{	
	std::cout<<std::scientific;
	float f=4.221e+001;
	
	std::cout<<f<<"\n";
	
	std::cout<<std::fixed;
 	
//	std::cout<<std::setprecision(6);
  	std::cout<<f<<"\n";
		
}
