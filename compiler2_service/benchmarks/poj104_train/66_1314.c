#include <header.h>

int main_bench()
{
	int nian,yue,ri;
	my_scanf("%d%d%d",&nian,&yue,&ri);
	int d;
	int i,sum=0,ytian;
	for(i=1;i<yue;i++)
	{
	   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
	   {
		  ytian=31;
	   }
	   if(i==4||i==6||i==9||i==11)
	   {
		  ytian=30;
	   }
	   if(i==2)
	   {
	      if(nian%400!=0&&nian%4==0||nian%400==0)
		  {
			  ytian=29;
		  }
		  else
		  {
			  ytian=28;
		  }
	   }
	   sum=sum+ytian;
	}
    sum=sum+ri;
	d =((nian-1)+(nian-1)/4-(nian-1)/100+(nian-1)/400+sum)%7;
	if(d==1)my_printf("Mon.");
	if(d==2)my_printf("Tue.");
	if(d==3)my_printf("Wed.");
	if(d==4)my_printf("Thu.");
	if(d==5)my_printf("Fri.");
	if(d==6)my_printf("Sat.");
	if(d==0)my_printf("Sun.");
	return 0;
}

