#include<iostream>

int main()
{
	
	int&& p=3,q;
	p=8;
	q=5;
	std::cout<<sizeof(p)<<" "<<sizeof(q)<<"\n";
	std::cout<<p<<" "<<q<<"\n";
}
