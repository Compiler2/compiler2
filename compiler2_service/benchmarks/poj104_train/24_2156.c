#define NUM_ITER 843623

#include <header.h>

int main_bench()
{
	int i,j,k,m,n,p,q;
	char ch[40],sh[40];
	char lolo[3000]="\0";
	char alei[40]="\0";
	gets(lolo);
	k=0;m=41;
	for(i=0;lolo[i]!='\0';i++)
	{   
		if(lolo[i]==' '||lolo[i]==',') i++;
		for(j=0;lolo[i]!=' '&&lolo[i]!=','&&lolo[i]!='\0';i++,j++)
		{
            alei[j]=lolo[i];
		}
		alei[j]='\0';
		if(j>k) {strcpy(ch,alei);k=j;}
		if(j<m) {strcpy(sh,alei);m=j;}
	}
	my_printf("%s\n",ch);
	my_printf("%s\n",sh);

}