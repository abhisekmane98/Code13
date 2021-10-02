#include<iostream>
int main()
{
	int count_1=1, count_2=11, i;
	
	
	int *p=new int[4];
	std::cout<<p<<"\n";
	
	for(i=0;i<=3;i++)
	{
		*(p+i)=count_1++;
	}
	
	for(i=0;i<=3;i++)
	{
		std::cout<<*(p+i)<<" ";
	}
	
	std::cout<<"\n";
	delete []p;
	
	
	p=new int[6];
	std::cout<<p<<"\n";
	
	for(i=0;i<=5;i++)
	{
		*(p+i)=count_2++;
	}
	
	for(i=0;i<=3;i++)
	{
		std::cout<<*(p+i)<<" ";
	}
	
}
