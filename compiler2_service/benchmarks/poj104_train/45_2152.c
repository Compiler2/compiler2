#define NUM_ITER 933554

#include <header.h>



int main_bench()
{
    char worda[51], wordb[51];
    
    my_scanf("%s%s", worda, wordb);
    int i,j;
    i=0;
    while(i<strlen(wordb))
    {
                      j=0;
                      while(j<strlen(worda))
                      {
                                            if(worda[j]!=wordb[i])
                                                                  break;
                                            j++;
                                            i++;
                                            }
                      if(j==strlen(worda))
                                          break;
                      i++;
                                          }
    my_printf("%d", i-j);
    return 0;
}     


