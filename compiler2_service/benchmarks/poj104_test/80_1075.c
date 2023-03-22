#define NUM_ITER 287948

#include <header.h>

int main_bench()
{
	int y1,m1,d1,y2,m2,d2,c1,c2,c,i1,i2,y;
	my_scanf("%d %d %d\n%d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	int days1[]={0,31,28,31,30,31,30,31,31,30,31,30,31},days2[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((y1%4==0)&&(y1%100!=0)||(y1%400==0)) {days1[2]++;}
	c1=d1;
	for(i1=1;i1<m1;i1++) {c1+=days1[i1];}
	if((y2%4==0)&&(y2%100!=0)||(y2%400==0)) {days2[2]++;}
	c2=d2;
	for(i2=1;i2<m2;i2++) {c2+=days2[i2];}
	y=y1;
	c=0;
	while(y<y2)
	{
        if((y%4==0)&&(y%100!=0)||(y%400==0)) c=c+366;
		else c=c+365;
		y++;
	}
	c=c-c1+c2;
	my_printf("%d",c);
	return 0;
}
