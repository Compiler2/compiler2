#define NUM_ITER 255197

#include <header.h>

main_bench()
{
              int a;
              my_scanf("%d",&a);
              while(a>1)
{
              if(a%2==1)
              {
                        
                        my_printf("%d*3+1=%d\n",a,a*3+1);a=a*3+1;
                        }
              if(a%2==0);
{
              my_printf("%d/2=%d\n",a,a/2); a=a/2;
                             }
                             }
                       my_printf("End");
              getchar(); 
              getchar();
              return 0;
}