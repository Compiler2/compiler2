#include <header.h>

int rec[1000];
int n;
int i,res,max;
char ch;
main_bench()
{
	n=1;
	while(1)
	{
		my_scanf("%c",&ch);
		if (ch==',') {n++; continue;}
		if (ch=='\n') break;
		rec[n]=rec[n]*10+ch-'0';
	}
	max=0;
	for(i=1;i<=n;i++) if (rec[i]>max) max=rec[i];
	res=0;
	for(i=1;i<=n;i++) if ((rec[i]>res)&&(rec[i]<max)) res=rec[i];
	if ((res==0)||(res==max)) my_printf("No");
	else my_printf("%d\n",res);
}