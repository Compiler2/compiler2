#include <header.h>

int main_bench()
{
	int a,l[100],i;
    char s[100][10];
    my_scanf("%d",&a);
	for(i=0;i<a;i++){
		my_scanf("%s",s[i]);
        l[i]=strlen(s[i]);
 }
for(i=0;i<a;i++){
	if(s[i][l[i]-1]=='g'){
       for(int k=0;k<l[i]-3;k++){
			my_printf("%c",s[i][k]);
			}
 }
	else 
	{for(int k=0;k<l[i]-2;k++){
			my_printf("%c",s[i][k]);
	}
         
	}
 my_printf("\n");

}
	return 0;
}


