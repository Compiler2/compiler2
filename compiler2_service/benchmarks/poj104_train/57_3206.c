#include <header.h>

int main_bench(){
	int n,i,j=0,l;
	char zfc[33];
	my_scanf("%d",&n);
for(j=0;j<n;j++)
  {
    my_scanf("%s",zfc);
	l=strlen(zfc);
    i=l-2;
	if(zfc[i]=='e'&&zfc[i+1]=='r')
		zfc[i]='\0';
	else if(zfc[i]=='l'&&zfc[i+1]=='y')
		zfc[i]='\0';
    else if(zfc[i]=='n'&&zfc[i+1]=='g'&&zfc[i-1]=='i')
		zfc[i-1]='\0';

   my_printf("%s\n",zfc);

  }
  

return 0;
}