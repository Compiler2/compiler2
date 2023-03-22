#define NUM_ITER 26079

#include <header.h>

int main_bench()
{
	char a[100];
	int i,j,n,k,h,z,t;
	my_scanf("%d",&k);
	getchar();
	for(h=0;h<k;h++)
	{
		z=0;
        gets(a);
	    n=strlen(a);
	    for(i=0;i<n;i++)
		{
		    t=1;
	    	for(j=0;j<i;j++)
			{
			      if(a[i]==a[j])t=0;
			}
		    for(j=i+1;j<n;j++)
			{
			      if(a[i]==a[j])t=0;
			}
	    	if(t==1)
			{
			      my_printf("%c\n",a[i]);
			      z++;
			      break;
			}
		}
	    if(z==0)my_printf("no\n");
	}
}
