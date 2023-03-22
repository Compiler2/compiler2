#include <header.h>

int main_bench()
{
	int A,B,C;
	for(int a = 1;a <= 3;a ++)
		for(int b = 1;b <= 3;b ++)
			for(int c = 1;c <= 3;c ++){
				A = (a < b) + (a == c);
				B = (a > b) + (a > c);
				C = (c > b) + (b > a);
				if(a < b && b < c && A > B && B > C) my_printf("ABC\n");
				if(a < c && c < b && A > C && C > B) my_printf("ACB\n");
				if(b < a && a < c && B > A && A > C) my_printf("BAC\n");
				if(b < c && c < a && B > C && C > A) my_printf("BCA\n");
				if(c < a && a < b && C > A && A > B) my_printf("CAB\n");
				if(c < b && b < a && C > B && B > A) my_printf("CBA\n");
			}
	return 0;
}