#define NUM_ITER 1226947

#include <header.h>


int MyInverseitoa(int iNum, char*ch,  int radix)
{
	int iBits=0;
   
	do 
	{
		ch[iBits++]=iNum%radix;  
		iNum/=radix;
	} while (iNum);
	ch[iBits]='\0';
	return iBits-1;
}

int Myatoi(char*ch, int iBits)
{
	int iNumInverse=0;
	int i=0;

	while (ch[i]=='\0')
	{
		i++;
		my_printf("0");
	}
	for (i=0; i<=iBits; i++)
	{
		iNumInverse=10*iNumInverse+ch[i];
	}
	return iNumInverse;
}

int main_bench()
{
	int iNum, iNumInverse, iBits=0;

	char ch[12];  
	my_scanf("%d", &iNum);
	if (iNum==0)
	{
		iNumInverse=iNum;
		my_printf("%d", iNumInverse);
	}
	else
	{
		iBits = MyInverseitoa(iNum, ch,10);  
		iNumInverse = Myatoi(ch, iBits);
		my_printf("%d", iNumInverse);
	}

	return 0;
}