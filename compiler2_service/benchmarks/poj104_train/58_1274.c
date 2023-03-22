#include <header.h>


int main_bench()
{
	int case_num;
	int i;
	int length;
	int result;
	char identifier[90];
	my_scanf("%d", &case_num);
	gets(identifier);
	while(case_num --) {
		gets(identifier);
		length = strlen(identifier);
		result = 1;
		if (length == 0 ||!(identifier[0] == '_' || isalpha((int)identifier[0])))
			result = 0;
		for (i = 1; i < length; i ++) {
			if (!(identifier[i] == '_' || isalpha((int)identifier[i]) || isdigit((int)identifier[i])))
				result = 0;
		}
		my_printf("%d\n", result);
	}
	return 0;
}
