#include <header.h>

int main_bench(){
	char a[255],b[255],c[255];
	int i,j,d,e,f;
	my_scanf("%s",a);
	my_scanf("%s",b);
	f=strlen(a);
	for(i=0;i<=f;i++){
		a[254-i]=a[f-i];
	}
	for(i=0;i<=253-f;i++){
		a[i]='0';
	}
	f=strlen(b);
	for(i=0;i<=f;i++){
		b[254-i]=b[f-i];
	}
	for(i=0;i<=253-f;i++){
		b[i]='0';
	}
	f=0;
	for(i=253;i>=0;i--){
		d=a[i]-'0'+b[i]-'0'+f;
		e=d%10;
		f=d/10;
		c[i]=e+'0';
	}
	c[254]=0;
	for(i=0;c[i]=='0';){
		for(j=0;j<254;j++){
			c[j]=c[j+1];
		}
	}
	if(strlen(c)==0) my_printf("0");
	else my_printf("%s",c);
	my_scanf("%d",&i);
	return 0;
}