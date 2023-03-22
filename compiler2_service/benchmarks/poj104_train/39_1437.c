#define NUM_ITER 10546

#include <header.h>

int main_bench()
{
int i,n,k;
long a[100]={0},ss,m;
struct student
{
char name[20];
int score1,score2;
char leader;
char western;
int essay;
}st[100];
my_scanf("%d",&n);
for(i=0;i<n;i++)
	my_scanf("%s %d %d %c %c %d",st[i].name,&st[i].score1,&st[i].score2,&st[i].leader,&st[i].western,&st[i].essay);
 for(i=0;i<n;i++)
{
	if(st[i].score1>80&&st[i].essay!=0) a[i]=a[i]+8000;
	if(st[i].score1>85&&st[i].score2>80) a[i]=a[i]+4000;
	if(st[i].score1>90) a[i]=a[i]+2000;
	if(st[i].score1>85&&st[i].western=='Y') a[i]=a[i]+1000;
	if(st[i].score2>80&&st[i].leader=='Y') a[i]=a[i]+850;
}
m=a[0]; k=0; ss=a[0];
for(i=1;i<n;i++)
{
	if(m<a[i])
	{
		m=a[i];
		k=i;
	}
	ss=ss+a[i];
}
my_printf("%s\n%ld\n%ld\n",st[k].name,a[k],ss);
}
