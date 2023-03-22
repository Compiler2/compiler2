#define NUM_ITER 44394

#include <header.h>

int runnian(int year){
	int result=0;
if(year%400==0 || (year%100!=0 && year%4==0))
result=1;
return result;
}
int main_bench(){
	int i,answer=0;
	struct tian{
	int year,month,day;
}a;
my_scanf("%d %d %d",&a.year,&a.month,&a.day);
for(i=1;i<((a.year-1)%400)+1;i++){
answer+=1;
if(runnian(i))
{answer+=1;
}
}
for(i=1;i<a.month;i++){
if(i==1 ||i==3 ||i==5 ||i==7 || i==8 || i==10 || i==12)
answer+=3;
else if(i==2 && runnian(a.year))
answer+=1;
else if(i==4 || i==6 || i==9 || i==11)
answer+=2;
}
answer+=a.day;

if(answer%7==1)
my_printf("Mon.");
if(answer%7==2)
my_printf("Tue.");
if(answer%7==3)
my_printf("Wed.");
if(answer%7==4)
my_printf("Thu.");
if(answer%7==5)
my_printf("Fri.");
if(answer%7==6)
my_printf("Sat.");
if(answer%7==0)
my_printf("Sun.");
return 0;
}
