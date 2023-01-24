#include<stdio.h>

int Move(int s, char c);

int main()
{
    char input[100];
    printf("Provide the input string: ");
    scanf("%s", input);

    int state = 1;
    int i = 0;
    char c = input[i];

    while(input[i] != '\0')
    {
        state = Move(state, c);

        if(state == -1)
            break;
        i++;
        c = input[i];
    }

    printf("Accepted by DFA: ");

    if(state == 3)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;
}


int Move(int s, char c)
{
    if(s == 1)
    {
        if(c == 'a')
            return 1;

        else if(c == 'b')
            return 2;

        else
            return -1;
    }
    else if(s == 2)
    {
        if(c == 'a')
            return 1;

        else if(c == 'b')
            return 3;

        else
            return -1;
    }
    else if(s == 3)
    {
        if(c == 'a')
            return 1;

        else if(c == 'b')
            return 3;

        else
            return -1;
    }
    else
        return -1;
}
