#define NUM_ITER 30894

#include <header.h>

int main_bench()
{
    char s[300][20],c;
    int a[300],n,i,x;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	my_scanf("%s",&s[i]);
    	a[i]=1+strlen(s[i]);
    }
    x=0;
    for(i=1;i<n;i++)
    {
    	x=x+a[i];
    	if(x<=81&&x+a[i+1]<=81) my_printf("%s ",s[i]);
    	if(x<=81&&x+a[i+1]>81) my_printf("%s",s[i]);
    	if(x>81) {my_printf("\n");my_printf("%s ",s[i]);x=a[i];}
    }
    x=x+a[n];
    if(x<=81) my_printf("%s",s[n]);
    if(x>81) my_printf("\n%s",s[n]);
    return 0;
}