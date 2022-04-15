/*
 * funcionesYCalculos_UTN.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Churrit0_walker
 */

#ifndef FUNCIONESYCALCULOS_UTN_H_
#define FUNCIONESYCALCULOS_UTN_H_
#include <stdio.h>
#include <stdlib.h>

void pedirFloatAUsuario(float* pNumero);
void pedirPrecioAUsuario(float* num);
void operacionDescuento10Porciento(float numeroDos, float numeroTres, float* pResultado, float* pResultadoDos);
void operacionInteres25Porciento(float numeroDos, float numeroTres, float* pResultado, float* pResultadoDos);
void operacionBitcoin(float numeroDos, float numerotres, float* pResultado, float* pResultadoDos);
int operacionPrecioUnitario(float numeroUno, float numeroDos,float numeroTres, float* pResultado, float* pResultadoDos);
int operacionDiferenciaEntreDosNum(float numeroDos,float numeroTres, float* pResultado);





#endif /* FUNCIONESYCALCULOS_UTN_H_ */
