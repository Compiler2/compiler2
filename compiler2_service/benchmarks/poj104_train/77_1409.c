#define NUM_ITER 1032299

#include <header.h>

int main_bench()
{
    char chn[120];
    int i,l;
    int z,t;
    char a,b;
    my_scanf("%s",chn);
    l = strlen(chn);
    a = chn[0];
    for(i = 0;i < l ;i ++)
       if(chn[i] != a)
          b = chn[i];
    while(1)
    {
      z = -1;
      t = 0;
      for(i = 0;i < l; i++)
      {
        if(z == -1 && chn[i] == a)
           z = i;
        else if(z >= 0 && chn[i] == b)
          {
             my_printf("%d %d\n",z,i);
             chn[z] = 0;
             chn[i] = 0;
             t ++;        
             break;
          }        
        else if(z >= 0 && chn[i] == a)
          z = i;
      }     
      if(!t) break;
    }
    
 return 0;    
}