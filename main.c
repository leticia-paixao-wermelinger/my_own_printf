
#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>
/*
int main()
{
	int				my_ret; // Retorno da minha função
	int				or_ret; // Retorno da função original

	my_printf("\nMinha printf:\n");
//	my_ret = ft_printf(" NULL %s NULL ", NULL);
//	my_ret = ft_printf(" %p %p ", 0, 0);
	my_ret = my_printf(" %d ", -10751);
//	my_ret = ft_printf(" %u ", LONG_MAX);
	printf("Retorno da minha função: %i\n\n", my_ret);
	printf("\nPrintf original:\n");
	or_ret = printf(" %d ", -10751);
	printf("Retorno da função original: %i\n\n", or_ret);
	return (0);
}*/


int	main()
{
	char			character = 'B'; // %c
	char			string[] = "string"; // %s
	char			*ptr; // %p
	int				int_base10_d = 2; // %d
	int				integer = 3; // %i
	unsigned int	u_int = 550; // %u
	int				x; // %x
	int				X; // %X
	int				my_ret; // Retorno da minha função
	int				or_ret; // Retorno da função original

	ptr = &string[0];
	x = 42;
	X = 42;
	my_printf("\nMinha printf:\n");
	my_ret = my_printf("- Character: %c;\n- String: %s;\n- Ponteiro: %p;\n- Inteiro na base 10 (d): %d;\n- Inteiro (i): %i;\n- Unsigned int: %u;\n- x: %x; \n- X: %X; \n- % %: %%;\n", character,	string, ptr, int_base10_d, integer, u_int, x, X);
	printf("Retorno da minha função: %i\n\n", my_ret);
	printf("\nPrintf original:\n");
	or_ret = printf("- Character: %c;\n- String: %s;\n- Ponteiro: %p;\n- Inteiro na base 10 (d): %d;\n- Inteiro (i): %i;\n- Unsigned int: %u ; \n- x: %x;\n- X: %X;\n- %%: %%;\n", character, string, ptr, int_base10_d, integer, u_int, x, X);
	printf("Retorno da função original: %i\n\n", or_ret);
}
