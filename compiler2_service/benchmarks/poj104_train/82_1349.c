#define NUM_ITER 36900

#include <header.h>

int main_bench(){
	int n,i,c,d;
	int s[110][2];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&s[i][0],&s[i][1]);
	}
	if(s[0][0]>=90&&s[0][0]<=140&&s[0][1]>=60&&s[0][1]<=90){
		c=1;
	}
	else{
		c=0;
	}
	d=c;
	for(i=1;i<n;i++){
		if(s[i][0]>=90&&s[i][0]<=140&&s[i][1]>=60&&s[i][1]<=90){
			c=c+1;
		}
		else{
			c=0;
		}
		if(c>d){
			d=c;
		}
	}
	my_printf("%d",d);
		return 0;
}