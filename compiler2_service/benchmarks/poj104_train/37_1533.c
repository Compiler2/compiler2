#include <header.h>

int main_bench()
{
	int t;
	my_scanf("%d",&t);
	int i,j,k,len;
	char zfc[100000];
	for(i=0;i<t;i++){
		int NUM=0,num;
		
		my_scanf("%s",&zfc);
		len=strlen(zfc);		
		for(j=0;j<len;j++){
			num=0;
			for(k=0;k<len;k++){
				if(j==k) continue;
				else{
					if(zfc[j]!=zfc[k]) num++;
				}
				
			}
			
			if(num==len-1) {
				my_printf("%c\n",zfc[j]);
				
				break;
			}
			else {NUM++;
		}
		}
		if(NUM==len) my_printf("no");
	}
	my_scanf("%d",&t);
	return 0;
}