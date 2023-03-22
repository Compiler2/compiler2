#define NUM_ITER 1539063

#include <header.h>

int main_bench()
{	int n,len,i,j,count;
	int a=1,b=0;
	char *p;
	char zfc[81],tem[2];
	gets(tem);
	n=atoi(tem);
	for(i=0;i<n;i++){
		count=0;
		gets(zfc);
		len=strlen(zfc);
		p=zfc;
		if(*p=='_'||(*p>='A'&&*p<='z')){
			for(p=zfc+1;p<zfc+len;p++){
				if(*p!='_'&&(*p<'0'||(*p>'9'&&*p<'A')||*p>'z')){
					my_printf("%d\n",b);
					break;
				}
				count++;
			}
			if(count==len-1)
				my_printf("%d\n",a);
		}
		else
			my_printf("%d\n",b);
	}
	return 0;
}
