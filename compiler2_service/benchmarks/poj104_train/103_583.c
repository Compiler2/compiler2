#define NUM_ITER 1292752

#include <header.h>

int main_bench()
{
    char a[1000],b;
    int n,j,l,i;
    gets(a);
    l=strlen(a);
    for (i=0;i<l;i++)
                      {
                          if (a[i]>='a'&&a[i]<='z')
                              a[i]=a[i]+'A'-'a';
                      }
   for (i=0 ;i<l;i++)
                          {j=1;b=a[i];
                           loop:  if(a[i]==a[i+1])
                                    {j++;
                                    i++;
                                     goto loop;
                                        }
                           else 
                         my_printf("(%c,%d)",b,j)  ;         
                           
                           }   
      getchar();
      getchar();
                            }