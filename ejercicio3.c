#include <stdio.h>

int Maximo10(int n);

int main() {
  int longitudArray;
  printf("Escribe un número: ");
  scanf("%d", &longitudArray);

  if (Maximo10(longitudArray) != 0) {
    int numeros[longitudArray];
    for (size_t i = 0; i < longitudArray; i++) {
      numeros[i] = i + 1;
      printf("%d\n", numeros[i]);
    }
  } else {
    printf("No se puede crear un array de %d elementos\n", longitudArray);
  }
}

int Maximo10(int n) {
  if (n < 10 && n > 0) {
    return n;
  } else {
    printf("El número es menor que 10\n");
    return 0;
  }
}