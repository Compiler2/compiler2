#define NUM_ITER 40036

#include <header.h>

int main_bench()
{
	int n;
	int a[302]={0},r[301]={0};
	int i,j,count=0,tag=0,temp;
	float aver,max=0,sum=0,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	aver=sum/n;
	
    for(i=0;i<n;i++)
	{
		if(fabs(a[i]-aver)>max)
		  max=fabs(a[i]-aver);
	}
	
	for(i=0;i<n;i++)
	{
	    t=fabs(a[i]-aver);
		if(t==max)
		{
			
			r[count]=a[i];
			count++;
		}
	}

	for(i=0;i<count;i++)
	{
		tag=r[i];
		for(j=i;j<count;j++)
		{
			if(r[j]<tag)
			{
				tag=r[j];
			}
		}
		if(tag!=r[j])
		{
			temp=r[i];
			r[i]=r[j];
			r[j]=temp;
		}
	}
	if(count==1)
		my_printf("%d",r[1]);
else
{
	for(i=1;i<count;i++)
		my_printf("%d,",r[i]);
	my_printf("%d\n",r[i]);
}
}


