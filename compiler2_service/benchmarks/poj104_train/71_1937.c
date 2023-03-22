#include <header.h>



int main_bench()
{
	int n,y,m1,m2,i,a,j,b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d%d",&y,&m1,&m2);
		if(m1>m2){
			a=m1;
			m1=m2;
			m2=a;
		}
		for(j=m1;j<m2;j++){
			if(j==1||j==3||j==5||j==7||j==8||j==10){
				b +=31;
			}
			else if(j==4||j==6||j==9||j==11){
				b +=30;
			}
			else if(j==2&&(y%4==0&&y%100!=0||y%400==0)){
				b +=29;
			}
			else if(j==2&&(y%4!=0||y%400!=0)){
				b +=28;
			}
		}
		if(b%7==0){
			my_printf("YES\n");
		}
		else{
			my_printf("NO\n");
		}
		b=0;
	}
	return 0;
}