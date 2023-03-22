#define NUM_ITER 1101822

#include <header.h>


int main_bench()
{
	char min[510];
	char max[510];
	char all[510];
	char cur[510];
	int len, i, j;
	int minlen = 510, maxlen = 0;

	gets(all);

	len = strlen(all);

	j = 0;
	for (i = 0; i < len; ++i) {
		if (all[i] == ' ' || all[i] == '\0' || i == len-1) {
			if (i == len-1) {
				cur[j++] = all[i];
			}
			cur[j] = '\0';

			if (minlen > strlen(cur)) {
				minlen = strlen(cur);
				strcpy(min, cur);
			}
			if (maxlen < strlen(cur)) {
				maxlen = strlen(cur);
				strcpy(max, cur);
			}

			if (all[i] == '\0' || i == len)
				break;

			j = 0;
			continue;
		}

		cur[j++] = all[i];
	}
		
	my_printf("%s\n%s\n", max, min);

	return 0;
}