#include <stdio.h>


void copiaString(char A[], char B[]) {
    int i;
    for (i = 0; A[i] != '\0' && i < 100; i++) {
        B[i] = A[i];
    }
    B[i] = '\0';
}

int main() {
    char A[100];
    char B[100];

    printf("Insira uma string: ");
    scanf("%s", A);

    copiaString(A, B);

    printf("String Copiada: %s\n", B);

    return 0;
}