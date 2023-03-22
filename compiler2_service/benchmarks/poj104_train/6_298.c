#define NUM_ITER 31

#include <header.h>

main_bench()
{
      int num;
      my_scanf("%d",&num);
      int i;
      for(i=0;i<num;i++)
      {
        int m,n;
        my_scanf("%d %d",&m,&n);
        int a[m][n];
        for(int j=0;j<m;j++)
          for(int h=0;h<n;h++)
          my_scanf("%d",&a[j][h]);
        int sum=0;
        for(int j=0;j<n;j++)
          sum+=a[0][j];
        for(int j=1;j<m;j++)
        sum+=a[j][0];
        for(int j=1;j<n;j++)
        sum+=a[m-1][j];
        for(int j=1;j<m-1;j++)
        sum+=a[j][n-1];
        my_printf("%d\n",sum);                
      }
      getchar();
      getchar();
}
