#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, r, n, an, soma;
    scanf("%i %i %i", &a1, &r, &n);
    
    an = a1 + (n-1)*r;
    soma = ((a1 + an)*n)/2;
    
    printf("%i\n", soma);

    return 0;
}