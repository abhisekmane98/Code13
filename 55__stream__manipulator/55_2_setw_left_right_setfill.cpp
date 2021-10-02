#include<iostream>
#include<iomanip>

int main()
{
	std::cout<<std::setfill('z');
	char ch=std::cout.fill();
	std::cout<<ch<<"\n";
	std::cout<<std::setw(10)<<"aaaaabbbb";
	std::cout<<"\n";

	std::cout<<std::left<<std::setw(10)<<23<<9891;

}
