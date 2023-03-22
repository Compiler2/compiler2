#define NUM_ITER 19

#include <header.h>


int monkey[300]; 

int main_bench()
{
    void getking(int n, int m);
    int n = -1, m;
    
    while(n != 0)
    {
            my_scanf("%d %d", &n, &m);
            
            if(n != 0)
                 getking(n, m);
    }
    
    return 0;
}

void getking(int n, int m)
{
     
     int i, left, delete_n, count = 0;
     
          
     for(i = 0; i <= n - 1; i++)
           monkey[i] = 1;
     
     left = n;
     i = n - 1;
     while(left > 1)
     {
                while(count < m)
                {           
                            
                            if(i + 1 >= n)
                                 i = 0;
                            else
                                 i = i + 1;
                            count = count + (monkey[i] == 1);
                }           
                
                monkey[i] = 0;
                left = left - 1;
                count = 0;
     }
     
     for(i = 0; i <= n - 1; i++)
           if(monkey[i] == 1)
                        my_printf("%d\n", i + 1);
}
          
            
    
