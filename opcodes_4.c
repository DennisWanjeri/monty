#include "monty.h"
/**
* rotl - function that rotates a stack by one.
* @stack: first parameter
*@ln: second parameter
*
* Return: void
*/
void rotl(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int rotl_n;

	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: cant rot1, stack is empty", ln);
		freer();
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	rotl_n = tmp->n;
	while (tmp->prev != NULL)
	{
		tmp->n = tmp->prev->n;
		tmp = tmp->prev;
	}
	tmp->n = rotl_n;
}
