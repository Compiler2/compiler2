#define NUM_ITER 22250

#include <header.h>

    int main_bench(){
	int t,num,x;
	char zf[100020];
	my_scanf("%d",&t);
	for (int i=0;i<t;i++){
	my_scanf("%s",zf);
	x=0;
	for (int j=0;j<strlen(zf);j++){
	          num=0;
			  for (int t=0;t<strlen(zf);t++) {
			           if (zf[t]==zf[j]&&(t!=j)){
			           num++;
					   break;
			           }	
			  }
			  if (num==0){
			  my_printf("%c\n",zf[j]);
			  x=1;
			  break;	
			  }
	}
	if (x==0){
	my_printf("no\n");
	}
	}
return 0;
}