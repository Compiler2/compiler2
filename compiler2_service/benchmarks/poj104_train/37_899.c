#define NUM_ITER 1211

#include <header.h>


struct Word {
	int time;
	int sequence;
};

int main_bench()
{
	int n;
	int i, k;
	char temp;
	
	my_scanf("%d",&n);
	getchar();
	
	for (i = 0; i < n; i++) {
		int seqs = 27;
		int yesOrNo = 0;
		struct Word word[26] = {'\0',0,0};
		
		for (k = 0; k < 100001; k++) {
			temp = getchar();
			if (temp == 10) {
				break;
			}
			word[temp - 97].time++;
			word[temp - 97].sequence = k + 1;
		}
		
		for (k = 0; k < 26; k++) {
			if (word[k].time != 1) {
			}
			else if (word[k].time == 1){
				if (seqs > word[k].sequence) {
					seqs = word[k].sequence;
				}
			}
		}
		for (k = 0; k < 26; k++) {
			if (seqs == word[k].sequence) {
				my_printf("%c\n",(char)k+97);
				yesOrNo = 1;
				break;
			}
		}
		if (yesOrNo == 0) {
			my_printf("no");
		}
	}
	return 0;
}