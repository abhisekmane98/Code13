#include<iostream>
int main()
{
	char ch1,ch2,ch3;
	ch1=std::cin.peek();
	std::cout<<ch1;
	std::cin>>ch2>>ch3; 
	std::cout<<ch2<<ch3;
}
