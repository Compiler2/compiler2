#define NUM_ITER 6373

#include <header.h>

int main_bench()
{
	int n,i,y,m1,m2,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d%d",&y,&m1,&m2);
		k=cmp(y,m1,m2);
		if(k) my_printf("YES\n");
		else my_printf("NO\n");
	}
	return 0;
}
int cmp(int y,int m1,int m2)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,s=0,t1,t2;
	if(((y%4==0)&&(y%100)!=0)||y%400==0)
		a[1]=29;
	t1=(m1>m2? m1:m2);
	t2=(m1>m2? m2:m1);
	for(i=t2;i<t1;i++)
	    s+=a[i-1];
	return(s%7==0? 1:0);
}