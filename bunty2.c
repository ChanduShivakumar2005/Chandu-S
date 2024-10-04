#include<stdio.h>
int mystrlen(char s[])
{
    int i;
    for(i=0; s[i];i++);
    return i;
}
void mystrcat(char s1[],char s2[])
{
int m,n;
m =mystrlen(s1);
n =mystrlen(s2);
for(int i=0; i<n; i++)
s1[m++]=s2[i];
}
int mystrcmp(char s1[],char s2[])
{
int m,n;
m=mystrlen(s1);
n=mystrlen(s2);
if(m!=n)
return 1;
for(int i=0; i<=n; i++)
if(s1[i]!=s2[i])
return 1;
return 0;
}
void main()
{
char s1[100],s2[100];
int m,n;
puts("Enter s1:");
gets(s1);
puts("Enter s2:");
gets(s2);
m=mystrlen(s1);
n=mystrlen(s2);
printf("strlen:%d,%d\n",m,n);
if (mystrcmp(s1,s2)==0)
printf("strcmp:same\n");
else printf("strcmp:different\n");
mystrcat(s1,s2);
printf("strcat:%s\n",s1);
}
