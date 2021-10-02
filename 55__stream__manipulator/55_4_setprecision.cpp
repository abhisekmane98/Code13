#include<iostream>
#include<iomanip>

int main()
{
	float f1=42.211;
	std::streamsize s=std::cout.precision();
	std::cout<<s<<"\n";
	std::cout<<f1<<"\n";
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
//	std::cout<<std::fixed;
	std::cout<<f1<<"\n";
	std::cout<<20.1<<"\n";
	
//	std::cout<<std::setprecision(3);
	std::cout.precision(3);
	std::cout<<f1<<"\n";
	
//	std::cout<<std::fixed;
	std::cout.fixed;
	std::cout<<f1<<"\n";
	
	std::cout<<std::scientific;
//	std::cout.scientific;
	std::cout<<f1<<"\n";
	
//	std::cout<<std::setprecision(s);
	std::cout.precision(s);	
//	std::cout<<std::fixed;
	float f2=4.221e+001;
	std::cout<<f2<<"\n";
}
