#define NUM_ITER 472475

#include <header.h>

int f1(char p);
char f2(int p);
int main_bench()
{ 
 long t=0;
 char s[11],x[11]={""};
 int a,b,i,k,n;
 my_scanf("%d %s %d",&a,s,&b);
 n=strlen(s);
 for (i=0;i<=n-1;i++)
   t=f1(s[i])+t*a;
 n=0;
 if (t==0) my_printf("0");
 while(t!=0)
 { k=t%b;
   t=(t-k)/b;
   x[n]=f2(k);
   n++;
 }
 for (i=n-1;i>=0;i--)
	 my_printf("%c",x[i]);
my_printf("\n");
}


int f1(char p)
{ int t;
 if ((p>=48)&&(p<=57)) t=p-48;
 else if ((p>=55)&&(p<=90)) t=p-55;
      else  t=p-87;
 return(t);
}


char f2(int p)
{ char t;
 if ((p>=0)&&(p<=9)) t=p+48;
 else  t=p+55;
return (t);
}