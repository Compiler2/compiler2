#define NUM_ITER 885480

#include <header.h>

int main_bench(){
int i,j,x,y,u=0,t=0;
double n;
char a[505],b[505];
my_scanf("%lf",&n);
my_scanf("%s",a);
my_scanf("%s",b);;
x=strlen(a);
y=strlen(b);
if(x!=y) t=0;
else{
for(i=0;i<x;i++){
	if((a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')&&(b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C') ){
		t+=1;
		if(a[i]==b[i]) 
		u+=1;
		
	}
	else if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
	t=0;
}
}
if(t==0)  my_printf("error");
else if(u*1.0/x>=n) my_printf("yes");
else if(u*1.0/x<n) my_printf("no");	
return 0;
}
		