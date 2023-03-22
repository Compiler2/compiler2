#include <header.h>



int getday(int year,int month);

int main_bench(){
	int n,j;
	my_scanf("%d",&n);
	int *a;
	a=(int *)malloc( sizeof(int) *n );
	for(j=0;j<n;j++){
		a[j]=0;
	}

	for(j=0;j<n;j++){

	int year1,month1,month2;
	int total1, total2, days;
	my_scanf("%d%d%d", &year1,&month1,&month2);
	total1 =getday(year1, month1);
	total2 =getday(year1, month2);

	days = total2-total1;

	if(days%7==0){
		a[j]=1;
	}
	else a[j]=0;
	}

	for(j=0;j<n;j++){
		if(a[j]==1){
			my_printf("YES\n");
		}
		else if(a[j]==0){
			my_printf("NO\n");
		}
	}


	return 0;
}






int getday(int year,int month)
{
	int total, i;
    
	total = 0;
	for( i=1; i<month; i++){
		if ( i ==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
			total = total +31;
		}
		if ( i ==4 || i==6 || i==9 || i==11){
			total = total +30;
		}
		if ( i ==2){
			if( (year%4==0&&year%100!=0) || year%400==0 ){
				total = total +29;
			}
			else{
				total = total +28;
			}
		}
	}
	total  =  total+1;
	
	return total;
}
