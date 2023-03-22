#include <header.h>

int main_bench()
{
	char zfc[300*50];
	int wl[300];
	int w=0;
	int i,j;
	gets(zfc);
	for(i=0;zfc[i]!=0;i++){
		if(zfc[i]!=' '){
			for(j=i+1;zfc[j]!=0&&zfc[j]!=' ';j++);
			wl[w]=j-i;
			w++;
			if(zfc[j]==0)
				break;
			else
				i=j;
		}
	}
	my_printf("%d",wl[0]);
	for(i=1;i<w;i++)
		my_printf(",%d",wl[i]);
	return 0;
}