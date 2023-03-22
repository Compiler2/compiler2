#define NUM_ITER 948194

#include <header.h>

int main_bench(){
char a[51],b[51];
int i,j=0,k;
double n,t;
my_scanf("%lf",&n);
my_scanf("%s",a);
my_scanf("%s",b);
if(strlen(a)!=strlen(b)){my_printf("error");}
else{
	for(i=0;a[i]!='\0';i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){my_printf("error");return 0;}
	}
for(i=0;b[i]!='\0';i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){my_printf("error");return 0;}
	}
for(i=0;a[i]!='\0';i++){
if(a[i]==b[i]){j++;}
}

k=strlen(a);
t=1.0*j/k;
if(t>n){my_printf("yes");}
else{my_printf("no");}
}
return 0;
}
