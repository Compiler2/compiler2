#define NUM_ITER 814516

#include <header.h>

int main_bench()
{
	int i,j,l,k;
	char a[500],b[500];
	gets(a);
	l=strlen(a);
	for(i=2;i<=l;i++)
	{
		for(j=0;j<=l-i;j++)
		{
			strcpy(b,a);
			for(k=j;k<=j+i-1;k++)
			{
				b[k]=a[2*j+i-1-k];
			}
			if(strcmp(a,b)==0){for(k=j;k<=j+i-1;k++) my_printf("%c",a[k]); my_printf("\n");}
		}
	}
}