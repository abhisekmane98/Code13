#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count_1=1, count_2=11, i;
	
	
	int *p=(int*)malloc(4*sizeof(int));
	
	printf("%p\n",p);
	
	for(i=0;i<=3;i++)
	{
		*(p+i)=count_1++;
	}
	
	for(i=0;i<=3;i++)
	{
		printf("%d ",*(p+i) );
	}
	
	printf("\n");
	free(p);
	
	
	
	p=(int*)malloc(6*sizeof(int));
	
	printf("%p\n",p);
	
	for(i=0;i<=5;i++)
	{
		*(p+i)=count_2++;
	}
	
	for(i=0;i<=3;i++)
	{
		printf("%d ",*(p+i) );
	}
	
}
