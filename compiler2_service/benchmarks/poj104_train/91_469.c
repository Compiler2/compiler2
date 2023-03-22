#define NUM_ITER 1273446

#include <header.h>

int main_bench()
{
    char s1[1000],s2[1000];

    int i,j,k,l1,m,n,l2;
    gets(s1);

    l1=strlen(s1);

  
        for (i=0;i<l1-1;i++)
        {
          s2[i]=s1[i]+s1[i+1];
          }
          s2[l1-1]=s1[l1-1]+s1[0];
        for (i=0;i<l1;i++)  
       my_printf("%c",s2[i]);               
     
         return 0; 
}
