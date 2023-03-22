#include <header.h>

int main_bench()
{
 char a[80],b[80],c,k;
 int la,lb,i,j;
 my_scanf("%s",a);
 my_scanf("%s",b);
 la=strlen(a);
 lb=strlen(b);
 if(la!=lb) my_printf("NO");
 else if(la=lb)
 { 
   for(i=0;i<la;i++)
   { 
     for(j=i;j<la;j++)
	 {
       if(a[j]<a[i])
	   {c=a[i];a[i]=a[j];a[j]=c;}
	 }
   }
   for(i=0;i<la;i++)
   { 
     for(j=i;j<la;j++)
	 {
       if(b[j]<b[i])
	   {c=b[i];b[i]=b[j];b[j]=c;}
	 }
   }
 for(i=0;i<la;i++)
 {
  if(a[i]=b[i]) k=k+1;
 }
 if(k=la) my_printf("YES");
 else if(k!=la) my_printf("NO");
}
}