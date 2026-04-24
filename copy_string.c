#include<stdio.h>
#include<string.h>

int main()
{
    char a[101], b[101];

    scanf("%s %s", &a,&b);
    // logic start for shortcut
    int length=strlen(b);

    for(int i=0;i<=length;i++){
        a[i]=b[i];
    }
    // end logic for shortcut
    
    // strcpy(a,b); shortcut 

    printf("%s %s",a,b);

    return 0;
}