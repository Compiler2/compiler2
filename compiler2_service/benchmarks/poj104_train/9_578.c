#define NUM_ITER 10262

#include <header.h>

main_bench()
{
      int n,i,j,f;
      int k=0;
      my_scanf("%d",&n);
      char a[100][2000],e[11];
      char d[100][2000];
      int b[100];
      int c[100];
      for(i=0;i<=n-1;i++)
        my_scanf("%s %d",a[i],&b[i]);
        for(i=0;i<n;i++)
        {
             if(b[i]>=60)
             {
             c[k]=b[i];
             strcpy(d[k],a[i]); 
             k++;
             }
        }
        for(j=k-2;j>=0;j--)
        {
           for(i=j;i<=k-2;i++)
            {
             if(c[i]<c[i+1])
             {
               strcpy(e,d[i]);
               strcpy(d[i],d[i+1]);
               strcpy(d[i+1],e);
               f=c[i];c[i]=c[i+1];c[i+1]=f;
             }
            }
         } 
          for(i=0;i<k;i++)      
                my_printf("%s\n",d[i]);
                k=0;
          for(i=0;i<n;i++)
          {
               if(b[i]<60)
                 {
                  
                  c[k]=b[i];
                  strcpy (d[k],a[i]);
                  k++;
                 } 
          }
           for(i=0;i<k;i++)      
                my_printf("%s\n",d[i]) ;
} 
   