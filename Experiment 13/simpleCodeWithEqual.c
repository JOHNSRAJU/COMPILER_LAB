#include <stdio.h>
struct exp
{
    int pos;
    char op;
} oper[50];
int main(){
    char str[50], a[50];
    int i, opCount = 0, j;
    printf("Enter the expression: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == '*' || str[i] == '/')
        {
            oper[opCount].pos = i;
            oper[opCount++].op = str[i];
        }
    }
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == '+' || str[i] == '-')
        {
            oper[opCount].pos = i;
            oper[opCount++].op = str[i];
        }
    }
    for (i = 0; i < opCount; i++){
        printf("%c = ", (90 - i));
        if (str[(oper[i].pos) - 1] == '$'){
            printf("%c ", (90 - i+1));
        }
        else{
            printf("%c ", str[(oper[i].pos) - 1]);
        }
        printf("%c ", oper[i].op);
        if (str[(oper[i].pos) + 1] == '$'){
            printf("%c \n", (90 - i+1));
        }
        else{
            printf("%c \n", str[(oper[i].pos) + 1]);
        }
        str[(oper[i].pos) - 1] = '$';
        str[(oper[i].pos) + 1] = '$';
    }

    for (j = 0; str[j] != '\0'; j++){
        if (str[j] == '=')
        {
            printf("%c = %c\n", str[0], (char)(90 - i - 1));
        }
    }
    return 0;
}
