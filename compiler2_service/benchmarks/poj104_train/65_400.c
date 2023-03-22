#include <header.h>

main_bench()
{
      int n;
      int i,j,x=0,y=0;
      my_scanf("%d",&n);
      int a[200][2]={10};
      for(j=0;j<n;j++)
      {
           my_scanf("%d",&a[j][0]);     
           my_scanf("%d",&a[j][1]);       
      }
      for(i=0;i<n;i++)
      {
           if (a[i][0]==0&&a[i][1]==1)   x++;
           if (a[i][0]==1&&a[i][1]==0)   y++;
           if (a[i][0]==0&&a[i][1]==2)   y++;
           if (a[i][0]==2&&a[i][1]==0)   x++;
           if (a[i][0]==1&&a[i][1]==2)   x++;
           if (a[i][0]==2&&a[i][1]==1)   y++;
           if (a[i][0]==a[i][1]&&a[i][0]<10) ;
      }
      if (x>y)
      my_printf("A");
      if (x==y)
       my_printf("Tie");
      if(x<y)
       my_printf("B");
      my_printf("\n");
}