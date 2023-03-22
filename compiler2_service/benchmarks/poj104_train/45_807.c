#define NUM_ITER 1057395

#include <header.h>


int main_bench()
{
  int i=0,j,a,b,c,d,m=1;
  char s[50],w[50];
  my_scanf("%s %s",s,w);
  a=strlen(s);
  b=strlen(w);
  for(j=0;j<b;j++)
          {
            if(s[i]==w[j])
              {  c=j-i;
                 for(d=i+1;d<a;d++)
                   {if(s[d]==w[d+c])
                      m++;
                    }
                 if(m==a)
                   my_printf("%d",j);
               }
           }
}
