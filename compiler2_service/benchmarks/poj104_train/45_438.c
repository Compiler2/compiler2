#define NUM_ITER 686522

#include <header.h>

int main_bench()
{
    char s[50],w[50],t[50]={""};
    int i,j,m,n,p;
    char *wp;char *tp;
    wp=w;tp=t;
    my_scanf("%s %s",s,w);
    m=strlen(s);
    n=strlen(w);
    for(i=0;i<n;i++)
    {
    	for(j=i;j<(i+m);j++)
    	*(tp+j-i)=*(wp+j);
    	if(strcmp(t,s)==0)
    	{
    		p=i;
    		break;
    	}
    }
    my_printf("%d",p);
}