#define NUM_ITER 500363

#include <header.h>

int main_bench() 
{ 
    int ch, num = 0, flag = 0, count = 0; 
     
    while(ch = getchar()) 
    { 
              if(!isdigit(ch) && flag) 
              { 
                      my_printf("%d\n", num); 
                      count++; 
                      num = flag = 0; 
              } 
              if(isdigit(ch)) 
              { 
                    num  = 10 * num + ch - '0'; 
                    flag = 1; 
                    continue; 
              } 
              if(ch == '\n')break; 
                  
    }             
    
    return 0;    
}