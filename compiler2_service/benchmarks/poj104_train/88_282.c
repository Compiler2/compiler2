#define NUM_ITER 1222826

#include <header.h>


int main_bench()
{
    char zfc[30];
    int i,len;
    gets(zfc);
    len=strlen(zfc);
    for(i=0;i<len;i++){
		if(zfc[i]=='0'||zfc[i]=='1'||zfc[i]=='2'||zfc[i]=='3'||zfc[i]=='4'||zfc[i]=='5'||zfc[i]=='6'||zfc[i]=='7'||zfc[i]=='8'||zfc[i]=='9'){
            if(zfc[i+1]=='0'||zfc[i+1]=='1'||zfc[i+1]=='2'||zfc[i+1]=='3'||zfc[i+1]=='4'||zfc[i+1]=='5'||zfc[i+1]=='6'||zfc[i+1]=='7'||zfc[i+1]=='8'||zfc[i+1]=='9'){
				my_printf("%c",zfc[i]);
            }else{
                my_printf("%c\n",zfc[i]);
            }
        }
    }
    return 0;
}