#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d\n",&n);
	int i=1;
	int m=0;
	int max=0;
	while(i<=n){
		int s,z;
		my_scanf("%d%d",&s,&z);
		if(s>=90&&s<=140&&z<=90&&z>=60){
			m=m+1;
		}else{
			if(max>m){
				max=max;
			
			}else{
				max=m;
			}
			m=0;
		}
		i=i+1;}
	if(max>m){
				max=max;
			
			}else{
				max=m;
			}
	my_printf("%d",max);
return 0;}
