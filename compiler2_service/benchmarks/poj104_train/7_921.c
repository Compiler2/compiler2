#define NUM_ITER 731352

#include <header.h>

int main_bench(){
	char a[30000],b[100],c[100];
	gets(a);
	int lenth,y=1,j,i,m,num,tag=0;
	lenth=strlen(a);
	gets(b);
	m=strlen(b);
	gets(c);
	for(i=0;i<lenth;i+=y){
		y=1;
		num=0;
		if(tag==0){
		for(j=0;j<m;j++){
			if(a[i+j]==b[0+j]){
				num++;
			}
		}
		if(num==m){
			my_printf("%s",c);
			y=m;
			tag=1;
		}
		else{
			my_printf("%c",a[i]);
		}
		}
		else
		{
			my_printf("%c",a[i]);
		}
	}
	return 0;
}
