#define NUM_ITER 1425174

#include <header.h>

int main_bench()
{
char s[1000];
char *pr[200];
int i,k, n = 0;
gets(s);

	pr[n++] = s;
	for (i=0,k=1; s[i]; i=i+k,k=1) {
	
		if (s[i] == ' '){
		s[i] = 0;
			for(;s[i+k] == ' ';k++){		
			}
		
        pr[n++] = s+i+k;
	
		}
	}
for (i=0; i<n; i++) {
if (i > 0) {
my_printf(",");
}

my_printf("%d", strlen(pr[i]));


}
return 0;
}