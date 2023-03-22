#define NUM_ITER 29854

#include <header.h>

int main_bench()
{
	int n;
	int i, j;
	int yesOrNo;
	char * p;
	
	my_scanf("%d",&n);
	getchar();
	for (i = 0; i < n; i++) {
		char a[81] = {'\0'};
		gets(a);
		p = a;
		yesOrNo = 0;
		if (*p == '_' || (*p >='A' && *p <= 'Z') || (*p>='a' && *p <= 'z')) {
			for (j = 0; j < strlen(a); j++) {
				if ((*p >='A' && *p <= 'Z') || (*p>='a' && *p <= 'z') || (*p >= '0' && *p <= '9') || *p == '_') {
					p++;
				}
				else {
					my_printf("0\n");
					yesOrNo = 1;
					break;
				}
			}
			if (yesOrNo == 0) {
				my_printf("1\n");
			}
		}
		else {
			my_printf("0\n");
		}
	}
	return 0;
}