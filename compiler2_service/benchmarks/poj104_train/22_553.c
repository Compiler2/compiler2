#define NUM_ITER 129065

#include <header.h>

int main_bench()
{int num[300],n=0,i,j,t,flag=0;
 char c;
 do
{
	my_scanf("%d",&num[n++]);
}while(c=getchar()!='\n');

 if(n==1) my_printf("No");
 else 
 {	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(num[j]<num[j+1])
			{	t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
 
 for(i=1;i<n;i++)
	if(num[i]<num[0])
	{	flag=1;
	    my_printf("%d",num[i]);
	    break;
	}
 if(flag==0) my_printf("No");
 }

 }
