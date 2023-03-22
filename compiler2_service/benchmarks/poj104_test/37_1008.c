#include <header.h>

int main_bench(){
int n,i,m,b=0,c=0;
char a[100000];
char *p,*q;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%s",a);
	m=strlen(a);
	for(p=a;p<a+m;p++){
		for(q=a;q<a+m;q++){
			if((*p)==(*q)&&p!=q){
				b=1;
				break;
			}	
		}
		if(b==0){
			my_printf("%c\n",*p);
			c=1;
			break;
		}
		b=0;
	}
	if(c==0){
		my_printf("no\n");
	}
	c=0;
	
}
return 0;
}




