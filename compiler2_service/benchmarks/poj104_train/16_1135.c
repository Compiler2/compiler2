#include <header.h>

int main_bench()
{
 int input;
 int ret,num;
 my_scanf("%d",&input);

for(;;)
 {
    if(input<10)
   {
    my_printf("%d\n",input);
break;
   }
   num=input%10;
  input=input/10;
  
  my_printf("%d",num);

 }

 return 0;
}

