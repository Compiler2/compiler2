#include <header.h>


int main_bench(){
int k,i;
double m,ac,bc,n;
k=0;
m=0;
ac=0;
bc=0;
my_scanf("%lf\n",&n);
char a[501],b[501];
my_scanf("%s\n",a);
my_scanf("%s",b);
ac=strlen(a)-1;
bc=strlen(b)-1;
if(ac!=bc){
	k++;
	my_printf("error");
return 0;
}
else {
	for(i=0;a[i]!='\0';i++){
	if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')){
		k++;
		my_printf("error");
	break;}
    else{
		if(a[i]==b[i]){
		m++;}
	}
}
}
if(k==0){
	if(m/ac>=n){my_printf("yes");}
	else{my_printf("no");}
}

    return 0;
    } 
