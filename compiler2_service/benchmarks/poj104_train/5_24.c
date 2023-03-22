#define NUM_ITER 779944

#include <header.h>

int main_bench(){
	float a;
	int bar=0;
	my_scanf("%f",&a);
	char zfc[2][500];
	my_scanf("%s",zfc[0]);
	my_scanf("%s",zfc[1]);
	float count=0.0;
	if(strlen(zfc[0])!=strlen(zfc[1]))
		my_printf("error");
	else{
		float len=strlen(zfc[0]);
		for(int i=0;i<len;i++){
			if((zfc[0][i]!='A'&&zfc[0][i]!='T'&&zfc[0][i]!='C'&&zfc[0][i]!='G')||(zfc[1][i]!='A'&&zfc[1][i]!='T'&&zfc[1][i]!='C'&&zfc[1][i]!='G')){
				my_printf("error");
				bar=1;
				break;
			}
			else if(zfc[0][i]==zfc[1][i])
				count+=1.0;
		}
 	    if(count/len>=a&&bar==0)
			my_printf("yes");
		if(count/len<a&&bar==0)
			my_printf("no");
	}
    return 0;
}