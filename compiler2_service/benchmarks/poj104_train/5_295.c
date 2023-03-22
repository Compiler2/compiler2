#define NUM_ITER 802285

#include <header.h>


int main_bench()
{
	double x,z=0,n=0,m=0;
	int y=0;
	int i;
	char a[501],b[501];
	my_scanf("%lf",&x);
         my_scanf("%s\n%s",a,b);
	for(i=0;a[i];i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
			y++;
		}
	}for(i=0;b[i];i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
			y++;
		}
	}for(i=0;a[i];i++){
		n++;
	}for(i=0;b[i];i++){
		m++;
	}if(m!=n){
		y++;
	}if(y!=0){
		my_printf("error");
	}else{
		for(i=0;a[i];i++){
			if(a[i]==b[i]){
				z++;
			}
		}if(z/n>x){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
}


