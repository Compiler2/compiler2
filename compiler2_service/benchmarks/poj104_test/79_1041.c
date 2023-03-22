#define NUM_ITER 23499

#include <header.h>

int main_bench()
{
   int a=0;
   int b[20];int c[20];
    int l,i,j,k,e;
    for(e=0;;e++)
    {
        my_scanf("%d%d",&b[e],&c[e]);
    my_printf("\n");
    a++;
        if(b[e]==0||c[e]==0)
        break;
        }
  for(j=0;j<=a;j++)
  {
 
 
  if((0<b[j]&&b[j]<=300)&&(0<c[j]&&c[j]<=300)) 
 {  k=0;
    for(i=2;i<=b[j];i++)
    {k=((c[j]%i)+k)%i;}
     my_printf("%d\n",k+1);
             }
             } 
        
                       
                      getchar();
                       getchar();
      }
