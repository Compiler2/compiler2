#define NUM_ITER 176900

#include <header.h>

int main_bench()
{
int a[5][5],max=0,row=0,line=0,judge=0;
 for(int i=0;i<5;i++)
     {
     for(int j=0;j<5;j++)
         my_scanf("%d",&a[i][j]); 
         }
     for(int i=0;i<5;i++)
         {
         int j=0;
         max=a[i][j];
         line=i;
         row=j;
         for(int j=0;j<5;j++)
             {
             
             for(int k=j+1;k<5;k++)
                 {
                 if(max<a[i][k])
                    {
                    max=a[i][k];
                    line=i;
                    row=k;                
                    }    
                 }
             }
          if(max<=a[0][row]&&a[line][row]<=a[1][row]&&a[line][row]<=a[2][row]&&a[line][row]<=a[3][row]&&a[line][row]<=a[4][row])
             {
             my_printf("%d %d %d",line+1,row+1,max);
             judge=1;
             }
         }  
 if(judge==0)
    my_printf("not found");   
}
