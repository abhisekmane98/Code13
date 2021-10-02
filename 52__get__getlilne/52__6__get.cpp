#include<iostream>
int main()
{
	char s[20];
	char ch;
	
	std::cin.get(s,10);
	std::cin.clear();
	
	int n=std::cin.gcount();
	std::cout<<n<<"\n";
	
	std::cout<<"x"<<s<<"x\n";
	
	std::cin>>std::noskipws>>ch;
	std::cout<<"x"<<ch<<"x\n";
	
	std::cin>>ch;
	std::cout<<"x"<<ch<<"x\n";
	
	std::cin>>std::noskipws>>ch;
	std::cout<<"x"<<ch<<"x\n";
}
