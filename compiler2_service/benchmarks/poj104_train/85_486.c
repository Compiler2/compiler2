#define NUM_ITER 33050

#include <header.h>

int legal(char d[20]){
	int i;
	if(d[0]>='0'&&d[0]<='9')
		return 0;
	for(i=0;d[i];i++){
		if(!(d[i]==' '||d[i]>='A'&&d[i]<='Z'||d[i]>='a'&&d[i]<='z'||d[i]>='0'&&d[i]<='9'||d[i]=='_')){
			return  0;
		}
	}
	return 1;
}
	
int main_bench()
{
	int i,t,n;
	char s[100][20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		t=legal(s[i]);
	
		if(t==0)
			my_printf("no\n");
		else
			my_printf("yes\n");
	}
		return 0;	
}
