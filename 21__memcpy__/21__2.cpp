#include<iostream>
#include<conio.h>

int main()
{
	const char *a="bonaparte";
	char b[10];
	memcpy(b,a,10);
	std::cout<<b;
}
