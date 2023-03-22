#define NUM_ITER 168403

#include <header.h>


int main_bench()
{
   char q,*p;
   int now;
   my_scanf("%c",&q);
   while (!((('0'<=q) && ('9'>=q)))) 
       {  
         my_scanf("%c",&q);
       
         }
   long tot=0;
   while (q!='\n') 
      {
           if (('0'<=q)&& ('9'>=q))
                  { 
                          tot=tot*10+q-'0';
                          now=1;       
                  }                                    
               else if (tot!=0){
                       my_printf("%d\n",tot);
                       tot=0;
                       now=0;
                    }
           my_scanf("%c",&q);
      }    
   if( now !=0) my_printf("%d\n",tot);
     
     
}
