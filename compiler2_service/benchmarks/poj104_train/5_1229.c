#define NUM_ITER 762706

#include <header.h>

int main_bench()
{
	char a[501]={0};
	char b[501]={0};
int i,n;
double e,s=0,c;
my_scanf("%lf",&e);
my_scanf("%s",a);
my_scanf("%s",b);
if(strlen(a)!=strlen(b)){
	my_printf("error");
	return 0;
}
else {
	for(i=0;a[i]!='\0';i++){
	if	((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')&&
		(b[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')){
		my_printf("error");
			return 0;
	}

else {
n=strlen(a);

	
	
 if(a[i]==b[i]){
		s++;
	}
}
	}
}

c=s/n;

if(c>e){
	my_printf("yes\n");
}
else if(c<=e){
	my_printf("no\n");
}

		
return 0;
}
