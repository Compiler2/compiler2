#define NUM_ITER 1251044

#include <header.h>

int main_bench()
{
	char a[500];
	int r,i,j,k,n,m;
	my_scanf("%s",a);
	r=strlen(a);
	for(i=2;i<=r;i++)
	{
		for(k=0;k<=r-i;k++)
		{m=k;n=k+i-1;
		while(m<n&&(a[m]==a[n]))
		{m++;n--;}
		if(m>=n) {for(j=k;j<=k+i-1;j++) {putchar(a[j]);	}putchar('\n');	}
		}
	}
	
	return 0;
	
}