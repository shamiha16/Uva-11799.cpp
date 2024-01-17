#include<stdio.h>
int main()
{
    int t,N,s,i,max;
    scanf("%d",&t);



for ( i=1;i<=t;i++)
   { max=1;

   scanf("%d",&N);
    while(N--)
       {

    scanf("%d",&s);
    if (s>max)
        max=s;}
        printf("Case %d: %d\n",i,max);}

     return 0;
}
