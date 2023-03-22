#define NUM_ITER 4367

#include <header.h>

int main_bench()
{
    int m,n;
    int j,i;
    double a,b,k;
    double s[100]={0};
    my_scanf("%d",&m);
    for(j=0;j<m;j++)
    { 
      my_scanf("%d",&n);             
      for(i=1,a=2,b=1.0;i<=n;i++) 
      {
        s[j]+=a/b;
        k=b;
        b=a;
        a+=k;
        } 
        
          
        my_printf("%.3lf\n",s[j]);
        }
    return 0;
}


