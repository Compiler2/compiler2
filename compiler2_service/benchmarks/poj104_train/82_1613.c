#define NUM_ITER 39521

#include <header.h>

int main_bench(){
	int n,i,s1[100],s2[100],c=0,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&(s1[i]),&(s2[i]));
		if(i==0){
			if(s1[i]>=90&&s1[i]<=140&&s2[i]>=60&&s2[i]<=90){
				c++;
				max=c;
			}else{
				continue;
			}
		}else{
			if(s1[i]>=90&&s1[i]<=140&&s2[i]>=60&&s2[i]<=90){
				c++;
				if(max<c){
					max=c;
				}
			}else{
				c=0;
			}
		}
	}
	my_printf("%d",max);
	return 0;
}