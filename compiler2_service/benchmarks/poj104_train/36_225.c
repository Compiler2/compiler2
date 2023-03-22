#define NUM_ITER 916295

#include <header.h>

int main_bench()
{
	char str[100],str1[100];
	my_scanf("%s %s",str,str1);
	int i,j,len = strlen(str),len1 = strlen(str1);
	if(len != len1)
		my_printf("NO\n");
	else{
		for(i = 0;i < len - 1;i++){
			for(j = i + 1;j < len;j++){
				if(str[i] > str[j]){
					char temp = str[i];
					str[i] = str[j];
					str[j] = temp;
				}
			}
		}
		for(i = 0;i < len1 - 1;i++){
			for(j = i + 1;j < len1;j++){
				if(str1[i] > str1[j]){
					char temp = str1[i];
					str1[i] = str1[j];
					str1[j] = temp;
				}
			}
		}
		if(strcmp(str,str1) == 0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
	}
	return 0;
}