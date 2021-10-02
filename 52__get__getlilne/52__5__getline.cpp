#include<iostream>
int main()
{
	char s[20];
	char ch;
	
	std::cin.getline(s,10);
	
	int n=std::cin.gcount();
	std::cout<<n<<"\n";
	
//	std::cin.clear();
//	std::cin.ignore(1000,'\n');
	std::cout<<"x"<<s<<"x"<<"\n";
	
	std::cin>>ch;
	std::cout<<"x"<<ch<<"x\n";
	
	std::cin>>ch;
	std::cout<<"x"<<ch<<"x\n";
	
	std::cin>>std::noskipws>>ch;
	std::cout<<"x"<<ch<<"x\n";
}
