
#include<stdio.h> 
#include<string.h>
#include<ctype.h>

int main(void)
{
char s[100];
fgets(s, sizeof(s), stdin);
char* t = s;
t[0] = toupper(t[0]);
printf("%s\n", s);
printf("%s\n", t);
}