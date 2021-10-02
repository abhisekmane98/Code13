#include<iostream>
#include<cstring>

int main()
{
	const char *s1;
	const char *s2="bonapart";
	
	
	s1=new char[strlen(s2)+1];
	
//	*s1='k';
	strcpy(s1,s2);
	
	
	std::cout<<s1;
}
