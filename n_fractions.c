#include <stdio.h>
struct frac{
    int numerator[90];
    int denominator[90];
};
int main()
{
    int n;
    printf("Enter number of fractions: ");
    scanf("%d", &n);
    int numer[n],denom[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter numerator of %d fraction", (i+1));
        scanf("%d", &numer[i]);
        printf("Enter denominator of %d fraction", (i+1));
        scanf("%d", &denom[i]);
    }
    redform(n, numer, denom);
    return 0;
}
void redform(int n, int numer[],int denom[])
{
    int fnum = 0;
    int fden = lcm(denom, n);
    for (int i = 0; i < n; i++) {
        fnum = fnum+ (numer[i]) * (fden/ denom[i]);
    }
    int GCD = commond(fnum,fden);
 
    fnum =fnum/ GCD;
    fden = fden/GCD;
    printf("The answer is %d/%d", fnum,fden);
}
int lcm(int array[], int n)
{
    int x = array[0];
    for (int i = 1; i < n; i++) {
        x = ((array[i] * x)/ commond(array[i], x));
    }
    return x;
}
int commond(int a, int b)
{
    if (b == 0) 
    {
        return a;
    }
 
    return commond(b, a % b);
}
