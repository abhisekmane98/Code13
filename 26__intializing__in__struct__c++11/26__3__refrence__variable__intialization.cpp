#include<iostream>

struct complex
{
	int a=3,b=2;
	int &r=a;
	
};
int main()
{
	complex c1;
	std::cout<<c1.a<<" "<<c1.b;
}
