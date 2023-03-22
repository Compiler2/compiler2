#include <header.h>

int main_bench()
{
    int n,t;
    int i,j=0,k,max;
    int age[100];
    int age2[100];
    char string[100][11];
    int line[100];
    my_scanf("%d",&n);
for(i=0;i<=n-1;i++)
    my_scanf("%s %d",string[i],&age[i]);
    for(i=0;i<=n-1;i++)
    {
            if (age[i]>=60)
           {
              age2[j]=age[i];
              age[i]=0;
              line[j]=i;
              j=j+1;
              k=j;
           } 
    }
        for(i=1;i<=k;i++)
        {
                          max=0;
                          t=0;
                        for(j=0;j<=k-1;j++)
                           {
                                 if(max<age2[j])
                                 {
                                      max=age2[j];
                                      t=j;
                                 }
                           }
                        my_printf("%s\n",string[line[t]]);
                        age2[t]=0;
        }
    for(i=0;i<n;i++)
    {
        if(age[i]!=0)
        my_printf("%s\n",string[i]);
    }
    getchar();
    getchar();
}
