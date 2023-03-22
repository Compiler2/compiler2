#include <header.h>

int main_bench(){
int i,k,a1,a2,w;
char DNA1[501],DNA2[501];
double n,q;
my_scanf("%lf",&n);
my_scanf("%s",&DNA1);
my_scanf("%s",&DNA2);
a1=strlen(DNA1);
a2=strlen(DNA2);
k=0;
w=1;
if(a1==a2){
for(i=0;i<a1;i++){
	if((DNA1[i]!='A'&&DNA1[i]!='G'&&DNA1[i]!='C'&&DNA1[i]!='T')||(DNA2[i]!='A'&&DNA2[i]!='G'&&DNA2[i]!='C'&&DNA2[i]!='T'))
	{w*=0;}
	else{if(DNA1[i]==DNA2[i]){k++;}}
	w*=1;
}
q=k*1.0/a1;
if(w==0){my_printf("error");}
else{if(q>n){my_printf("yes");}
     else{my_printf("no");}}
}
else{my_printf("error");}
return 0;
}