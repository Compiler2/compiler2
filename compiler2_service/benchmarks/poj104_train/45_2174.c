#define NUM_ITER 642379

#include <header.h>

int main_bench(){
char z[50],m[50];
int a,n,b=0;
my_scanf("%s %s",z,m);
n=strlen(z);
for(int i=0;i<50;i++){
	if((m[i]==z[0])&&(m[i+n-1]=z[n-1])){
		a=1;
		for(int j=i+1;j<i+n-2;j++){
			if(m[j]!=z[a])b=1;
			a++;
		}
		if(b==0){
		my_printf("%d",i);
		break;
		}
	}
}
return 0;
}
