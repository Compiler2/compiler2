#define NUM_ITER 901276

#include <header.h>

int main_bench()
{
	int i,j=0,m;
	char zfc[1000],zfc_1[100],zfc_2[100];
	my_scanf("%s%s%s",zfc,zfc_1,zfc_2);
	for(i=0;zfc[i]!='\0';i++)
	{
		if(j==(int)strlen(zfc_1))
			break;
		if(zfc[i]==zfc_1[j])
			j++;
		else
			j=0;
	}
	if(j==(int)strlen(zfc_1))
	{for(m=0;m<i-j;m++)
		my_printf("%c",zfc[m]);
	my_printf("%s",zfc_2);
	for(m=i;m<(int)strlen(zfc);m++)
		my_printf("%c",zfc[m]);
	}
	else my_printf("%s",zfc);
	return 0;
}