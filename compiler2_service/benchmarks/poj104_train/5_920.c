#include <header.h>

int main_bench(){
double n;
int i;
my_scanf("%lf",&n);
char sza[600],szb[600];
my_scanf("%s",sza);
my_scanf("%s",szb);
int a=0;
int b=strlen(sza);
int c=strlen(szb);
for(i=0;i<b;i++){
	if(sza[i]!='A'&&sza[i]!='T'&&sza[i]!='C'&&sza[i]!='G'){
	  a=1;
	}
	if(szb[i]!='A'&&szb[i]!='T'&&szb[i]!='C'&&szb[i]!='G'){
	  a=1;
	}
         if(b!=c){
	  a=1;
	}}
double d=0;
double e;
if(a==1){
  my_printf("error");
}else{
	for(i=0;i<b;i++){
		if(sza[i]==szb[i]){
		   d++;
		}
	}
    e=d/b;
	if(e>n){
	  my_printf("yes");
	}else{
	  my_printf("no");
	}
}
return 0;
}
