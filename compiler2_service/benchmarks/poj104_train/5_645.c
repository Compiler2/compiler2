#include <header.h>

int main_bench(){
	double r,k=0,p;
	int i,q=1;
	char s[600],s1[600];
	my_scanf("%lf\n",&r);
	my_scanf("%s",s);
	my_scanf("%s",s1);
for(i=0;i<strlen(s);i++)
	{
	if((s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'&&s[i]!='A')||(s1[i]!='T'&&s1[i]!='C'&&s1[i]!='G'&&s1[i]!='A')){
			my_printf("error");
               q=0;
			   break;
	}
}
if(q==1){
    for(i=0;i<strlen(s);i++)
	{
		if(s[i]==s1[i])
			k++;
	}
	p=1.0*k/strlen(s);
	if(p>r)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
}
  return 0;
}
