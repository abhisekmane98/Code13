#include<iostream>
#include<conio.h>

int main()
{
	int a[5]={2,3,5,7,11};
	int b[5];
	
	memcpy(b,a,20);
	
	for(int i=0;i<=4;i++)
	{
		std::cout<<b[i]<<" ";
	}

}
