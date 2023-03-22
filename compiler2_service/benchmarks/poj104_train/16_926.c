#define NUM_ITER 323043

#include <header.h>


void fun()        
{
    char c;           
    if((c=getchar())!='\n') 
       fun();            
    putchar(c); 

}       

main_bench()            
{
   fun();   
   getchar();     
} 

