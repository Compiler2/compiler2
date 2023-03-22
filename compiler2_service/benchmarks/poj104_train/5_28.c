#define NUM_ITER 842033

#include <header.h>

int main_bench(){
	double n;
	my_scanf("%lf",&n);
	char zfc[500],sz[500];
	my_scanf("%s%s",zfc,sz);
	int a=strlen(zfc);
	int b=strlen(sz);
	int m;
    if(a!=b){my_printf("error");}
	else{
		m=a;
		int k=0;
		int y;
		for(y=0;y<m;y++){
			if(zfc[y]!='A'&&zfc[y]!='T'&&zfc[y]!='C'&&zfc[y]!='G'&&zfc[y]!='\0'){
				my_printf("error");
			k=1;
			break;}
			if(sz[y]!='A'&&sz[y]!='T'&&sz[y]!='C'&&sz[y]!='G'&&zfc[y]!='\0'){
				my_printf("error");
			k=1;
			break;}
		}
			if(k==0){
		
	int i,c=0;
	for(i=0;i<m;i++){
		if(zfc[i]==sz[i]){
			c++;
		}
	}
	double s=c*1.0/m;
	if(s>n){my_printf("yes");}
	else{my_printf("no");}
	}
		}
	return 0;
}


	