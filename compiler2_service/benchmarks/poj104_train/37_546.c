#define NUM_ITER 24012

#include <header.h>

int main_bench(){
	int t,i,j,len,num,tag;
	char k;
	char str[100000];
	my_scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		num=1;
		tag=1;
		gets(str);
		len=strlen(str);
		for(j=0;j<len;j++){
			for(k=j+1;k<len;k++){
				if(str[j]==str[k]&&str[j]>='a'&&str[j]<='z'){
					num=num+1;
					str[k]='A';
				}
			}
			if(num==1&&str[j]>='a'&&str[j]<='z'){
				my_printf("%c\n",str[j]);
				tag=0;
				break;
			}
			else{
				num=1;
			}
		}
		if(tag==1) my_printf("no\n");
	}
	return 0;
}