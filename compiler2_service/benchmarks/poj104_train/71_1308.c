#define NUM_ITER 5251

#include <header.h>

int main_bench(){
	int n,i;
	int year,mon1,mon2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d%d",&year,&mon1,&mon2);
		if((year%100!=0&&year%4==0)||(year%100==0&&year%400==0)){
			if(mon1>mon2){
				int t;
				t=mon1;
				mon1=mon2;
				mon2=t;
			}
			int days=0,j;
			int m;
			m=mon1;
			for(j=0;j<mon2-mon1;j++){
				if(m==1||m==3||m==5||m==7||m==8||m==10){
					days=days+31;
				}
				else if(m==2){
					days=days+29;
				}
				else{
					days=days+30;
				}
				m=m+1;
			}
			if(days%7==0){
				my_printf("YES\n");
			}
			else{
				my_printf("NO\n");
			}
		}
		else{
if(mon1>mon2){
				int t;
				t=mon1;
				mon1=mon2;
				mon2=t;
			}
			int days=0,j;
			int m;
			m=mon1;
			for(j=0;j<mon2-mon1;j++){
				if(m==1||m==3||m==5||m==7||m==8||m==10){
					days=days+31;
				}
				else if(m==2){
					days=days+28;
				}
				else{
					days=days+30;
				}
				m=m+1;
			}
			if(days%7==0){
				my_printf("YES\n");
			}
			else{
				my_printf("NO\n");
			}
		}
	}
		return 0;
	}


