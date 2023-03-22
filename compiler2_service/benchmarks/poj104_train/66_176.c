#include <header.h>

int main_bench() 
{
  unsigned long int n,year,mon,day,m,u;
int month[12];
month[0]=31,month[1]=28,month[2]=31,month[3]=30,month[4]=31,month[5]=30,month[6]=31,month[7]=31,month[8]=30,month[9]=31,month[10]=30,month[11]=31;
my_scanf("%d %d %d",&year,&mon,&day);
n=0;
if((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0)
month[1]=29;
else month[1]=28;
for(m=0;m<(mon-1);m++)
{
	n=n+month[m];

}

n=n+day;
n=n%7;
n+=(year-1)+(year-1)/4-(year-1)/100+(year-1)/400;

u=n%7;
switch(u)
{case 1:my_printf("Mon.\n");break;
case 2:my_printf("Tue.\n");break;
case 3:my_printf("Wed.\n");break;
case 4:my_printf("Thu.\n");break;
case 5:my_printf("Fri.\n");break;
case 6:my_printf("Sat.\n");break;
case 0:my_printf("Sun.\n");break;}
return 0;
}
