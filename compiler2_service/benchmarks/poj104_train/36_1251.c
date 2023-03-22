#include <header.h>


int main_bench() {
	char a[1000];
	char b[1000];
	my_scanf("%s%s", a, b);
	int flag[200];
	memset(flag, 0, sizeof(flag));
	int lenA = strlen(a);
	int lenB = strlen(b);
	for(int i = 0; i < lenA; i++) {
		flag[a[i]]++;
	}
	if(lenA != lenB) {
		my_printf("NO");
		return 0;
	}
	for(int i = 0; i < lenB; i++) {
		flag[b[i]]--;
		if(flag[b[i]] < 0) {
			my_printf("NO");
			return 0;
		}
	}
	my_printf("YES");
	return 0;
}