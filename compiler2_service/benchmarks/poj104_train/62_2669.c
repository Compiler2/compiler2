#define NUM_ITER 1300226

#include <header.h>

int main_bench()
{
 	char zfc[1000],s[1000];
 	int length,i,num=0;
 	gets(zfc);
 	length=strlen(zfc);
 	for(i=0;i<length;i++){
		if(i==0){
			s[num]=zfc[i];
			num++;
			}
		else{
			if(zfc[i]!=' '||(zfc[i]==' '&&zfc[i-1]!=' '))
			{
				s[num]=zfc[i];
				num++;
				}
			}
		}
	for(i=0;i<num;i++){
		my_printf("%c",s[i]);
		}
    return 0;
}