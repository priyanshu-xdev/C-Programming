#include <stdio.h>
void uptoN(int a, int n)
{
    if (a == n)
    {
        printf("%d", a);
        return;
    }
    printf("%d ", a);
    return uptoN(a + 1, n);
}
int main()
{
    uptoN(1, 5);
    return 0;
}