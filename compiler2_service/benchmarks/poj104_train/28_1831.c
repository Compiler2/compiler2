#define NUM_ITER 1263729

#include <header.h>

int main_bench()
{
	int n,a,i,p,q,t;
    char r[2000],s[2001];
	s[0]=' ';s[1]='\0';
	gets(r);strcat(s,r);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' '&&s[i+1]!=' ') p=i+1;
		if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0')) {q=i;a=q-p+1;my_printf("%d",a);break;}
	}
	for(i=i+1;s[i]!='\0';i++)
	{
       if(s[i]==' '&&s[i+1]!=' ') p=i+1;
		if(s[i]!=' '&&(s[i+1]==' '||s[i+1]=='\0')) {q=i;a=q-p+1;my_printf(",%d",a);}
	}
	return 0;
}