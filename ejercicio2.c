#include <stdio.h>

int main()
{
  int opcionMenu = 1;
  while (opcionMenu != 0)
  {
    printf("Elige una opción: ");
    scanf("%d", &opcionMenu);
    switch (opcionMenu)
    {
    case 1:
      printf("Has elegido la opción 1.\n");
      break;
    case 2:
      printf("Has elegido la opción 2\n");
      break;
    case 3:
      printf("Has elegido la opción 2\n");
      break;
    case 0:
      printf("Has salido del programa\n");
      break;
    default:
      printf("Opción no válida\n");
    }
  }
}