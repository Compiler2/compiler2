#define NUM_ITER 1104672

#include <header.h>

int main_bench()
{
	int i=0, b[26]={0}, sum=0, j;
	char s[300];
    my_scanf ("%s", s);
	while(s[i]) {
		j=s[i]-'a';
		if(j>=0&&j<=25) {
			b[j]++;
		sum=1;
		}
		i++;
	}
	for (j=0; j<26; j++) {
		if (b[j]!=0) my_printf("%c=%d\n", (j+'a'),b[j]);
	}
	if (sum==0) my_printf("No");
	return 0;
}
