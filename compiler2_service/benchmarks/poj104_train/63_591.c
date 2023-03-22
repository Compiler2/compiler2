#include <header.h>

int main_bench()
{
    int a[100][1000],b[100][100],c[100][100],x1,x2,y1,y2,i,j,k;
    my_scanf("%d%d",&x1,&y1);
    for(i=0;i<x1;i++)
      for(j=0;j<y1;j++)
        my_scanf("%d",&a[i][j]);
        my_scanf("%d%d",&x2,&y2);
     for(i=0;i<x2;i++)
      for(j=0;j<y2;j++)
        my_scanf("%d",&b[i][j]);   
     for(i=0;i<x1;i++)  
     {
       for(j=0;j<y2;j++)
       {
         c[i][j]=0;
         for(k=0;k<=y1;k++)
         c[i][j]=c[i][j]+a[i][k]*b[k][j];
         }
         }
         for(i=0;i<x1;i++)
          for(j=0;j<y2;j++)
            {
               if(j==0)my_printf("%d",c[i][j]);
               else
                 my_printf(" %d",c[i][j]);
                 if(j==y2-1)my_printf("\n");
                 }
                 getchar();
                 getchar();
}
         
