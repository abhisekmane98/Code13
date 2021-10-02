#include<iostream>

int main()
{
	int a=5;
	float b=3.0;
	
	int *p1=(int*)&b;          		// leads to undefined behaviour
	float *p2=(float*)&a;			// leads to undefined behaviour
	
	std::cout<<*p1<<" "<<*p2<<"\n";  
}
