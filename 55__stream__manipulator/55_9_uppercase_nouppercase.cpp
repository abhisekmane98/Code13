#include<iostream>
#include<iomanip>
int main()
{
	int a=26;
	float b=1e-001;
	
	std::cout<<a<<"\n";
	
	std::cout<<std::uppercase;
	std::cout<<std::hex<<"\n";
	std::cout<<a;
	
	std::cout<<std::nouppercase;
	std::cout<<a<<"\n";
		
	std::cout<<32<<"\n";
	
	
	
	std::cout<<std::fixed;
	std::cout<<b<<"\n";
	std::cout<<std::setprecision(2);
	std::cout<<b<<"\n";
	
	std::cout.unsetf(std::ios_base::floatfield);
	std::cout<<b<<"\n";
	std::cout<<std::scientific;
//	std::cout<<std::scientific<<std::setprecision(2);
	std::cout<<std::uppercase<<"abhi"<<"\n";
	std::cout<<b<<"\n"; 
	std::cout<<std::nouppercase<<b<<"\n";
}
