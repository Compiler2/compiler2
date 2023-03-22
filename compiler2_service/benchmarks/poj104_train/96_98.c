#define NUM_ITER 699332

#include <header.h>

int main_bench()
{
    int i,d,r;
   char a[100];
   int m,b[100],c[100];
   my_scanf("%s",a);
   m= strlen(a);
   for(i=0;i<m;i++)
   {
                     c[i]=a[i]-'0';
    }
    r=c[1];
       
   for(i=1;i<m;i++)
   {
   b[i]=(c[i]+10*c[i-1])/13;
  c[i]=c[i]+10*c[i-1]-13*b[i];
 
   }
    if(m==1)
             my_printf("0");
             else if(b[1]==0&&m==2&&r<=2)
              my_printf("0");
 
   for(i=1;i<m;i++)
   {                 
                   if(i==1&&b[1]!=0)
                   my_printf("%d",b[1]);
                     if(i==2&&b[2]!=0)
                   my_printf("%d",b[2]);
                   
                   if(i!=1&&i!=2)
                   my_printf("%d",b[i]);
                 
      }
    
   my_printf("\n");
  my_printf("%d",c[m-1]);
  
  
  
  
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    

}