#define NUM_ITER 1356352

#include <header.h>

int main_bench()
{
    char s1[1000],s2[1000];

    int i,j,k,l1,n,l2;
    gets(s1);
    l1=strlen(s1);
     n=0;
   
  
        for (i=0;i<l1;i++)
        {
          if ((s1[i]==' ')&&(n>0)) 
          {
             my_printf("%d,",n);
             n=0;
             }
           else if (s1[i]!=' ') n++;
           }       
        my_printf("%d",n);                                                         
        
         return 0; 
}