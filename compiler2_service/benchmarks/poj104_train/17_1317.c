#define NUM_ITER 1276685

#include <header.h>

int main_bench()
{
	char ch[200],temp[200];
	int n,i,figure,tempnum[200];
	my_scanf("%d\n",&n);
	while(gets(ch))
	{
		figure=0;
		for(i=0;ch[i]!='\0';i++)
		{
			temp[i]=' ';
			switch(ch[i])
			{
			case '(':tempnum[figure++]=i;temp[i]='$';break;
			case ')':
				if(figure>0)
				{
					figure--;temp[tempnum[figure]]=' ';
				}
				else temp[i]='?';break;
			}
		}
		temp[i]='\0';
		my_printf("%s\n%s\n",ch,temp);
	}
}