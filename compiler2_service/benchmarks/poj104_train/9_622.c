#define NUM_ITER 11073

#include <header.h>

main_bench()
{
   
    int n,b[100],d[100],j=0,k,l,t,i;
    my_scanf("%d",&n);
    char a[n][10],c[n][10];
    for(i=0;i<n;i++)
    my_scanf("%s %d",a[i],&b[i]);
    k=0;
    for (i=0;i<n;i++)
    {
        if(b[i]>=60)
        {
        d[k]=b[i];
        strcpy(c[k],a[i]);
        k++;
        }
    }
     l=k;
     char r[10];
     for(k=0;k<l-1;k++)
      {
                       for(j=0;j<l-1-k;j++)   
                       if(d[j]<d[j+1])
                       {
                                      t=d[j];                
                                      d[j]=d[j+1];
                                      d[j+1]=t;
                                      strcpy(r,c[j]);
                                      strcpy(c[j],c[j+1]);
                                      strcpy(c[j+1],r);
                       }
      }
      for (j=0;j<l;j++)
      {
           my_printf("%s\n",c[j]);
          }
      for(i=0;i<n;i++)
      {
           if(b[i]<60)
           my_printf("%s\n",a[i]);
      }
      }   
                        