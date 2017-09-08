#include <stdio.h>
int main()
{
    char c;
    printf("Enter a char: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alpha.",c);
    else
        printf("%c is not an alph.",c);

    return 0;
}
