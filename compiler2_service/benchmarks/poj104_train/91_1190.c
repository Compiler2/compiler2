#define NUM_ITER 1032674

#include <header.h>

int main_bench()
{
    int k,i,j;
	char x[1000]={0},y[1000],c;
    gets(x);
    k=strlen(x);
	x[k]=x[0];
		for(i=0;i<=k-1;i++)
       {
        c=x[i]+x[i+1];
		my_printf("%c",c);
        }
      
	   return 0;
}