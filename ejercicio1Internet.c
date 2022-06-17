#include <stdio.h>

int main()
{
  //! Declaración de variables
  //* Definición de Vehículos
  int cantidadTurismos, cantidadTodoterrenos;

  //! Inicialización de Variables
  printf("Ingrese la cantidad de turismos: ");
  scanf("%d", &cantidadTurismos);

  printf("Ingrese la cantidad de todoterrenos: ");
  scanf("%d", &cantidadTodoterrenos);
  /* cantidadTurismos = 32;
  cantidadTodoterrenos = 11; */

  //* Definición de capacidad de vehículos
  int capacidadTurismo, capacidadTodoterreno;

  //! Inicialización de capacidad de vehículos
  printf("Ingrese la capacidad de turismos: ");
  scanf("%d", &capacidadTurismo);

  printf("Ingrese la capacidad de todoterrenos: ");
  scanf("%d", &capacidadTodoterreno);

  /* capacidadTurismo = 40;
  capacidadTodoterreno = 65; */

  //? Cálculo
  int necesidadesCombustible = (cantidadTurismos * capacidadTurismo) + (cantidadTodoterrenos * capacidadTodoterreno);

  printf("Necesitamos %d Litros para llenar todos los coches.", necesidadesCombustible);
}