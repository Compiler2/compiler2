#define NUM_ITER 6227

#include <header.h>

int main_bench(){
	int n,i,m=0,j=1,s[300],x[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(s[i]));
	} 
	x[0]=s[0];
	
	for(i=1;i<n;i++){
		m=0;
     for(int k=0;k<i;k++){
		 if(s[i]!=s[k]){
			 m++;
		 }
		}
		if(m==i){
			x[j]=s[i];
			j++;
		}
	}
    my_printf("%d",x[0]);
	for(i=1;i<j;i++){
		my_printf(",%d",x[i]);
	}
	return 0;
}