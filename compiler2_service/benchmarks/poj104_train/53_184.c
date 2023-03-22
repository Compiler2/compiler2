#include <header.h>

int main_bench()
{
   int input[300]={0},i=0,n=0,num[1000]={0};
  
   my_scanf("%d",&n);
   for(i=0;i<n;i++) my_scanf("%d",&input[i]);
   for(i=0;i<n;i++)
   {
      num[input[i]]++;
      if(num[input[i]]>1) input[i]=0;
   }



   my_printf("%d",input[0]);

   for(i=1;i<n;i++)
   {
      if(input[i]) my_printf(",%d",input[i]);
   }
   my_printf("\n");
}

