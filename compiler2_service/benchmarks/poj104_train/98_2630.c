#define NUM_ITER 33998

#include <header.h>


int main_bench(){
	char word[42];
	int chars_left,word_length,word_num;

	my_scanf("%d",&word_num);
	my_scanf("%s",&word);
	my_printf("%s",word);
	word_num--;
	word_length=strlen(word);
	chars_left=80-word_length;
	while(word_num!=0){
		my_scanf("%s",&word);
		word_length=strlen(word);
		if(chars_left<word_length+1){
			my_printf("\n%s",word);
			chars_left=80-word_length;
		}
		else{
			my_printf(" %s",word);
			chars_left=chars_left-word_length-1;
		}
        word_num--;
	}
	return 0;
}
