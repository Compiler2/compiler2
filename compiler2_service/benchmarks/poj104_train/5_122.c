#define NUM_ITER 758308

#include <header.h>

int main_bench()
{
	int cout=0,len=0,flag=0,b=0;
	double lv,a;
	char slv[10],s[500],z[500];
	gets(slv);
	lv=atoi(slv);
	gets(s);
	gets(z);
	len=strlen(s);
	if(strlen(s)==strlen(z)){
	for(int i=0;s[i]!='\0';i++){
	if(s[i]==z[i])
		cout++;
	if(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G')
		b=1;
	if(z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G')
		b=1;
	}
	a=cout*1.0/len;
	flag++;
	}
	if(flag==0||b==1)
		my_printf("error");
	else{
	if(a>lv){
		my_printf("yes");}
	else
		my_printf("no");}
	return 0;
}
