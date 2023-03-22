#define NUM_ITER 143197

#include <header.h>

int main_bench()
{
	int counter=0,i=0,j,t,a[300];
	do
	{
		my_scanf("%d",&a[i]);
		i++;
		counter++;
	}while(getchar()!='\n');
	if(counter==1) my_printf("No\n");
	else
	{
	    for(i=0;i<counter;i++)
		     for(j=i+1;j<counter;j++)
			     if(a[j]>a[i])
				 {
				    t=a[i];
				    a[i]=a[j];
			        a[j]=t;
				 }
	    if(a[counter-1]==a[0]) my_printf("No\n");
		else{
		for(i=1;i<counter;i++)
		{
    		if(a[i]!=a[0])
			{
	     		my_printf("%d\n",a[i]);
	    		break;
			}
		}
		}
	}
}