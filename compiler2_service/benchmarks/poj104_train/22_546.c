#include <header.h>

int main_bench()
{
    int t,k,a[300]={0},i,j=0;
    char b[300];
    for(i=0;i<300;i++)
    {
    	my_scanf("%d",&a[i]);
    	my_scanf("%c",&b[i]);
    	j++;
    	if(b[i]=='\n') break;
    }
    for(i=0;i<j;i++)
    {
    	for(k=i+1;k<j;k++)
    	{
    		if(a[k]>a[i])
    		{
    			t=a[k];
    			a[k]=a[i];
    			a[i]=t;
    		}
    	}
    }
    if(a[0]==a[j-1])
    my_printf("No");
    else
    {
    	for(i=0;i<j;i++)
    	{
    		if(a[i]!=a[0])
    		{
    			my_printf("%d",a[i]);
    			break;
    		}
    	}
    }
}