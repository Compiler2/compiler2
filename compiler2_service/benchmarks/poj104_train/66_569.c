#include <header.h>

int main_bench()
{
	unsigned long year,month,date;
	unsigned long i,days,total=0;
    unsigned long sumrun=0;	
	 my_scanf("%d%d%d",&year,&month,&date);
	 

	 days=(year-1)*(365%7)+(year-1)/4-(year-1)/100+(year-1)/400;
		 

	 if(month==1)
		 total=days+date;
	 else
	 {
		 for(i=1;i<month;i++)
		 { 
	 
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					{
					total += 31;	
					} 
				else if (i == 4 || i ==6 || i == 9 || i==11)
				{
					total += 30;
				} 
				else 		{
			if(year%400 == 0 ||(year%4==0 && year%100!=0))
			{
				total += 29;
			}
			else 
			
			{
				total += 28;
			}	
		}
	 }
	
	     total=total+days+date;
	 }
	 
	 if(total%7==1){
		 my_printf("Mon.");}
	 if(total%7==2){
		 my_printf("Tue.");}
	 if(total%7==3){
		 my_printf("Wed.");}
	 if(total%7==4){
		 my_printf("Thu.");}
	 if(total%7==5){
		 my_printf("Fri.");}
	 if(total%7==6){
		 my_printf("Sat.");}
	 if(total%7==0){
		 my_printf("Sun.\n");}
	 return 0;
}