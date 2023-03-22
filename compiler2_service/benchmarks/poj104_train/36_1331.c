#define NUM_ITER 973788

#include <header.h>

int main_bench(){
	int i,j,x,y,e,c;
	char a[100],b[100];
	my_scanf("%s",a);
	my_scanf("%s",b);
	x=strlen(a);
	y=strlen(b);
	if(x!=y) my_printf("NO");
	else{
		for(i=0;i<x;i++){
			for(j=0;j<x;j++){
				if(a[i]==b[j]){
					e=b[i];
					b[i]=b[j];
					b[j]=e;
				}
			}
		}
		c=strcmp(a,b);
		if(c==0)
			my_printf("YES");
		else
			my_printf("NO");
	}
	 return 0;
}
