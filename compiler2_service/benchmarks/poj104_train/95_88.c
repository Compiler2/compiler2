#define NUM_ITER 262159

#include <header.h>


main_bench(){
	char str1[80], str2[80];
	int i;
	gets(str1);
	gets(str2);
	for(i=0; i<80; i++){
		if(str1[i]>96) str1[i]-=32;
		else str1[i]-=0;
		if(str2[i]>96) str2[i]-=32;
		else str2[i]-=0;
	}
	if(strcmp(str1, str2)<0) my_printf("<");
	else if(strcmp(str1, str2)>0) my_printf(">");
	else my_printf("=");
}