#define NUM_ITER 1515943

#include <header.h>


int main_bench(){
   int i,j,m,n;
    j=0;
    m=0;
  char x[100],*a,y[100];
   gets(x);
  for(a=x;*a!='\0';a++)
     { 
        if(*a!=' ');
           {y[j]=*a;
              j++;}
            
         if(*a==' ')
           {
        
            while(*a==' ')
             {a++; }
             a--;
	        }
              
        }
      y[j]='\0';
    my_printf("%s",y);

      return 0;

    }