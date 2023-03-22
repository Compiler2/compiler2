#include <header.h>

int main_bench(){
	int all,name[20000],input[20000],i,p,count,judge;
	my_scanf("%d",&all);
	count=0;
	for(i=0;i<all;i++){name[i]=0;}
	for(i=0;i<all;i++){my_scanf("%d",&input[i]);}
	for(i=0;i<all;i++){
		judge=0;
		for(p=0;p<count;p++){if(name[p]==input[i]){judge=1;break;}}
		if(judge==1){continue;}
		name[count]=input[i];
		count++;
	}
	my_printf("%d",name[0]);
	for(i=1;i<count;i++){my_printf(" %d",name[i]);}

return 0;
}