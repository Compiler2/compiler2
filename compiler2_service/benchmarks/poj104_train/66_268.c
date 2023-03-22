#include <header.h>

int main_bench()
{
	int y,m,d,i,w;
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d %d %d",&y,&m,&d);
	w=y%7+y/4-y/100+y/400;
	for(i=1;i<m;i++){
	    w+=days[i];
	}
    w+=d-1;
	if(((y%4==0&&y%100!=0)||y%400==0)&&(m<=2))
		w--;
	switch(w%7){
	case 1:my_printf("Mon.\n");break;
	case 2:my_printf("Tue.\n");break;
	case 3:my_printf("Wed.\n");break;
	case 4:my_printf("Thu.\n");break;
	case 5:my_printf("Fri.\n");break;
	case 6:my_printf("Sat.\n");break;
	case 0:my_printf("Sun.\n");break;
	}
	
	return 0;
}