#define NUM_ITER 1311

#include <header.h>

int main_bench()
{
    int k,n;
    my_scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
                     int m,a[100],i,j;               
                     my_scanf("%d",&m);
                     if(m!=0)
                     {
                        for(i=1;i<=m;i++)
                        {
                                my_scanf("%d\n",&a[i]);
                        }
                        for(j=1;j<=m;j++)
                        {
                                         if(j<m)
                                         {
                                                if((a[j]+3*j<=60)&&(a[j+1]+3*j>=63))
                                                {
                                                 my_printf("%d\n",60-3*j);
                                                 break;
                                                 }
                                                 else if(a[j]+3*j==61||a[j]+3*j==62)
                                                 {
                                                 my_printf("%d\n",a[j]);
                                                 break;
                                                 }
                                         }
                                         else 
                                         {
                                              if(a[j]+3*j<60)
                                              {
                                              my_printf("%d\n",60-3*j);
                                              break;
                                              }
                                               else if(a[j]+3*j==63||a[j]+3*j==61||a[j]+3*j==62)
                                               {
                                               my_printf("%d\n",a[j]);
                                                break;
                                                }
                                         }
                        }
                     }
                        else my_printf("60\n");
  }
}