#define NUM_ITER 642

#include <header.h>

int p[9][9],q[9][9];
int main_bench()
{void xijun();
    int m,n;
    int i,j,k;
    my_scanf("%d%d",&m,&n);
    for(i=0;i<=8;i++)
       {
          for(j=0;j<=8;j++)
             {
                 p[i][j]=q[i][j]=0;
             }  
       }  
    p[4][4]=m;
   for(i=0;i<=n-1;i++)
      {xijun();}
   for(i=0;i<=8;i++)
       {
          for(j=0;j<8;j++)
             {
                 my_printf("%d ",p[i][j]);
             }  
          my_printf("%d",p[i][8]);
          my_printf("\n");
       }  
    

}
void xijun()
{
      int i,j,k;
       for(i=0;i<=8;i++)
       {
          for(j=0;j<=8;j++)
             {
                if(p[i][j]!=0) 
                {q[i-1][j-1]=q[i-1][j-1]+p[i][j];
                 q[i-1][j]=q[i-1][j]+p[i][j];
                 q[i-1][j+1]=q[i-1][j+1]+p[i][j];
                 q[i][j-1]=q[i][j-1]+p[i][j];
                 q[i][j+1]=q[i][j+1]+p[i][j];
                 q[i+1][j-1]=q[i+1][j-1]+p[i][j];
                 q[i+1][j]=q[i+1][j]+p[i][j];
                 q[i+1][j+1]=q[i+1][j+1]+p[i][j];
                 q[i][j]=2*p[i][j]+q[i][j];
                }              
             }              
       } 
        for(i=0;i<=8;i++)
       {
          for(j=0;j<=8;j++)
             {
                 p[i][j]=q[i][j];
                 q[i][j]=0;
             }  
       }  
           
     
}