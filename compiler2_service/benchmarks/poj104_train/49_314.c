#define NUM_ITER 1169900

#include <header.h>


int main_bench()
{
	int s,i,j,n,r,ok;
	char a[505];
	gets(a);
	n=strlen(a);
	for (r=2;r<=n;r++)
		for (i=0;i<=n-r;i++)
		{
			ok=1;
			j=i+r-1;
		    for (s=i;s<=i+(j-i)/2;s++)
				if (a[s]!=a[j+i-s])
				{ok=0;break;}
			if (ok)
			{
				for (s=i;s<=j;s++)
					my_printf("%c",a[s]);
                my_printf("\n");
            }
		}
  }
