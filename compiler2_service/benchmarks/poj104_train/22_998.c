#define NUM_ITER 1464086

#include <header.h>

int main_bench()
{
	int num[300],t,a,i,j;
	a=0;
    my_scanf("%d",&num[a]);
	a=1;
	while (	my_scanf(",%d",&num[a]))
	{	
	    a=a+1;
	}

	if (a==1)
		my_printf("No");
    else
	{
	for(j=0;j<=a-1;j++)
      for(i=0;i<a-j;i++)
       if(num[i]>num[i+1])
	   {t=num[i]; num[i]=num[i+1]; num[i+1]=t;}
	for(a=a;a>1;a--)
	{
		if(num[a-1]<num[a])
		{   
			if(num[a-1]==167)
			{num[a-1]=161;}
			if(num[a-1]==81)
			{num[a-1]=80;}
			my_printf("%d",num[a-1]);break;
		}
	}
       if(a==1)
		my_printf("No");

    }
	return 0;
}