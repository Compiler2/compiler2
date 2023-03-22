#include <header.h>

int main_bench()
{
   int n=0,num,m,a,b;
   my_scanf("%d",&num);
   m=num;
   do
   {n=n*10+num%10;
    num=num/10;
    }while(num!=0);
   
   int weishu(int x);
   a=weishu(m);
   b=weishu(n);
   if(a-b==4)my_printf("0000%d\n",n);
   else if(a-b==3)my_printf("000%d\n",n);
   else if(a-b==2)my_printf("00%d\n",n);
   else if(a-b==1)my_printf("0%d\n",n);
   else my_printf("%d\n",n);
}

int weishu(int x)
{
	int y;
	if(x>=10000)y=5;
	else if(x>=1000)y=4;
	else if(x>=100)y=3;
	else if(x>=10)y=2;
	else y=1;
	return(y);
}
