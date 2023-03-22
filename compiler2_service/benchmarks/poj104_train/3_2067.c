#include <header.h>

int main_bench()
{
	int n,i,k,p;
	int m=0;
	int sz[1000];
    my_scanf("%d",&n);
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
    {
        my_scanf("%d",&sz[i]);
	}
     for(i=0;i<n;i++)
	 {
       for(p=1;p<n-i;p++)
	   {
	     if(sz[i]==k-sz[i+p])
		 {
			 my_printf("yes");
			 break;
		 }
		 else
			 m++;
	   }
	 if(sz[i]==k-sz[i+p])
		 {
			
			 break;
	 }
	 }

    if(m==n*(n-1)/2)	
		my_printf("no");
    return 0;
}