#define NUM_ITER 1415162

#include <header.h>

int main_bench()
{
      char a[1000];
      my_scanf("%s",a);
      int i=0,j=0,k=0,m;
      while(a[i]!='\0')
      {
             if(a[i]>='a'&&a[i]<='z')
             a[i]=a[i]-'a'+'A';
             i++;
      }
      while(a[j]!='\0')
      {
                       m=1;
                       for(k=j;a[k]!='\0';k++)
                       {
                                              if(a[k]==a[k+1])
                                              m=m+1;
                                              else
                                              {my_printf("(%c,%d)",a[k],m);
                                              j=k+1;
                                              break;}
                       }
                       
      }
            
      my_printf("\n");       
      
}