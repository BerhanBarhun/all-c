#include <stdio.h>
int fucktorial(int n)
{
    int total = 1;

    for (int i = n; i > 1; i--)
    {
        total = i * total;
    }
    return total;
}

void outFuck(int input)
{
    printf("%d factorial is %d\n", input, fucktorial(input));
}
//

int main()
{
    int a;
    printf("sayı gir:");
    scanf("%d", &a);
    outFuck(a);

    return 0;
}