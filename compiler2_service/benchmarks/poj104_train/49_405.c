#define NUM_ITER 1250092

#include <header.h>

int i , l ;
char str[501];
void f(int number,int length);
int main_bench()
{
	int lenth;
	gets(str);
	lenth = strlen(str);
	for( l = 2 ; l <=  lenth - 1 ; l++)
		for( i = 0 ; i <= lenth - 2 ; i ++)
		{
			if( i + l - 1 <= lenth)
				f(i , l);
		}
	return 0;
}
void f(int number,int length)
{
	int j ;
	if(length <= 0 )
	{
		for(j = i ; j <= i + l - 1 ; j ++)
			my_printf("%c", str[j])  ;
			my_printf("\n");
	}
	else if( str[number] == str[number + length - 1] )
		f(number + 1 , length - 2);
	return;
}	

		
		
	