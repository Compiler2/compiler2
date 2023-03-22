#include <header.h>


int MyInverseitoa(int iNum, char*ch,  int radix)
{
	int iBits=0;
   
	do 
	{
		ch[iBits]=iNum%radix;  
		my_printf("%d",ch[iBits]);
		iNum/=radix;
		iBits++;
	} while (iNum);
	ch[iBits]='\0';
	return iBits-1;
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
		
		
	}

	return 0;
}
