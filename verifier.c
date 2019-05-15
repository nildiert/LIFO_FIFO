#include "lifo_fifo.h"
/**
 *verifier - Verify coincidence on a structure predefined
 *Return: If coincidence 0, else 1
 */
void verifier(char **reception)
{
/* Verificar las posiciones
El primer elemento del array [0] en una estructura, debe compararse
(Ver calc)
Si coincide, retornar 0.
Si no coincide, retornar 1.
Argumento dos [1]: Si existe, crear un nodo en la lista de la estructura (completar)
*/
	int sec;
	int oper;
	int exe;

	if (reception[0])
	{
		oper = get_verifier(reception[0]);

		if (reception[1])
		{
			sec = atoi(reception[1]);
			   /*addnode with sec*/
		}
		exe = (*f)(
	}

}
