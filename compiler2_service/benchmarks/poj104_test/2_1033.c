#include <header.h>



int main_bench()
{
	int m,i,j,len,max;
	int id[1000],b[26]={0};
	char a[100][27],name;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d %s",&id[i],a[i]);
		len=strlen(a[i]);
        for(j=0;j<len;j++){
			b[a[i][j]-'A']++;
		}
	}
	max=b[0];name='A';
	for(j=1;j<26;j++){
		if(b[j]>max){
		max=b[j];
		name=j+'A';
		}
	}
	my_printf("%c\n%d\n",name,max);
	for(i=0;i<m;i++){
		len=strlen(a[i]);
		for(j=0;j<len;j++){
		if(a[i][j]==name)
		{strcpy(a[i],"shuchu");
		break;}
		}
	}
	for(i=0;i<m;i++){
	if(strcmp(a[i],"shuchu")==0)
		my_printf("%d\n",id[i]);
	}


	return 0;
}

