#include <header.h>




int main_bench()
{
	int n,i,l,count;
	char sz[81];
	my_scanf("%d",&n);
	getchar();
	char *p;
	for(i=1;i<=n;i++){
		gets(sz);
		l=strlen(sz);
		p=sz;
		count=0;
		if((*p>='a' && *p<='z' )|| (*p>='A' && *p<='Z') || *p=='_'){
			for(p=sz+1;p<(sz+l);p++){
				if((*p>='a' && *p<='z') || (*p>='A' && *p<='Z') || *p=='_'||(*p>='0'&& *p<='9')){
					
				}else{
					count++;
				}
			}
		}else{
			count++;
		}
		if(count==0){
			my_printf("1\n");
		}else{
			my_printf("0\n");
		}
	}
		return 0;
}