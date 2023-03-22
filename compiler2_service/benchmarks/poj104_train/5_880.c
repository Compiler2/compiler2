#include <header.h>

int main_bench(){
int y,q,n,i,m,l;
double p,k;
char sz[500],dz[500];
my_scanf("%lf",&p);
my_scanf("%s",sz);
my_scanf("%s",dz);
m=0;
y=0;
n=0;
l=0;
n=strlen(sz);
q=0;
m=strlen(dz);
if(m!=n){
my_printf("error");
}else{
    for(i=0;i<n;i++){
        if(sz[i]!='A'&&sz[i]!='T'&&sz[i]!='C'&&sz[i]!='G'){
			y++;
			my_printf("error");
			break;
		}
		if(dz[i]!='A'&&dz[i]!='T'&&dz[i]!='C'&&dz[i]!='G'){
			l++;
    	   my_printf("error");
		   break;
		}
	}
	if(l==0&&y==0){
for(i=0;i<n;i++){
	if(sz[i]==dz[i]){
	q++;
	}
}
k=1.0*q/n;
if(k>p){
my_printf("yes");
}else{
my_printf("no");
}
}
}
return 0;
}
