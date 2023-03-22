#define NUM_ITER 1059388

#include <header.h>

int main_bench()
{
    int i,count=0,k;
    char s[50],w[50];
    my_scanf("%s",s);
    my_scanf("%s",w);
    for(i=0;i<strlen(w);i++)
    {
                            if(w[i]==s[0])
                            {
                                          for(k=0;k<strlen(s);k++)
                                          {
                                                                  if(s[k]==w[i+k])
                                                                  count++;
                                          }
                                          if(count==strlen(s))
                                          my_printf("%d",i);
                            }
    }
    return 0;
}
      