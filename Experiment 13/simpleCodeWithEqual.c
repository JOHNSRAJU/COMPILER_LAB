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
    for (i = 0; i < opCount; i++)
    {
        printf("%c = %c %c %c\n", (90 - i), str[(oper[i].pos) - 1], oper[i].op, str[(oper[i].pos) + 1]);
        
        for (j = 0; str[j] != '\0'; j++){
        	if (str[j] == str[(oper[i].pos) - 1] || str[j] == str[(oper[i].pos) + 1]){
			str[j]=(char)90 - i;
        	}
    	}
    }
    for (j = 0; str[j] != '\0'; j++){
        if (str[j] == '=')
        {
            printf("%c = %c\n", str[0], (char)(90 - i + 1));
        }
    }
    return 0;
}
