#define NUM_ITER 12008

#include <header.h>

int main_bench(){
	int n,a[50000],b[50000],c[50000],i,e,f,j,sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        my_scanf("%d%d",&a[i],&b[i]);
    }
    e=a[0];
    f=b[0];
	for(i=1;i<n;i++)
    {
        if(a[i]<e)
        {e=a[i];}
        if(b[i]>f)
        {f=b[i];}
    }
    for(i=e;i<=f;i++)
    {
        c[i]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=a[i];j<=b[i]-1;j++)
        {
            c[j]=0;
        }
    }
    for(i=e;i<=f;i++)
    {
        sum+=c[i];
    }
    if(sum==1){my_printf("%d %d",e, f);}
    else my_printf("no");
	return 0;
}