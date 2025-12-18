#include <stdio.h>
#include <string.h>

int main() {

    char st[300], st1[300], st2[300];
    int i = 0, j = 0, k = 0;

    printf("Digite uma palavra:\n");
    scanf("%s", st);

    printf("Digite uma palavra:\n");
    scanf("%s", st1);
    
    printf("Digite uma palavra:\n");
    scanf("%s", st2);

    while (st[i] != '\0') {
        printf(st[i] == ' ' ? "\n" : "%c", st[i]);
        i++;
    }

    printf("\n");

    while (st1[j] != '\0') {
        printf(st1[j] == ' ' ? "\n" : "%c", st1[j]);
        j++;
    }

    printf("\n");

    while (st2[k] != '\0') {
        printf(st2[k] == ' ' ? "\n" : "%c", st2[k]);
        k++;
    }
    printf("\n~Manuela Vieira Dalsoto ~Turma: 4223!!!\n");
    return 0;
}
