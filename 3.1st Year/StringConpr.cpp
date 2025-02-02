#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char t[100];
    
    printf("s: ");
    scanf("%s", s);
    
    printf("t: ");
    scanf("%s", t);
    
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != t[i])
        {
            printf("Different\n");
            return 1;
        }
        
    }
    printf("Same\n");
    return 0;
}
