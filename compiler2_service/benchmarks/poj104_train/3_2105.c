#define NUM_ITER 54327

#include <header.h>

int main_bench()
{
     int a[1000];
	 int n,k,i,j;
	 my_scanf("%d%d",&n,&k);
	 for(i=0;i<n;i++)
	 { my_scanf("%d",&a[i]);}
	 for(i=0;i<n;i++)
	 {  j=i+1;
	 for(;j<n;j++)
	 {  if(k==(a[i]+a[j]))
	 {my_printf("yes");
	   i=-1;break;}
	 }
	    if(i==-1)
			break;
		if(i==n-1)
		{my_printf("no");
		break;}
	 }

      return 0;
}