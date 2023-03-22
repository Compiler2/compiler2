#define NUM_ITER 677258

#include <header.h>

int main_bench()
{
	char yuanshi[500],bijiao[500],laji[3];
	double cankao,shiji;
	int jishu=0,i,m,n,panduan=0;
	my_scanf("%lf",&cankao);
	gets(laji);
	gets(yuanshi);
	gets(bijiao);
	m=strlen(yuanshi);
	n=strlen(bijiao);
	for(i=0;i<m;i++)
	{
		if(yuanshi[i]==bijiao[i])
			jishu++;
		if(yuanshi[i]!='A'&&yuanshi[i]!='T'&&yuanshi[i]!='G'&&yuanshi[i]!='C'&&yuanshi[i]!='\0')
			panduan++;
		if(bijiao[i]!='A'&&bijiao[i]!='T'&&bijiao[i]!='G'&&bijiao[i]!='C'&&bijiao[i]!='\0')
			panduan++;
	}
	if(m!=n||panduan!=0)
	{
		
		my_printf("error");
	}
	else if(m==n&&panduan==0)
	{
		shiji=jishu*1.0/m;
		if(shiji>cankao)
			my_printf("yes");
		else
			my_printf("no");
	}
	

	return 0;
}
