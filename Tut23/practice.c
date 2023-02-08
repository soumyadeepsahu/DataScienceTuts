
#include <stdio.h>

int binomial(int n, int m){
    if (m == 0 || m==n)
        return 1;
    return (binomial((n-1),(m-1)) + binomial((n-1),(m-1)));
    //return ((n/(m*(n-m)))*binomial((n-1),(m-1)));    
}

int main()
{
    printf("value:", binomial(5,2));
    

    return 0;
}
