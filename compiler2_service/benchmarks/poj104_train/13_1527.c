#define NUM_ITER 9765

#include <header.h>

int main_bench()
{
    int n;
    int a[9000],ans[9000];
    my_scanf("%d",&n);
    int i,j;
    int num=1,t=0;
    my_scanf("%d",&a[0]);
    ans[0]=a[0];
    my_printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
                    my_scanf("%d",&a[i]);
                    int j=0;
                    while(j<num)
                    {
                                if(a[i]==ans[j]) 
                                {
                                                 t=1;
                                                 break;
                                }
                                j++;
                    }
                    if(t==0) 
                    {
                             ans[num]=a[i];
                             my_printf(" %d",ans[num]);
                             num++;
                    }
                    else  t=0;
    }
    getchar();
    getchar();
    getchar();
}
                                     
    
