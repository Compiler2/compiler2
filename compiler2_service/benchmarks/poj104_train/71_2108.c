#include <header.h>

int DiJiTian(int, int, int);
int main_bench(){
	int n;
	int nian;
	int x,y;
	int i;
	int e;
	int day;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	         my_scanf("%d %d %d", &nian, &x, &y);
	         if(x<y){
	                        e=x;
		                    x=y;
		                    y=e;
			 }
	         day=DiJiTian(nian,x,1)-DiJiTian(nian,y,1);
	         if(day%7==0){
		              my_printf("YES\n");
			 }else {
	                	my_printf("NO\n");
			 }
	}
	return 0;
}


int DiJiTian(int year, int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			result += 30;
		} else if(i == 2){
			if(year%400 == 0 ||(year%4==0 && year%100!=0)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result += day;	
	return result;	
}
