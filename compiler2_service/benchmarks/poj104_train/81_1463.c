#define NUM_ITER 208170

#include <header.h>


int main_bench()
{
    void swap(int data[5][5], int n, int m);
    
    int data[5][5];
    int n, m;
    
    int i, j;
    
    for(i = 0; i <= 4; i++)
          for(j = 0; j <= 4; j++)
                my_scanf("%d", &data[i][j]);
    
    my_scanf("%d %d", &n, &m);
    
    swap(data, n, m);
    
        return 0;
}

void swap(int data[5][5], int n, int m)
{
     int i, j;
     
     if(n < 0 || n > 4 || m < 0 || m > 4)
          my_printf("error");
     else
     {
         for(i = 0; i <= 4; i++)
         {      
               for(j = 0; j <= 4; j++)
               {
                     if(i == m)
                          my_printf("%d", data[n][j]);
                     if(i == n)
                          my_printf("%d", data[m][j]);
                     if(i != m && i != n)
                          my_printf("%d", data[i][j]);
                     if(j != 4)
                          my_printf(" ");
               }
               my_printf("\n");
         }
     }
}
                      
    
