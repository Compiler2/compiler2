#define NUM_ITER 31711

#include <header.h>


int main_bench(){
	int n, i;
	char word[41];
	my_scanf("%d", &n);
	int curLen;
	curLen = 0;
	int afterLen;
	int wordLen;
	for (i=0; i<n; i++){
		my_scanf("%s", word);
		wordLen = strlen(word);
		if (curLen == 0){
			afterLen = curLen+wordLen;
			if (afterLen<=80){
				my_printf("%s", word);
				curLen = afterLen;
			}
			else{
				my_printf("\n%s", word);
				curLen = wordLen;
			}
		}
		else {
			afterLen = 1+curLen+wordLen;
			if (afterLen<=80){
				my_printf(" %s", word);
				curLen = afterLen;
			}
			else{
				my_printf("\n%s", word);
				curLen = wordLen;
			}
		}
	}
	my_printf("\n");
	return 0;
}
