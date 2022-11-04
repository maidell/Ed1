
#include <stdio.h>
#include <stdlib.h>

#define QUANTIDADE 2
#define TAM_MAXIMO 256

int main () {
  char **nomes = NULL;
  int i = 0, j = 0;

  nomes = (char**)malloc(sizeof(char*));
  for (i = 0; i < QUANTIDADE; i++) {
    nomes[i] = (char*)malloc(sizeof(char) * TAM_MAXIMO);
    if(i == 0){
        printf("Digite o primeiro nome completo:");
        fgets(nomes[i], TAM_MAXIMO, stdin);
    }
    else {
        printf("Digite o segundo nome completo:");
        fgets(nomes[i], TAM_MAXIMO, stdin);
    }
  }
  for (i = 0; i < QUANTIDADE; i++) {
    for (j = 0; nomes[i][j] != '\0' && nomes[i][j] != '\n'; j++)
      printf("%d ", (int)nomes[i][j]);
    printf("\n");
  }
  return 0;
}