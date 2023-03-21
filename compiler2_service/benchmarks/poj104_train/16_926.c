#include <header.h>


void fun()        
{
    char c;           
    if((c=getchar())!='\n') 
       fun();            
    putchar(c); 

}       

main_bench_bench()            
{
   fun();   
   getchar();     
} 

