#define NUM_ITER 518233

#include <header.h>

int main_bench()
{
	 char *p,*q;
	p=(char *)malloc(sizeof(char)*101);
	q=(char *)malloc(sizeof(char)*101);
	gets(p);
	int i,n=strlen(p);
	for(i=0;i<n;i++)
	{
		if(i==n-1) *(q+i)=*(p+i)+*p;
		else *(q+i)=*(p+i)+*(p+i+1);
 
	}
 

	puts(q);
}