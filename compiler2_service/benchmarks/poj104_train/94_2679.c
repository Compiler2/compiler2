#include <header.h>

int main_bench(){
    int n; int i;
    my_scanf("%d\n",&n);
    int sz[n];for(i=0;i<n;i++)
	{my_scanf("%d ",&sz[i]);}
   
	int e;
	for(int t=1;t<=n;t++)
	{
		for(i=0;i<n-t;i++)
		{
			if(sz[i]>sz[i+1])
			{
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
int k=0,ul[k];
       for(i=0;i<n;i++)
{
for(int a=1;a<=sz[n-1];a=a+2)
{
if(a==sz[i])
{k=k+1;}
}
}
int f;
f=k;
k=0;
for(i=0;i<n;i++)
{
for(int a=1;a<=sz[n-1];a=a+2)
{
if(a==sz[i])
{
ul[k]=sz[i];
k++;
}
}
}
for(k=0;k<f-1;k++)
{
	my_printf("%d,",ul[k]);
}my_printf("%d",ul[f-1]);
    return 0;
}