#include <stdio.h>

int main(){
    long long int soma=1;
    int i, n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("%d!= ", n);

    for (i=n;i>1;i--) {
      soma=soma*i;
    }
    printf("%lli\n", soma);
    return 0;
}
