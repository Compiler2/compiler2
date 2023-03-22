#include <header.h>




int main_bench()
{
	int t,i,m,n,l,count;
	char a[100000];
	char temp[100000];
	my_scanf("%d",&t);
	getchar();
	for(i=1;i<=t;i++){
		gets(a);
		l=strlen(a);
		count=0;
		for(m=0;m<l;m++){
			temp[m]=0;
			for(n=0;n<l;n++){
				if(*(a+m)==*(a+n)){
					temp[m]++;
				}
			}
			if(temp[m]==1){
				my_printf("%c\n",*(a+m));
				break;
			}else{
				count++;
			}
		}
		if(count==l){
			my_printf("no\n");
		}
		
	}
	return 0;
}

	






	
