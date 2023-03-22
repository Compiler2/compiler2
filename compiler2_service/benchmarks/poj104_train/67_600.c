#include <header.h>

main_bench()
{
 int n,p,q,a,b;
 float r,s;
 my_scanf("%d %d %d",&n,&p,&q);
 r=(float)q/(float)p;
 for(int i=1;i<=n-1;i++)
            {
             my_scanf("%d %d",&a,&b);
             s=(float)b/(float)a;
             if(r>s+0.05)
                       my_printf("worse\n");
             else if(s>r+0.05)
                       my_printf("better\n");
             else my_printf("same\n");           
            } 
 getchar();
 getchar();
 getchar();    
}