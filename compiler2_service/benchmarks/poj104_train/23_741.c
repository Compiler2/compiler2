#include <header.h>


int main_bench()
{
	char s[105];
	char t[100][100];
	int i,j,k;

	gets(s);

	j=0;
	k=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			t[j][k]=s[i];
			k++;
		}

		if(s[i]==' ')
		{
			t[j][k]=0;
			k=0;
			j++;
		}
	}
	t[j][k]=0;





	for(i=j;i>0;i--)
		my_printf("%s ",t[i]);
	my_printf("%s\n",t[0]);
}