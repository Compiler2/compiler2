#define NUM_ITER 63692

#include <header.h>

int main_bench()
{
	int a[1000],i,t,num,j,k;
	int max(int a,int b);
    int min(int a,int b);
	char c;

	for(i=1;;i++)                  
	{                               
		my_scanf("%d",&a[i-1]);       
		my_scanf("%c",&c);            
		if(c=='\n')break;                                             
	}

	num=i;

	for(j=1;j<=num-1;j++)
	{
		for(k=num;k>=j+1;k--)
		{
			t=max(a[k-1],a[k-2]);
			a[k-1]=min(a[k-1],a[k-2]);
			a[k-2]=t;
		}
	}

	for(i=1;i<=num-1;i++)
	{
		if(a[i-1]!=a[i])
		break;
	}
    if(i<num-1)my_printf("%d",a[i]);
    else 
	{
		if(i==num-1)my_printf("%d",a[i]);
		else my_printf("No");
	}
	return 0;
}




int max(int a,int b)
{
	int e;
	if(a<b)e=b;
	else e=a;
	return e;
}

int min(int a,int b)
{
	int e;
	if(a>b)e=b;
	else e=a;
	return e;
}