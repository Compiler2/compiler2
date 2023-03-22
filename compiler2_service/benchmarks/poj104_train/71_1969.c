#include <header.h>

int main_bench(){
	int i,j,n,k;
	int year,m1,m2,total=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d %d",&year,&m1,&m2);
		if(m1>m2){
			k=m1;
			m1=m2;
			m2=k;
		}
		total=0;
	for( j = m1;j < m2; j++){
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
		{
			total += 31;	
		}
		else if (j == 4 || j ==6 || j == 9 || j==11)
		{
			total += 30;
		} 
		else if(j == 2){
			if(year%4==0&&year%100!=0||year%400==0){
				total += 29;
			} 
			else {
				total += 28;
			}	
		}
	}
	
	if(total%7==0){
		my_printf("YES\n");
	}
	else{
	    my_printf("NO\n");
	}
	}
	return 0;
}
