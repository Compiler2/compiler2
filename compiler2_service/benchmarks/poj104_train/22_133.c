#define NUM_ITER 1793640

#include <header.h>

int main_bench()
{
	int flag=0,counter=0,a[300],i=0,j,t;
	char c;
	my_scanf("%d",&a[i]);i++;counter++;
	while( (c=getchar())==',')
	{my_scanf("%d",&a[i]);
	 if (a[i]!=a[0]) flag=1;
		i++;counter++;}
    if(counter==1||flag==0) my_printf("No");
	else 
	{
		for(j=0;j<counter-1;j++)
		{	for(i=0;i<counter-1-j;i++)
				if(a[i]>a[i+1])
				{t=a[i];a[i]=a[i+1];a[i+1]=t;}
		}
	    for(j=counter-2;j>=0;j--)
			if(a[j]<a[counter-1])
			{my_printf("%d",a[j]);break;}
				}
}