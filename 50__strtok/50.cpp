#include<iostream>
#include<cstring>

int main()
{
	char s[]="30/4/2021";
	std::cout<<(void*)s<<"\n"; // 0x70fe00
	
	char *p2=(char*)(0x70fe00);
	
	std::cout<<p2<<"\n";
	
	char *p1=strtok(s,"/");
	std::cout<<p1<<"\n";
	
	std::cout<<p2<<"\n";
}
