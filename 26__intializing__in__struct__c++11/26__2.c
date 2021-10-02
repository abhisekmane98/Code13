#include<stdio.h>

struct complex
{
	int a=3,b=2;
	
};
int main()
{
	struct complex c1;
	printf("%d,%d",c1.a,c1.b);
}
