#include <header.h>

int main_bench()
{
    int n,k,*a,i,j,flag=0;
    my_scanf("%d%d\n",&n,&k);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) my_scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                                      if(a[i]+a[j]==k) 
                                      {my_printf("yes");
                                      flag=1;
                                      break;}
                                      }
                    if(flag==1) break;
    }
    if(flag==0) my_printf("no");
    return 0;
}