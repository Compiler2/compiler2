#define NUM_ITER 925923

#include <header.h>

int main_bench(){
	char a[500],b[500];
	double x;
	my_scanf("%lf",&x);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int m,i,same=0;
	m=strlen(a);
	for(i=0;i<m;i++){
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
			same=-1;
		}else if(a[i]==b[i]){
			same++;
		}
	}
    double y;
	y=(double)same/m;
	if(y>x&&same!=-1){
		my_printf("yes");
	}else if(y<=x&&same!=-1){
		my_printf("no");
	}else if(same=-1){
		my_printf("error");
	}
	return 0;
}