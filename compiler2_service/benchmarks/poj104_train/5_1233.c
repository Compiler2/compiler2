#define NUM_ITER 907001

#include <header.h>


int main_bench(){
	int i,j,x,y,count=0;
	double n,m;
	char a[1000],b[1000];
	my_scanf("%lf",&n);
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	for(i=0;a[i]!='\0',b[i]!='\0';i++){
		x=strlen(a);
		y=strlen(b);
		if(x!=y){
			my_printf("error\n");
			
			return 0;
			break;
		}
		for(j=0;a[j]!='\0';j++){
			if(a[j]!='A' && a[j]!='T'&& a[j]!='G'&& a[j]!='C'){
				my_printf("error\n");
			
				return 0;
					break;
			}
			if(b[j]!='A' && b[j]!='T'&& b[j]!='G'&& b[j]!='C'){
				my_printf("error\n");
			
				return 0 ;
					break;
			}
		}

		if(a[i]==b[i]){
			count++;
		}
	}
		m=((1.0)*count)/x;
		if(m>=n){
			my_printf("yes");
		}else{
			my_printf("no");
		}


	return 0 ;
}