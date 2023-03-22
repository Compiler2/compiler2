#include <header.h>


int main_bench()
{
	int n = 0;
	char s[501] = {0};
	my_scanf("%d\n", &n);
	gets(s);
	int i = 0, j = 0, len = strlen(s);
	char word[501][7] = {0};
	int count[501] = {0};
	int top = 0;
	int maxc = 0;
	for ( i = 0; i <= len - n; i++ )
	{
		for ( j = i; j < i + n; j++ )
			word[top][j-i] = s[j];
		word[top][n] = '\0';
		for ( j = 0; j < top; j++ )
		{
			if ( strcmp(word[j],word[top]) == 0 )
			{
				count[j]++;
				if ( maxc < count[j] )
					maxc = count[j];
				break;
			}
		}
		if ( j == top )
		{
			count[top] = 1;
			if ( maxc == 0 )
				maxc = 1;
			top++;
		}
	}
	if (maxc <= 1)
	{
		my_printf("NO");
		return 0;
	}
	my_printf("%d", maxc);
	for (i = 0; i <= len-n; i++ )
	{
		if ( count[i] == maxc )
			my_printf("\n%s", word[i]);
	}
	return 0;
}