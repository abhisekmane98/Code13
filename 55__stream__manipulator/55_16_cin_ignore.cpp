#include<iostream>
int main()
{
	char a,b;
	std::cin>>a;
	std::cin.ignore(1000,'\n');
	std::cout<<std::noskipws;
	std::cin>>b;
}
