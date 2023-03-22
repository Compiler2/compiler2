#define NUM_ITER 1205454

#include <header.h>

int main_bench()
{
    int j;
    char s[2][51];
    my_scanf("%s",s[0]);
    my_scanf("%s",s[1]);
    for(j=0;s[1][j+1]!='\0';j++)
	{
            if((s[0][0]==s[1][j])&&(s[0][1]==s[1][j+1]))
			{
                 my_printf("%d",j);
                 return 0;
			}
	}
    return 0;
}