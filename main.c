#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int quantidadeVogais(char *nome);

int main()
{
    char *nome=(char*) (malloc(sizeof(char) * MAX));
    printf("Achar Vogal");
    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    printf("\n Esse nome %d vogais.", quantidadeVogais(nome));

    return 0;
}

int quantidadeVogais(char *nome)
{
    int vogal = 0;
    int i = 0;

    while(*(nome +i) != '\0'){
        if(*(nome+i) == 'a' || *(nome+i) == 'e' || *(nome+i) == 'i' || *(nome+i) == 'o' || *(nome+i) == 'u'){
            vogal++;
        }
        i++;
    }
    return vogal;
}
