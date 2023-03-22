#define NUM_ITER 957983

#include <header.h>

int main_bench(){
	double n;
	char zzd[600];
	char hzy[600];
	int i;
	int a;
	double v;
	a=0;
	double b;
	int c;
	c=0;
	my_scanf("%lf",&n);
	my_scanf("%s",zzd);
	my_scanf("%s",hzy);
	b=strlen(zzd);
	for(i=0;i<b;i++){
		if(zzd[i]!='A'&&zzd[i]!='G'&&zzd[i]!='C'&&zzd[i]!='T'){
			my_printf("error");
			c++;
			break;
		}
		else if(hzy[i]!='A'&&hzy[i]!='G'&&hzy[i]!='C'&&hzy[i]!='T'){
			my_printf("error");
			c++;
			break;
		}
		else if(zzd[i]==hzy[i]){
				a++;
			}
	}
	if(c==0){
	v=a/b;
	if(v>=n){
		my_printf("yes");
	}
	else if(v<n){
		my_printf("no");
	}
	}
	return 0;
}