#include <header.h>

int main_bench()
{
	int n,i,k,j,d;
	my_scanf("%d\n",&n);
	int y,m1,m2;
	int sum1=0;
	for(k=0;k<n;k++)
	{
		my_scanf("%d %d %d",&y,&m1,&m2);
		int temp;
		if(m1>m2)
		{
			temp=m1;
			m1=m2;
			m2=temp;}
		int sum1=0;
		for(j=m1;j<m2;j++)
		{
			if(j==1||j==3||j==5||j==7||j==8||j==10) {
            sum1+=3;
			}
			 if(j==4||j==6||j==9||j==11) {
            sum1+=2;}
			if(j==2&&((y%4==0)&&(y%100!=0)||(y%400==0))) 
			{sum1+=1;}
		}
				d=sum1%7;
				if(d==0)
				{my_printf("YES\n");}
				else my_printf("NO\n");
			
	}
	return 0;
}

