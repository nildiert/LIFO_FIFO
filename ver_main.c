#include "lifo_fifo.h"
/**
 *main - Verifier of the get_verif
 *Return: Always success
 */
int main(void)
{
	int v, w, x;
	char s[] = "push";
	char t[] = "nop";
	char u[] = "poll";

	v = get_verifier(s);
	w = get_verifier(t);
	x = get_verifier(u);

	printf("%d", v);
	printf("%d", w);
	printf("%d", x);

	return(0);
}
