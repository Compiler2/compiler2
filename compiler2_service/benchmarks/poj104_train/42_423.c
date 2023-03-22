#include <header.h>

int main_bench()
{
	int buffer[200000];
	int NumOfBF;
	int NumToDelete;
	int NumofDel = 0;
	int i,j,k;
	my_scanf("%d",&NumOfBF);
	for(i = 0;i < NumOfBF;i++)
	{
			my_scanf("%d",&buffer[i]);
	}
	my_scanf("%d",&NumToDelete);
	for(j = 0;j < NumOfBF - NumofDel;j++)
	{
		if(buffer[j] == NumToDelete)
		{
		for(k = j;k < NumOfBF - NumofDel;k++)
		{
		buffer[k] = buffer[k + 1];
		}
		NumofDel++;
		j = j - 1; 
		}
	}
	my_printf("%d",buffer[0]);
	for(j = 1;j < NumOfBF - NumofDel;j++)
	{
	my_printf(" %d",buffer[j]);
	}
	my_printf("\n");
	return 0;
}