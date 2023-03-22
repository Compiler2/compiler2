#define NUM_ITER 37786

#include <header.h>


int main_bench()

{
    int n,a[2000],b[2000],i,j,c,d[2];
    my_scanf("%d",&n);
    d[0]=0;
    d[1]=0;
    for(j=0;j<n;j++)
        {
            my_scanf("%d%d",&a[j],&b[j]);
            c=a[j]-b[j];
            if(c==1) d[1]++;
            else if(c==2) d[0]++;
            else if(c==-1) d[0]++;
            else if(c==-2) d[1]++;
            else continue;
        }
    if(d[0]>d[1]) my_printf("A\n");
    else if(d[0]<d[1]) my_printf("B\n");
    else my_printf("Tie\n");

  return 0;
}
