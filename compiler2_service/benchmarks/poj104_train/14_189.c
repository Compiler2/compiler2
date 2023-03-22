#define NUM_ITER 20552

#include <header.h>

int main_bench()
{
    struct score
    {
           int ID;
           int c;
           int m;
           };
           int n,k,t,r;
           int j;
           my_scanf("%d",&n);
           int sum[100000];
           struct score s[100000];
           for(int i=1;i<=n;i++)
           {
                        my_scanf("%d %d %d",&s[i].ID,&s[i].c,&s[i].m);
                        sum[i]=s[i].c+s[i].m;
                        }
                        for(j=1;j<=3;j++)
                        {
                                         for(k=j;k<=n;k++)
                                         {
                                                            if(sum[k]>sum[j])
                                                            {            t=sum[j];         
                                                                         sum[j]=sum[k];
                                                                         sum[k]=t;
                                                                         r=s[j].ID;
                                                                         s[j].ID=s[k].ID;
                                                                         s[k].ID=r;
                                                                         }
                                                                         }
                                                                         }
                                                                         for(int u=1;u<=3;u++)
                                                                         {
                                                                                 my_printf("%d %d\n",s[u].ID,sum[u]);
                                                                                 }
                                                                                 getchar();
                                                                                 getchar();
                                                                                 }