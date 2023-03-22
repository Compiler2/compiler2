#include <header.h>

int main_bench()
{
    int a[300],n,i,j;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    { if (i<n-1) my_scanf("%d ",&a[i]);else my_scanf("%d",&a[i]); }
    for(i=1;i<n;i++)
      {
      	for(j=0;j<i;j++)
        {
        	if (a[i]==a[j]) {a[i]=0;break;}
        	else continue;
        }
      }
    for(i=0;i<n;i++)
     	if (a[i]!=0) 
     	{
     		for(j=i+1;j<n;)
     		{
     			if (a[j]!=0) {my_printf("%d,",a[i]);break;}
     			else j++;
     			if(j>=n) my_printf("%d",a[i]);
     		}     	
          }
    if(a[n-1]!=0) my_printf("%d",a[n-1]);
}