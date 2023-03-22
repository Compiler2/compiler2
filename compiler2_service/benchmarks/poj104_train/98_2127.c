#include <header.h>


int main_bench()
{
    int i,n,a[1000],x=0;
    char s[1000][40];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	my_scanf("%s",&s[i]);
    	a[i]=1+strlen(s[i]);
    }
    for(i=1;i<n;i++)
    {
    	x=x+a[i];
    	if(x<=81)
    	{
    		if((x+a[i+1])<=81) my_printf("%s ",s[i]);
    		else my_printf("%s",s[i]);
    	}
    	else
    	{
    		my_printf("\n");
    		x=a[i];
    		my_printf("%s ",s[i]);
    	}
    }
    if((x+a[n])<=81) my_printf("%s",s[n]);
    else my_printf("\n%s",s[n]);
    return 0;
}