#define NUM_ITER 989933

#include <header.h>

int main_bench()
{
   int n,l;
   int sum;
   char a[100]={0};
   char b[100]={0};    
   my_scanf("%s",a);
   l=strlen(a);
   for(n=0;n<=l-1;n++)
   {a[n]=a[n]-'0';}
   a[l]='\0';
   if(l==1)
      my_printf("0\n%d",a[0]);
   else if(l==2&&a[0]*10+a[1]<13)
      my_printf("0\n%d",a[0]*10+a[1]);
   else if(l==2&&a[0]*10+a[1]>=13)
     {
      sum=a[0]*10+a[1];
      my_printf("%d\n%d",sum/13,sum%13);
     }
   else if(l>2&&a[0]*10+a[1]<13)
     {
     sum=a[0]*10+a[1];
     for(n=0;n<=l-3;n++)
       {
         sum=sum*10+a[n+2];
         b[n]=sum/13;
         sum=sum%13;
       }
    for(n=0;n<=l-3;n++)
       b[n]=b[n]+'0';
    b[l-2]='\0';
    my_printf("%s\n%d",b,sum);
   } 
   else
   {
       sum=a[0];
       for(n=0;n<=l-2;n++)
       {
          sum=sum*10+a[n+1];
          b[n]=sum/13;
          sum=sum%13;
       }
       for(n=0;n<=l-2;n++)
       {
           b[n]=b[n]+'0';               
       }
       b[l-1]='\0';
       my_printf("%s\n%d",b,sum);
   }
   
   
}