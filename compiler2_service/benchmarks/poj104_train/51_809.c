#include <header.h>

main_bench()
{
     short lens,i,j,k,n,top,pts,max;
     char s[501];
     char lib[500][500];
     short libc[500];
     

     my_scanf("%d",&n);
     my_scanf("%s",&s);
     for (lens=1;s[lens]!='\0';lens++);lens--;
     top=0;
     for (i=0;i<=499;i++) libc[i]=0;






     for (pts=0;pts<=lens-n+1;pts++)
     {
         for (i=0;i<=top;i++)
         {
             for (j=0;j<=n-1;j++)
             {

                 if (lib[i][j]!=s[pts+j])
                 {
                    break;
                 }
             }
             if (j==n) 
             {
                libc[i]++;

             }
         }
         if (j!=n)
         {
            top++;
            for (j=0;j<=n-1;j++) 
            {
                lib[top][j]=s[pts+j];
            }
            libc[i]++;            
         }
     }


     
     max=0;
     for (i=0;i<=top;i++) 
         if (libc[i]>max) max=libc[i];
if (max==1) my_printf("NO");
else
{
     my_printf("%d\n",max);
     for (i=0;i<=top;i++)
         if (libc[i]==max)
         {
            for (j=0;j<=n-1;j++)
                my_printf("%c",lib[i][j]);
            my_printf("\n");
         } 
}
}
                
             
