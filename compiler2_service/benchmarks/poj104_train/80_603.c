#define NUM_ITER 206840

#include <header.h>

int main_bench()
{int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int y1,y2,m1,m2,d1,d2;
int i,m=0;
int temp;
int s1=0,s2=0;
my_scanf("%d %d %d",&y1,&m1,&d1);
my_scanf("%d %d %d",&y2,&m2,&d2);
if(y1==y2){
	for(i=0;i<m1-1;i++)
		s1+=month[i];
	for(i=0;i<m2-1;i++)
		s2+=month[i];
	m=s2-s1+d2-d1;
	if(m<0)
		m=-m;
	my_printf("%d\n",m);
}
else 
{if(y2-y1<0){
temp=y1;
y1=y2;
y2=temp;
}
for(i=0;i<m1-1;i++)
s1+=month[i];
for(i=0;i<m2-1;i++)
s2+=month[i];
if(m1>2){
	s2+=365;
	y1++;
}
if(m2>2){
	s2-=365;
	y2++;
}
for(i=y1;i<y2;i++){
	if(i%4==0&&i%100!=0||i%400==0)
		s2+=366;
	else 
		s2+=365;
}
my_printf("%d\n",s2-s1+d2-d1);
}
return 0;
}

