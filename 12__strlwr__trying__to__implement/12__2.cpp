#include<iostream>
#include<cstring>

int main()
{
	char s[]=" BonApart3";
	
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
		i++;
	}
	std::cout<<s;
}

