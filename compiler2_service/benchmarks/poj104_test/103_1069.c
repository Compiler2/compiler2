#define NUM_ITER 1408104

#include <header.h>

int main_bench ()
{
    char a[1000];
    int i,n,m,g,h;
    my_scanf("%s",a);
    n=strlen(a);
    for(h=0;h<n;h++)
    {
                    if(a[h]>'Z')
                    a[h]=a[h]-'a'+'A';
    }
    for(i=0;i<n;)
    {
                    m=1;
                    for(g=i+1;g<n;g++)
                    {
                                      if(a[i]==a[g])
                                          m+=1;
                                      else
                                      {
                                          my_printf("(%c,%d)",a[i],m);
                                          i=g;
                                          break;
                                      }
                    }
                    i=g;                    
    }
    my_printf("(%c,%d)",a[i-1],m);
    return 0;
}