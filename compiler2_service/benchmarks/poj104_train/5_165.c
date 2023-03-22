#include <header.h>

int main_bench()
{
	int i;
	float l1,l2;
	float n,count=0,result;
	char x[505],y[505];
	my_scanf("%f",&n);
    getchar();
	my_scanf("%s",x);
	my_scanf("%s",y);
	l1=strlen(x);
	l2=strlen(y);
	if(l1!=l2){
		my_printf("error");
		return 0;
	}
	for(i=0;i<l1;i++){
		if(x[i]=='A'||x[i]=='T'||x[i]=='C'||x[i]=='G') continue;
		else{
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<l2;i++){
		if(y[i]=='A'||y[i]=='T'||y[i]=='C'||y[i]=='G') continue;
		else{
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<l1;i++){
		if(x[i]==y[i]){
			count++;
		}
	}
	result=count/l1;
	if(result>n) my_printf("yes");
	else my_printf("no");
	return 0;
}