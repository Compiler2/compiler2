#define NUM_ITER 14383

#include <header.h>

main_bench()
{
    int i;
    for(i=0;i<100;i++)
{
    char a[100]={'\0'},b[100]={'\0'};int c[100]={0},d[100]={0};
    int k,m,t=0,c1=0,c2=0,j1=0,j2=0,z=0,y=0,h=0;
    my_scanf("%s",a);
    int l=strlen(a);
    for(k=0;k<l;k++)
    {
      if(a[k]=='(') {c1=k;c[j1]=k;j1++;}
      else if(a[k]==')') {c2=k;d[j2]=k;j2++;}
           else b[k]=' ';
    }
    for(k=0;k<j2;k++)
    {
       for(m=0;m<j1;m++) if(d[k]>c[m]) {y++;if(c[m]!=-1){t++;h=m;}else z=m;} 
       if(t==0) {b[d[k]]='?';d[k]=-1;}
       else 
       {
         if(z!=y-1) {b[c[y-1]]=' ';c[y-1]=-1;b[d[k]]=' ';d[k]=-1;}
         else {b[c[h]]=' ';c[h]=-1;b[d[k]]=' ';d[k]=-1;}
       }
       t=0;y=0;
    }
    for(k=0;k<j1;k++)
    {if(c[k]!=-1) b[c[k]]='$';}
    for(k=0;k<j2;k++)
    {if(d[k]!=-1) b[d[k]]='?';}
    my_printf("%s\n",a);for(k=0;k<l;k++)my_printf("%c",b[k]);my_printf("\n");
}
  getchar();
  getchar();
}