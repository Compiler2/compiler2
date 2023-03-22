#define NUM_ITER 64322

#include <header.h>

 int run(int y);
int main_bench(){
	int y,m,d,z=0,i,k=0;
	int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d%d%d",&y,&m,&d);
	while(y>2800)
		y-=2800;
	for(i=1;i<y;i++){
		if(run(i))
			k++;
	}
	for(i=0;i<m-1;i++)
		z+=md[i];
	if(run(y)&&m>=3)
		z++;
	z+=365*y+d+k-1;
	if(z%7==1)
		my_printf("Mon.");
	else if(z%7==2)
		my_printf("Tue.");
	else if(z%7==3)
		my_printf("Wed.");
	else if(z%7==4)
		my_printf("Thu.");
	else if(z%7==5)
		my_printf("Fri.");
	else if(z%7==6)
		my_printf("Sat.");
	else
		my_printf("Sun.");
	return 0;
}
int run(int y){
	if(y%100!=0&&y%4==0)
		return 1;
	else if(y%400==0)
		return 1;
	else
		return 0;
}