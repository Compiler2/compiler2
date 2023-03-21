#include <header.h>



int main_bench()
{
	int j,i;
	char sen[300][30];

	for(i=0;i<300;i++)
	{	
		scanf("%s",sen[i]);
		printf("%d",strlen(sen[i]));
		if(getchar()!='\n')
			printf(",");
		else
			break;

	}
return 0;
}