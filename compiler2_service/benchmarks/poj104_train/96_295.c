#define NUM_ITER 823028

#include <header.h>

int main_bench()
{
	char number[100 + 1];
	int a[100 + 1] ,lenth;
	int shang[100 +1] = {0} ;
	int  i , j , s;
	s = 0;

	gets(number);
	lenth = strlen(number);
	for( i = 0 ; i <= lenth - 1 ; i ++)
		a[i] = number[i] - '0';

	for( i = 0 ; i <= lenth - 1 ; i ++)
	{
		s = s * 10 + (a[i] % 13);
		shang[i] = s  / 13 ; 
		s = s % 13;
	}
	for( i = 0 ; i <= lenth - 1 ; i ++)
		if(shang[i] != 0 ) break;
    
	if( i >= lenth)
		my_printf("0");
    else
	{
		for( j = i ; j <= lenth - 1 ; j ++)
		my_printf("%d",shang[j]);
	}
		my_printf("\n");
		my_printf("%d\n",s);
	
		return 0;
}
		


  
	