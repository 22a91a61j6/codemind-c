#include<stdio.h>
 int main()
{
 int x,y;
 scanf("%d%d",&x,&y);
 //t=(x*1)+(y*2);
 if(x==0 && y%2==0)
 printf("YES");
 else if(x!=0 && x%2==0)
 printf("YES"); 
else printf("NO");
}