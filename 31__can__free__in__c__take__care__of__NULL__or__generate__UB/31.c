#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count=9;
	int *p=malloc(4*sizeof(int));
	int i;
	for(i=0;i<=3;i++)
	{
		*(p+i)=count++;
	}
	for(i=0;i<=3;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	
	p=NULL;
	free(p);
	printf("bonapart\n");
	
}
