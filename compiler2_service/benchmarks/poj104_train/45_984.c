#define NUM_ITER 1053679

#include <header.h>

int main_bench()
{
 char zfc[2][51];
 int a,b,i;
	 for(i=0;i<2;i++){
		 my_scanf("%s",zfc[i]);
	 }
	 a=strlen(zfc[1]);
	 b=strlen(zfc[0]);
	 for(i=0;i<a;i++){
		 if(zfc[1][i]==zfc[0][0]&&zfc[1][i+1]==zfc[0][1]){
	        break;
		 }
	 }
	 my_printf("%d",i);
	  return 0;
}