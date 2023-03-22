#define NUM_ITER 11016

#include <header.h>


int main_bench()
{
 int n,i,j,k,s=0,r=0;
 my_scanf("%d",&n);
 int a[300],b[300];
 my_scanf("%d",&a[0]);
 b[0]=a[0];

 for (i=1;i<n;i++)
 {
	 my_scanf("%d",&a[i]);
 }
 i=1;
 j=1;
while(i<n)
{
	for (k=0;k<i;k++)
	{
		if(a[i]==a[k])
		{
			s=1;
		}
	}
	if(s==1)
	{
		i++;
		s=0;
		continue;
	}
	b[j]=a[i];
	r=r+1;
	s=0;
	i++;
	j++;
}
my_printf("%d",b[0]);
for (i=1;i<r+1;i++)
{
     my_printf(",%d",b[i]);
 }
return 0;
}