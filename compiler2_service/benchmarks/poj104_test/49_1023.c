#define NUM_ITER 1025184

#include <header.h>

int main_bench()
{int i,j,k,l,m=0,s=0;
	char c[500];
	my_scanf("%s",c);
k=strlen(c);
for(i=2;i<=k;i++)
{
	for(j=0;j<=k-i;j++)
{
for(l=0;l<=i/2-1;l++)
if(c[l+j]==c[j+i-l-1])m++;

if(m==i/2)
{for(l=0;l<=i-1;l++)
my_printf("%c",c[j+l]);
s++;	}
m=0;
if(s!=0)
my_printf("\n");
s=0;}

}

}