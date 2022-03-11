#include <stdio.h>
static int _gcd(int a, int b)
{
    if (b == 0)
        return a;
    return _gcd(b, a % b);
}
void reduceFraction(int x, int y)
{
    int d;
    d = _gcd(x, y);
    x = x / d;
    y = y / d;
    printf("%d/%d", x,y);
}


int main() {
    int Y, W;
    int score;
    int base = 6;
    scanf("%d %d", &Y, &W);
    score = Y >= W ? Y : W;
    reduceFraction(7 - score,base);
    return 0;
}
