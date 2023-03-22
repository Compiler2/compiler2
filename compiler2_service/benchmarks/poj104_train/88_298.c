#define NUM_ITER 450019

#include <header.h>



int main_bench()
{
	int i;
	char string[30];
	gets(string);
	for(i=0;i<30;i++){
		if(string[i]=='0'||string[i]=='1'||string[i]=='2'||string[i]=='3'||string[i]=='4'||string[i]=='5'||string[i]=='6'||string[i]=='7'||string[i]=='8'||string[i]=='9'){
	my_printf("%c",string[i]);}
	else{
	my_printf("\n");}}
return 0;}
