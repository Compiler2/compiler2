#define NUM_ITER 5495

#include <header.h>

int main_bench()
{
	int n,i,j,k=0,m=0,t,x;
	char w[10];
	my_scanf("%d",&n);
	struct patient
	{char id[10];
	int age;
	}a[100];
	for(i=0;i<n;i++)
		my_scanf("%s%d",a[i].id,&a[i].age);  
	struct patient1
	{char id[10];
	int age;
	}b[100];
	struct patient2
	{char id[10];
	int age;
	}c[100];
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			b[k].age=a[i].age;
			for(j=0;j<10;j++)
			{
				b[k].id[j]=a[i].id[j];
			}
			k++;
		
		}    
		else
		{
			c[m].age=a[i].age;
			for(j=0;j<10;j++)
			{
				c[m].id[j]=a[i].id[j];
			}
			m++;
		}
	}      
	for(j=0;j<k-1;j++)
	{
		for(i=0;i<k-1-j;i++)
		{
			if(b[i].age<b[i+1].age)
			{
				t=b[i].age;
				b[i].age=b[i+1].age;
				b[i+1].age=t;
				for(x=0;x<10;x++)
				{
					w[x]=b[i].id[x];
					b[i].id[x]=b[i+1].id[x];
					b[i+1].id[x]=w[x];
				}
			}
		}
	}  
	for(i=0;i<k;i++)
		my_printf("%s\n",b[i].id);  
	for(i=0;i<m;i++)
		my_printf("%s\n",c[i].id);   
	return 0;
}

