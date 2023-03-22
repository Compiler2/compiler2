#define NUM_ITER 1327137

#include <header.h>

struct stu
{
	char letter;
	int count;
};
int main_bench()
{
	struct stu b[1001];
	char c[1000];
	char *str,*p;
	int i,j;
	str=p=c;
	gets(c);
	while(*p)
	{
		if(*p>='a'&&*p<='z')
			*p=*p+'A'-'a';
		p++;
	}
	b[0].letter=*str;
	b[0].count=1;
	str++;
	j=0;
	while(*str)
	{
		if(*str==*(str-1))
			b[j].count++;
		else
		{
			j++;
			b[j].letter=*str;
			b[j].count=1;
		}
		str++;
	}
	for(i=0;i<=j;i++)
		my_printf("(%c,%d)",b[i].letter,b[i].count);
	return 0;
}