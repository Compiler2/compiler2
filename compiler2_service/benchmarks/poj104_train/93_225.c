#include <header.h>

int main_bench()
{
	int n,flag1=0,flag2=0,flag3=0;
	my_scanf("%d",&n);
	if(n%3==0)
	{flag1=1;}
	if(n%5==0)
	{flag2=1;}
	if(n%7==0)
	{flag3=1;}

	if(flag1==1&&flag2==1&&flag3==1)
	{my_printf("3 5 7");}
    
	if(flag1==1&&flag2==1&&flag3==0)
	{my_printf("3 5");}

    
	if(flag2==1&&flag3==1&&flag1==0)
	{my_printf("5 7");}

    
	if(flag1==1&&flag3==1&&flag2==0)
	{my_printf("3 7");}

	
	if(flag1==0&&flag2==0&&flag3==0)
	{my_printf("n");}

	if(flag1==1&&flag2==0&&flag3==0)
	{my_printf("3");}
	if(flag1==0&&flag2==1&&flag3==0)
	{my_printf("5");}
	if(flag1==0&&flag2==0&&flag3==1)
	{my_printf("7");}

}




