#define NUM_ITER 742051

#include <header.h>

int main_bench()
{
    char s[50],w[50],t[50]={""};
    int i,j,m,n,p;
    my_scanf("%s %s",s,w);
    m=strlen(s);
    n=strlen(w);
    for(i=0;i<n;i++)
    {
    	for(j=i;j<(i+m);j++)
    	t[j-i]=w[j];
    	if(strcmp(t,s)==0)
    	{
    		p=i;
    		break;
    	}
    }
    my_printf("%d",p);
}