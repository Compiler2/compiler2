#define NUM_ITER 1506555

#include <header.h>


  int main_bench(){
      int  i=0,j=0;
      char c[1000];
          gets(c);
      for(i=0;c[i]!='\0';i++){
          if(c[i]!=' '){
            my_printf("%c",c[i]);
             }
          else if(i>=1&&c[i]==' '){
                  if(c[i-1]!=' '){
                     my_printf(" ");
                      }
               }
            
          } 
    
    
      return 0;
      }