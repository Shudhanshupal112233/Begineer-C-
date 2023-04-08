#include <stdio.h>
#include <math.h>
float fun(int a, int b, int c, int d, int e, float *av, float *sum, float *std);
int main()
{
    int a, b,  c,  d, e;
    float av, sum,  std;
    printf("enter the 5 integer:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    fun(a, b, c, d, e, &av, &sum, &std);
    printf("%f\n", av);
    printf("%f\n", sum);
    printf("%f\n", std);
    return 0;
}
float fun(int a, int b, int c, int d, int e, float *av, float *sum, float *std)
{
    *sum = (a + b + c + d + e);
    *av = *sum / 5.0;
    *std = sqrt((pow((a - *av), 2)) + (pow((b - *av), 2)) + (pow((c - *av), 2)) + (pow((d - *av), 2)) + (pow((e - *av), 2)));
}