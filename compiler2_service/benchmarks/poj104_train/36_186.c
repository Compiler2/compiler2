#include <header.h>

int main_bench()
{
 char a[20],b[20];int i,j,c,d;
 my_scanf("%s%s",a,b);
 c=strlen(a);d=strlen(b);
 if(c!=d)my_printf("NO");
 else {
for(i=0;a[i]!=0;i++)
 {for(j=0;b[j]!=0;j++)
	   if(a[i]==b[j])
		 { b[j]='0';break;}
	   if(b[j]==0)
	   {my_printf("NO");break;break;}
 }
 my_printf("YES");}
}

 	 

