#define NUM_ITER 28943

#include <header.h>

int main_bench()
{
	int n,i,j,a=0,m;
	char s[20];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",s);
		m=strlen(s);
        a=0;
	for(j=0;j<m;j++)
	{
  		if((j==0)&&(s[0]>='0')&&(s[0]<='9')) {a=1;break;}
		if((s[j]=='_')||((s[j]<='z')&&(s[j]>='a'))||((s[j]<='Z')&&(s[j]>='A'))||((s[j]<='9')&&(s[j]>='0')))
		a=0;
	else {a=1;break;}
	}
	if(a==0)
		my_printf("yes\n");
	if(a==1) 
		my_printf("no\n");
    }
	return 0;
}