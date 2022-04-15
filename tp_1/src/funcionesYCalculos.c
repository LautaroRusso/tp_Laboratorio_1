/*
 * funcionesYCalculos.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Churrit0_walker
 */

#include <stdio.h>
#include <stdlib.h>

/**
 *\brief funcion que pide numero float al usuario y lo valida
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void pedirFloatAUsuario(float* pNumero)
{
	int estado = 0;

	printf("Ingrese los kilometros: \n>");
	estado = scanf("%f", pNumero);

	while(estado !=  1 || *pNumero <= 0)
	{
		fflush(stdin);
		printf(" Error. Numero ingresado no es valido. Debe ser mayor a 0.\n Vuelva a intentarlo:\n>");
		estado = scanf("%f", pNumero);

	}
}
/**
 *\brief funcion que pide numero float al usuario y lo valida
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */

void pedirPrecioAUsuario(float* pNumero)
{
	int estado = 0;

	printf("Ingrese el precio: \n>");
	estado = scanf("%f", pNumero);

	while(estado !=  1 || *pNumero <= 0)
	{


		estado = scanf("%f", pNumero);
		fflush(stdin);
		printf(" Error. Numero ingresado no es valido. Debe ser mayor a 0\n Vuelva a intentarlo:\n>");
	}
}

/**
 *\brief funcion que suma 2 valores
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void operacionDescuento10Porciento(float numeroDos, float numeroTres, float* pResultado, float* pResultadoDos)
{
	float resultado;
	resultado = numeroDos * 10 / 100;
	*pResultado = numeroDos - resultado;

	resultado = 0;

	resultado = numeroTres * 10 / 100;
	*pResultadoDos = numeroTres - resultado;
}
/**
 *\brief
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void operacionInteres25Porciento(float numeroDos, float numeroTres, float* pResultado, float* pResultadoDos)
{
	float resultado;
		resultado = numeroDos * 25 / 100;
		*pResultado = numeroDos + resultado;

		resultado = 0;

		resultado = numeroTres * 25 / 100;
		*pResultadoDos = numeroTres + resultado;
}
/**
 *\brief
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return no retorna nada
 */
void operacionBitcoin(float numeroDos, float numeroTres, float* pResultado, float* pResultadoDos)
{
	*pResultado = numeroDos / 4606954.55;

	*pResultadoDos = numeroTres / 4606954.55;
}
/**
 *\brief
 *\param utlitza el 1er operando
 *\param utiliza el 2do operando
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return "retorno" el cual se utiliza como estado para ver que la division es posible
 */
void operacionPrecioUnitario(float numeroUno,float numeroDos, float numeroTres, float* pResultado,float* pResultadoDos)
{
	//int retorno;
	//retorno = -1;
	//if(numeroUno != 0)
	//{
		*pResultado = numeroDos / numeroUno;
		//retorno = 0;
	//}
	//retorno = -1;
	//if(numeroUno != 0)
	//	{
			*pResultadoDos = numeroTres / numeroUno;
			//retorno = 0;
		//}

}
/**
 *\brief
 *\param utlitza 1 numero (debe ser entero)
 *\param utiliza el puntero en el cual se guarda el resultado
 *\return "retorno" el cual se utiliza como estado para ver que el factorial es posible
 */
void operacionDiferenciaEntreDosNum(float numeroDos,float numeroTres, float* pResultado)
{
	float resultado;

	resultado = numeroDos-numeroTres;
	if (resultado < 0){
		*pResultado = resultado * -1;
	}
	else{
		*pResultado = resultado;
	}

}

