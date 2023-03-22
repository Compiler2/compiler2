#define NUM_ITER 32931

#include <header.h>


int main_bench()
{
	int n,m,i,j,max=0,min=100;
	char str[201][255];
	int a[201];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",str[i]);
		getchar();
		a[i]=strlen(str[i]);
        if(a[i]>max)  max=a[i];
		if(a[i]<min)   min=a[i];
	}
	
    for(i=0;i<n;i++)
	{
		if(a[i]==max)  {
		 puts(str[i]);
	  my_printf("\n");
	  break;
		}
	}
	for(i=0;i<n;i++)
	{
	 if(a[i]==min)  
	 {
		puts(str[i]);
	 my_printf("\n");
	 break;
	 }
	}
	return 0;
}

