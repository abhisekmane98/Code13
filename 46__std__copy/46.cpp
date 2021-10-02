#include<iostream>
#include<cstring>

int main()
{
	const char *s1="bonapart";
	char *s2=new char[8];
	for(int i=0;i<=7;i++)
	{
		s2[i]='x';
	}
	std::cout<<s2<<"\n";
	std::copy(s1,s1+4,s2);
	std::cout<<s2<<"\n";
	s2[4]='\0';
	std::cout<<s2;
}
