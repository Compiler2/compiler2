#define NUM_ITER 35309

#include <header.h>



int main_bench()
{
	int n,i,k;
	char string[81];
	char *p;

	my_scanf("%d",&n);
	getchar();
	for(k=1;k<=n;k++){
	gets(string);
	p=string;
	if((*p=='_')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
	{
		for(i=0;*(p+i)!='\0';i++)
		{
			if((*(p+i)=='_')||(*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z')||(*(p+i)>='0'&&*(p+i)<='9'));
			else
			{
			my_printf("no\n");
			break;}
		}
		if(*(p+i)=='\0')
			my_printf("yes\n");
	}
	else 
		my_printf("no\n");}
	return 0;
}