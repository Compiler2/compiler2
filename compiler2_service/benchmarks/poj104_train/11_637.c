#include <header.h>

main_bench()
{
	int y,m,day,tot=0,i;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	my_scanf("%d %d %d",&y,&m,&day);
	if ((y%400==0)||((y%4==0)&&(y%100!=0))) a[1]++;
    for (i=0;i<m-1;i++)
    tot+=a[i];
	tot+=day;
	my_printf("%d\n",tot);
	return 0;
}