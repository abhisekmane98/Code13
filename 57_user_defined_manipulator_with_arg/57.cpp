#include"57.h"
#include<iostream>

roman::roman(unsigned long int n)
{
	num=n;
}

void operator<<(std::ostream &o, roman &&r)
{
	struct key
	{
		char ch;
		int val;
	};
	
	key z[]={ {'m',1000},{'d',500},{'c',100},{'i',50},{'x',10},{'v',5},{'i',1} };
	int sz,k;
	
	sz=sizeof(z)/sizeof(z[0]); // sz=6;
	
	for(int i=0;i<sz;i++)
	{
		k=r.num/z[i].val;
		
		for(int j=1;j<=k;j++)
		{
			o<<z[i].ch;
		}
		
		r.num=r.num%z[i].val;
		
	}
//	return o;
	
}





