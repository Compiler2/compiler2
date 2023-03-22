#include <header.h>

int main_bench()
{
	int a,b,c,m=0,i;
	my_scanf("%d%d%d",&a,&b,&c);
    m+=a-1+(a-1)/4-(a-1)/100+(a-1)/400+c;
    int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int m2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if(b>1){
		if(a%4!=0||(a%100==0&&a%400!=0)){
			for(i=0;i<b-1;i++){
				m+=m1[i];
			}
		}
		else{
			for(i=0;i<b-1;i++)
				m+=m2[i];
		}
	}
	if(m%7==1)  my_printf("Mon.");
    if(m%7==2)  my_printf("Tue.");
	if(m%7==3)  my_printf("Wed.");
    if(m%7==4)  my_printf("Thu.");
	if(m%7==5)  my_printf("Fri.");
	if(m%7==6)  my_printf("Sat.");
	if(m%7==0)  my_printf("Sun.");
	return 0;
}