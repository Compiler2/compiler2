#define NUM_ITER 176117

#include <header.h>

main_bench()
{
      int a[6][6];
      int k[6],p[6];
      int i,j;
      for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
        my_scanf("%d",&a[i][j]);
        }
      for(i=0;i<5;i++)
        {
        k[i]=a[i][0];
        for(j=1;j<5;j++)
        {
        if(a[i][j]>k[i])
        k[i]=a[i][j];
        }
        }
      for(j=0;j<5;j++)
        {
        p[j]=a[0][j];
        for(i=1;i<5;i++)
        {
        if(a[i][j]<p[j])
        p[j]=a[i][j];
        }
        }
       for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
        {
         if(k[i]==p[j])
         my_printf("%d %d %d\n",i+1,j+1,k[i]);
        }
        }
        if(
          k[0]!=p[0]&&k[0]!=p[1]&&k[0]!=p[2]&&k[0]!=p[3]&&k[0]!=p[4]&&
          k[1]!=p[0]&&k[1]!=p[1]&&k[1]!=p[2]&&k[1]!=p[3]&&k[1]!=p[4]&&
          k[2]!=p[0]&&k[2]!=p[1]&&k[2]!=p[2]&&k[2]!=p[3]&&k[2]!=p[4]&&
          k[3]!=p[0]&&k[3]!=p[1]&&k[3]!=p[2]&&k[3]!=p[3]&&k[3]!=p[4]&&
          k[4]!=p[0]&&k[4]!=p[1]&&k[4]!=p[2]&&k[4]!=p[3]&&k[4]!=p[4]
        )
        my_printf("not found\n");
        
}