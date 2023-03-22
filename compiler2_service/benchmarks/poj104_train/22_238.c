#define NUM_ITER 1861356

#include <header.h>


int main_bench()
{
	int a[300],i=1,j,k,m,t;
	char c;
	my_scanf("%d",&a[0]);
	while((c=getchar())==',')
	{
		my_scanf("%d",&a[i]);
		i++;
	}
	for(j=0;j<i-1;j++)
	{
		m=j;
		for(k=j+1;k<i;k++)
			if(a[k]>a[m]) m=k;
		if(m>j)
		{t=a[m];a[m]=a[j];a[j]=t;}
	}
	j=1;
	while(a[j]==a[0])
		j++;
	if(i==1||j==i)
		my_printf("No");
	else
        my_printf("%d",a[j]);
}
