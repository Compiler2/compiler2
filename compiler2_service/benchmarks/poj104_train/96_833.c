#define NUM_ITER 1196839

#include <header.h>

int main_bench()
{
	char dzs[100];
	char xdzs[100];
	gets(dzs);
	int N;
	N=strlen(dzs);
	if(N==1){
		my_printf("0\n%c",dzs[0]);
	}else{
	int n;
	int i;
	n=(dzs[0]-'0')*10+(dzs[1]-'0');
	int a,b;
	a=n/13;
	b=n%13;
	if(N==2&&n<13){
		my_printf("0\n%d",n);
	}else{
	if(a==0){
		xdzs[0]=' ';
	}
	else if(a!=0){
		xdzs[0]='0'+a;
	}
	
	for(i=2;i<N;i++){
		n=b*10+(dzs[i]-'0');
		a=n/13;
		b=n%13;
		xdzs[i-1]='0'+a;
	}
	for(i=0;i<N-2;i++){
		if(xdzs[i]!=' '){
			my_printf("%c",xdzs[i]);
		}
	}
	my_printf("%c\n",xdzs[N-2]);
	my_printf("%d", b);
	}
	}
	return 0;
}