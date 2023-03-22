#define NUM_ITER 880035

#include <header.h>

int main_bench()
{
  double n;
  int w=0,g=0;

 char v[100],c[100];
 my_scanf("%lf",&n);
 my_scanf("%s",v);
 my_scanf("%s",c);
 char A,T,G,C;
 if(strlen(v)!=strlen(c))
  {
    my_printf("error");                     
  }
 else
    {
       for(int i=0;i<=strlen(v)-1;i++)
        { 
          if(((v[i]!='A')&&(v[i]!='G')&&(v[i]!='C')&&(v[i]!='T'))||((c[i]!='A')&&(c[i]!='G')&&(c[i]!='C')&&(c[i]!='T')))
          {     g=1;
               my_printf("error");
               break;                                                                                    
          }
          else if(v[i]==c[i])
            {
              w++;          
            }        
        } 
       
      double l=1.0*w/strlen(v);
      if((l>n)&&(g==0)){my_printf("yes");}
      else if((l<=n)&&(g==0)){my_printf("no");}                                   
    }

   return 0;          
}
