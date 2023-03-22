#include <header.h>

int main_bench(){
	int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31},month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int n, y, m1, m2, j, bigm, smallm;
	my_scanf("%d",& n);
	for(j=0; j<n; j++){
		int days=0, i;
		my_scanf("%d%d%d", &y, &m1, &m2);
		if (m1<= m2){
			smallm= m1;
			bigm= m2;
		}
		else{
			bigm=m1;
			smallm=m2;
		}
        if ((y%4==0 && y%100!= 0) || y%400 ==0){
		    for(i=smallm; i<bigm; i++){
				days+=month2[i-1];
			}
			if (days%7==0){
				my_printf("YES\n");
			}
			else{
			   	my_printf("NO\n");
			}
		}
	   else{
		    for(i=smallm; i<bigm; i++){
				days+=month1[i-1];
			}
		    if (days%7==0){
			    my_printf("YES\n");
			}
		    else{
			    my_printf("NO\n");
			}

	   }
	}
	
    return 0;

}