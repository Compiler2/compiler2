#define NUM_ITER 47237

#include <header.h>

main_bench()
{
     int n,i,a[50];
     char str[50][32];
     my_scanf ("%d",&n);
     i=n;
     for (;i>0;i--)
     {
         my_scanf ("%s",str[n-i]);
         a[n-i]=strlen(str[n-i]);
         if (str[n-i][a[n-i]-1]=='r') {str[n-i][a[n-i]-2]='\0';}
         else if (str[n-i][a[n-i]-1]=='y') {str[n-i][a[n-i]-2]='\0';}
         else if (str[n-i][a[n-i]-1]=='g') {str[n-i][a[n-i]-3]='\0';}
     }
     for (i=0;i<n;i++)
     {
         my_printf ("%s\n",str[i]);
     }
} 