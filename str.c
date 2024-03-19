#include<stdio.h>

int stringlen(char str[]);
void stringmatch(char dest[], char src[]);
void main()
{
int i=0,j,k=0,flag=0;
char str[100], pat[20], rep[20], res[100];
printf("Enter Main String\n");
gets(str);
printf("Enter Pattern String\n");
gets(pat);
printf("Enter Replace String\n");
gets(rep);
while(str[i] != '\0')
{
j=0;
while((str[i+j] == pat[j]) && (pat[j] != '\0'))
{
j++;
}
if(pat[j] == '\0')
{
flag = 1;
res[k] = '\0';
stringmatch(res,rep);
k = k + stringlen(rep);
i = i + (j -1);
}
else
{
res[k++] = str[i];
}
i++;
}
res[k] = '\0';
printf("The result is\n");
if(flag)
puts(res);
else
printf("Pattern not found\n");
}
int stringlen(char str[])
{
int len=0;
while(str[len] != '\0')
{
len++;
}
return len;
}
void stringmatch(char dest[], char src[])
{
int i=0, j=0;
while(dest[i] != '\0')
{
i++;
}
while(src[j] != '\0')
{
dest[i+j] = src[j];
j++;
}
}
