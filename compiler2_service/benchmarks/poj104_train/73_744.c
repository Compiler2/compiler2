#define NUM_ITER 96931

#include <header.h>

main_bench()
{
      int i,j,m,n,a[5][5],max,min,s=0;
      for(i=0;i<5;i++)
      {
            for(j=0;j<5;j++)
            my_scanf("%d",&a[i][j]);
      }
      for(i=0;i<5;i++)
      {
            for(j=0;j<5;j++)
            {
                    max=a[i][j];
                    for(m=0;m<5;m++)
                    {if(a[i][m]>max)
                     max=a[i][m];}
                    min=a[i][j];
                    for(n=0;n<5;n++)
                    {if(a[n][j]<min)
                     min=a[n][j];}
                     if((a[i][j]==max)&&(a[i][j]==min))
                     my_printf("%d %d %d\n",i+1,j+1,a[i][j]); 
                     else
                     s++;
                     if(s==25)
                     my_printf("not found\n");
            }
      }
      getchar();getchar();getchar();getchar();getchar();getchar();
}