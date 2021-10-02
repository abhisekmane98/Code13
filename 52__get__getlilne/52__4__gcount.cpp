#include<iostream>
int main()
{
	char s[20];
	char ch;
	
	std::cin.get(s,10);
	std::cout<<"x"<<s<<"x";
	
	int num=std::cin.gcount();
	
	std::cout<<std::endl<<num;
	
	std::cin>>ch;
	std::cout<<"x"<<ch<<"x";
	
	std::cin>>ch;
	std::cout<<"x"<<ch<<"x";
	
	std::cin>>ch;
	std::cout<<"x"<<ch<<"x";
}
