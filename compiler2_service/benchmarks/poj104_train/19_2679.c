#define NUM_ITER 68306

#include <header.h>


char m[110][110];

int main_bench()
{
	char s[110],a[110],b[110];
	int num;
	int i,j,len;

	gets(s);
	my_scanf("%s%s",a,b);
	num=0;
	for(i=0;s[i]!=' ';i++)
		m[0][i]=s[i];
	m[0][i]='\0';
	num++;
	i++;
	len=strlen(s);
	while(s[i]!='\0')
	{
		j=0;
		while(s[i]!=' '&&s[i]!='\0')
		{
			m[num][j++]=s[i++];
		}
		m[num++][j]='\0';
		i++;
		if(i>=len)break;
	}
	
	for(i=0;i<num;i++)
		if(strcmp(a,m[i])==0)
		{
			strcpy(m[i],b);
			len=strlen(b);
			m[i][len]='\0';
		}
	for(i=0;i<num-1;i++)
		my_printf("%s ",m[i]);
	my_printf("%s\n",m[num-1]);
	return 0;
}