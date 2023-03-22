#define NUM_ITER 30791

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int i,k,m,a[n],b[n],j[n];
    k=0; 
    for(i=0;i<n;i++) my_scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<n;i++) j[i]=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=90&&a[i]<=140&&b[i]<=90&&b[i]>=60) j[k]++;
        else 
        {
            k++;
        }
    }
     for(k=0;k<n;k++)
    {
            if(j[0]<j[k]) {j[0]=m; j[0]=j[k]; j[k]=m;}
     }
    my_printf("%d\n",j[0]);
    return 0;
}




