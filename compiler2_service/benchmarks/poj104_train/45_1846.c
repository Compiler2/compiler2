#define NUM_ITER 1321581

#include <header.h>

int main_bench()
{
	char words[101],word[2][32];
	gets (words);
	int i,n=0,k=0,m=0;
	char *p,*q;
	for( i=0;words[i]!=0;i++)
	{
		if(words[i]==' ')
		{
			words[i]='\0';
			strcpy(word[n],(words+k));
			k=i+1;
			n++;
		}
	}
	strcpy(word[n],(words+k));
	n++;
	q=word[0];
	for (p=word[1];*p!='\0';p++)
	{
		
		if(*p==*q)
		{
			my_printf("%d",m);
			break;
		}
		m++;
	}

	return 0;
}
