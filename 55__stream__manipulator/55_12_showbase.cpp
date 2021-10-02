#include<iostream>
int main()
{
	int i=20;
	std::cout<<std::showbase;
	std::cout<<std::hex<<i<<"\n";  
	std::cout<<std::oct<<i<<"\n"; 
	
	std::cout<<std::noshowbase;
	std::cout<<std::hex<<i<<"\n";  
	std::cout<<std::oct<<i;  
}
