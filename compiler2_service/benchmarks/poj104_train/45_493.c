#define NUM_ITER 1055180

#include <header.h>

int main_bench()
{
	int i,j,n,l,k;
	char s[100];char a[100];
		my_scanf("%s%s",a,s);
	n=strlen(s);l=strlen(a);
    for(j=0;j<n;j++)
{	
                   if(s[j]==a[0])
	         { k=j;
		my_printf("%d\n",k);
	          break;}
	}
		
	
	}