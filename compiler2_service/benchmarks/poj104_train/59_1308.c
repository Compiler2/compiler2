#define NUM_ITER 19

#include <header.h>

int main_bench(){
	int all,i,p,day,o,count;
	char name[101][101],prename[101][101];
	count=0;
	my_scanf("%d",&all);
	for(i=1;i<=all;i++){my_scanf("\n");for(p=1;p<=all;p++){my_scanf("%c",&name[i][p]);}}
	my_scanf("%d",&day);
	for(o=1;o<day;o++){for(i=1;i<=all;i++){for(p=1;p<=all;p++){prename[i][p]=name[i][p];}}
	for(i=1;i<=all;i++){for(p=1;p<=all;p++){if(name[i][p]=='.'){if(prename[i][p+1]=='@'||prename[i][p-1]=='@'||prename[i+1][p]=='@'||prename[i-1][p]=='@'){name[i][p]='@';}}}}}
	for(i=1;i<=all;i++){for(p=1;p<=all;p++){if(name[i][p]=='@'){count++;}}}
	my_printf("%d",count);
return 0;
}