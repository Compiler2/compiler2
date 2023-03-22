#include <header.h>

int DiJiTian(int year,int mon);
int main_bench(){
int i,n,mon1,mon2,year,result;
int sz[200];
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
   sz[i]=0;
   }   
   for(i=0;i<n;i++){
	my_scanf("%d %d %d", &year, &mon1, &mon2);
    result=DiJiTian(year,mon1)-DiJiTian(year,mon2);
	if(result<0){
		result=0-result;
	}
    if((result%7)==0){
	sz[i]=1;}
   }
   for(i=0;i<n;i++){
	   if(sz[i]==1){
   my_printf("YES\n");
	   }else{
		   my_printf("NO\n");}
   }
	   return 0;
}
int DiJiTian(int year, int mon){
	int result=0;
	int i;
	for(i=1;i<mon;i++){ 
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result+=31;	
		} else if(i==4||i==6||i==9||i==11){
			result+= 30;
		} else if(i == 2){
			if(year%400==0||(year%4==0&&year%100!=0)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result+=1;	
	return result;	
}
