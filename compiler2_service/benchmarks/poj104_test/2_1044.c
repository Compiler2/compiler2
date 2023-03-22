#define NUM_ITER 17865

#include <header.h>

struct book
{
       char number[20];
       char name[26];
}books[1000];

int main_bench() 
{
       int n,i,j;int count[26]={0};int temp,base,k=0;char author;int pd=0,N=0;
       my_scanf("%d",&n);
       for(i=0;i<n;i++)
       {
                       my_scanf("%s %s",&books[i].number,&books[i].name);
       }
       for(i=0;i<n;i++)
       {               
                       for(j=0;books[i].name[j]>='A'&&books[i].name[j]<='Z';j++)
                       {
                                 temp=books[i].name[j]-'A';
                                 count[temp]++;
                       }
       }
       base=count[0];
       for(i=0;i<26;i++)
       {
                        if(count[i]>base)
                        {base=count[i];k=i;}
       }
       author='A'+k;
       my_printf("%c\n",author);
        for(i=0;i<n;i++)
       {               pd=0;
                       for(j=0;books[i].name[j]>='A'&&books[i].name[j]<='Z';j++)
                       {
                             
                              if(books[i].name[j]==author)
                              pd=1;
                       }
                       if(pd==1)
                       N++;
       }
       my_printf("%d\n",N);
       for(i=0;i<n;i++)
       {               pd=0;
                       for(j=0;books[i].name[j]>='A'&&books[i].name[j]<='Z';j++)
                       {
                             
                              if(books[i].name[j]==author)
                              pd=1;
                       }
                       if(pd==1)
                       my_printf("%s\n",books[i].number);
       }
                                    
      
}
 
