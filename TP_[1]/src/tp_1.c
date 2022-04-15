/*
 ============================================================================
 Name        : Tp1_Lab1.c
 Author      : Lautaro Russo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesYCalculos_UTN.h"

#define EXIT 0

int main(void) {

		setbuf(stdout,NULL);

		int opcion;
		int estadoKM;
		int estadoPrimerPrecio;
		int estadoSegundoPrecio;
		int estadoResultado;
		float numeroUno;
		float numeroDos;
		float numeroTres;
		float resultadoDiezPorcientoAero;
		float resultadoVeinticincoPorcientoAero;
		float resultadoBitcoinAero;
		float resultadoPrecioUnitarioAero;
		float resultadoDiezPorcientoLatam;
		float resultadoVeinticincoPorcientoLatam;
		float resultadoBitcoinLatam;
		float resultadoPrecioUnitarioLatam;
		float resultadoDifDePrecio;


		opcion = 0;
		estadoKM = -1;
		estadoPrimerPrecio = -1;
		estadoSegundoPrecio = -1;
		estadoResultado = -1;
		numeroUno = 0;
		numeroDos = 0;
		numeroTres = 0;

		while(opcion!=6)
		{
			printf("\n============================================================\n"
					"Menu:\n 1.INGRESAR KILÓMENTROS %.2f \n 2.INGRESAR PRECIO DE VUELOS AEROLINEAS $ %.2f, LATAM $ %.2f \n 3.CALCULAR TODOS LOS COSTOS \n "
					"4.INFORMAR RESULTADOS \n 5.CARGA FORZADA DE DATOS \n 6.SALIR\n============================================================\n>",numeroUno, numeroDos, numeroTres);
			scanf("%d",&opcion);

			switch(opcion)
			{
				case 1: //Ingresar km
					printf("\nOPCION 1\n");
					pedirFloatAUsuario(&numeroUno);
					estadoKM = 0;
					printf("\nPrimer numero tomado.\n");
					break;

				case 2: // Ingresar Precio de vuelos
					printf("\nOPCION 2\n");
					pedirPrecioAUsuario(&numeroDos);
					estadoPrimerPrecio = 0;
					pedirPrecioAUsuario(&numeroTres);
					estadoSegundoPrecio = 0;
					printf("\nPrecios de vuelos tomados.\n");
					break;

				case 3: //Calcular todas las operaciones

					if (estadoKM == 0){
					 if ( estadoSegundoPrecio == 0&& estadoPrimerPrecio == 0)
					 {
					 operacionDescuento10Porciento(numeroDos,numeroTres,&resultadoDiezPorcientoAero, &resultadoDiezPorcientoLatam);
					 operacionInteres25Porciento(numeroDos,numeroTres,&resultadoVeinticincoPorcientoAero, &resultadoVeinticincoPorcientoLatam);
					 operacionBitcoin(numeroDos,numeroTres,&resultadoBitcoinAero, &resultadoBitcoinLatam);
					 operacionPrecioUnitario(numeroUno,numeroDos,numeroTres, &resultadoPrecioUnitarioAero, &resultadoPrecioUnitarioLatam);
					 operacionDiferenciaEntreDosNum(numeroDos, numeroTres, &resultadoDifDePrecio);
					 }

					printf("\n Operaciones realizadas\n");
					estadoResultado = 0;
					}
					else
					{
						printf("\n ERROR, para realizar las operaciones debe ingresar los datos (kilometros, precio de aerolineas y precio de Latam, con la opcion 1 y 2 del menu\n En este caso:\n "); //valida si estan ingresado los 2 numero necesarios, sino te pide que vuelvas a hacerlo
						if (estadoKM == -1)
						{
							printf("\n  Olvido ingresar los kilometros");
						}
						else
						{
							printf("\n  Olvido ingresar alguno de los 2 precios");
						}

					}


					estadoKM = -1;
					estadoPrimerPrecio = -1;
					estadoSegundoPrecio = -1;

					break;

				case 4: //Informar resultados
					if (estadoResultado == 0)
					{
					printf("\nPrecio Aerolineas: %.2f\n",numeroDos);
					printf("a) Precio con tarjeta de debito: $ %.2f \n", resultadoDiezPorcientoAero);
					printf("b) Precio con tarjeta de credito: $ %.2f \n", resultadoVeinticincoPorcientoAero);
					printf("c) Precio pagando con Bitcoin:  %.4f BTC\n", resultadoBitcoinAero);
					printf("d) Mostrar precio unitario:$ %.2f\n", resultadoPrecioUnitarioAero);


					printf("\nPrecio LATAM: %.2f\n",numeroTres);
					printf("a) Precio con tarjeta de debito: $ %.2f \n", resultadoDiezPorcientoLatam);
					printf("b) Precio con tarjeta de credito: $ %.2f \n", resultadoVeinticincoPorcientoLatam);
					printf("c) Precio pagando con Bitcoin: $ %.4f BTC\n", resultadoBitcoinLatam);
					printf("d) Mostrar precio unitario:$ %.2f\n", resultadoPrecioUnitarioLatam);

					printf("\n\nLa diferencia de precio es: $ %.2f\n",resultadoDifDePrecio);


					}
					else
					{
						printf("\n ERROR, para mostrar los resultados de las operaciones debe primero realizar las mismas con la opcion 3");
					}
					estadoResultado = -1;

					break;

				case 5: //Carga Forzada

					estadoResultado = 0;

					numeroUno = 7090;
					numeroDos = 162965;
					numeroTres= 159339;

					operacionDescuento10Porciento(numeroDos,numeroTres,&resultadoDiezPorcientoAero, &resultadoDiezPorcientoLatam);
					operacionInteres25Porciento(numeroDos,numeroTres,&resultadoVeinticincoPorcientoAero, &resultadoVeinticincoPorcientoLatam);
					operacionBitcoin(numeroDos,numeroTres,&resultadoBitcoinAero, &resultadoBitcoinLatam);
					/*estadoDivision=*/operacionPrecioUnitario(numeroUno,numeroDos,numeroTres, &resultadoPrecioUnitarioAero, &resultadoPrecioUnitarioLatam);
					operacionDiferenciaEntreDosNum(numeroDos, numeroTres, &resultadoDifDePrecio);


					if (estadoResultado == 0)
					{
						printf("\nPrecio Aerolineas: %.2f\n",numeroDos);
						printf("a) Precio con tarjeta de debito: $ %.2f \n", resultadoDiezPorcientoAero);
						printf("b) Precio con tarjeta de credito: $ %.2f \n", resultadoVeinticincoPorcientoAero);
						printf("c) Precio pagando con Bitcoin: $ %.4f\n", resultadoBitcoinAero);
						printf("d) Mostrar precio unitario:$ %.2f\n", resultadoPrecioUnitarioAero);


						printf("\nPrecio LATAM: %.2f\n",numeroTres);
						printf("a) Precio con tarjeta de debito: $ %.2f \n", resultadoDiezPorcientoLatam);
						printf("b) Precio con tarjeta de credito: $ %.2f \n", resultadoVeinticincoPorcientoLatam);
						printf("c) Precio pagando con Bitcoin: $ %.4f\n", resultadoBitcoinLatam);
						printf("d) Mostrar precio unitario:$ %.2f\n", resultadoPrecioUnitarioLatam);

						printf("\n\nLa diferencia de precio es: $ %.2f\n",resultadoDifDePrecio);
					}



					break;

				case 6: //Salida del programa
					estadoKM = -1;
					estadoPrimerPrecio = -1;
					estadoSegundoPrecio = -1;
					estadoResultado = -1;
					printf("Programa Terminado");
					break;
			}
		}






	return 0;
}
