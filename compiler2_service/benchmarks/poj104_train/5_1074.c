#include <header.h>

int main_bench(){
int i;
char d[3][501];
double n,m,a,b,c,x;
x=0;
my_scanf("%lf",&a);
my_scanf("%s",&d[1]);
my_scanf("%s",&d[2]);
n=strlen(d[1]);
m=strlen(d[2]);
for(i=0;i<n;i++){
	if((d[1][i]!='A'&&d[1][i]!='G'&&d[1][i]!='C'&&d[1][i]!='T')||(d[2][i]!='A'&&d[2][i]!='G'&&d[2][i]!='C'&&d[2][i]!='T')){
		x++;
	}
}
if(m!=n||x>0){
	my_printf("error");
}else{
for(i=0;i<n;i++){
	if(d[1][i]==d[2][i]){
		b++;
	}
}
c=b/n;
if(c>a){
	my_printf("yes");
}else{
	my_printf("no");
}
}
return 0;
}