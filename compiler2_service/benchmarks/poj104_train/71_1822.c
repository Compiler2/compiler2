#include <header.h>

int main_bench()
{
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,y,m1,m2,i,c1,c2,j,k,cha;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		days[2]=28;
		my_scanf("%d %d %d",&y,&m1,&m2);
		
		if((y%4==0)&&(y%100!=0)||(y%400==0))
		{days[2]++;}
		
		c1=0;c2=0;
		
		for(j=1;j<m1;j++){
			c1=c1+days[j];}

		for(k=1;k<m2;k++){
			c2=c2+days[k];}
		
		cha=c1-c2;
		if(cha%7==0)
		my_printf("YES\n");
		else
		my_printf("NO\n");	
	}	
	return 0;
}