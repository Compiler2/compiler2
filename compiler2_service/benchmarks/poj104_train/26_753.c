#define NUM_ITER 1321252

#include <header.h>


int main_bench()
{
char string[101];
gets(string);
int i,word=1;
for(i=0;i<strlen(string);i++){
	if(string[i]!=' ') word=1;
if(word==1) my_printf("%c",string[i]);
if(string[i]==' ') 
	word=0;}

	return 0;
}