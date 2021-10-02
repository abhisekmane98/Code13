#include<iostream>
#include<iomanip>

int main()
{
	int a=3;
	char ch[5];
	
	std::cout<<&a<<"\n"<<(void*)(ch)<<"\n";
	
	long int k1=strtol("0x70fe14",nullptr,16); // 7405084
	long int k2=strtol("0x70fe00",nullptr,16); // 7405072
	std::cout<<k1<<"\n"<<k2<<"\n";
	
	std::cout<<a<<"\n";
	std::cin>>ch;
	std::cout<<a<<"\n";
	std::cout<<ch<<"\n";
	
	
}
