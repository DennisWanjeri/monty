#include "monty.h"
/**
 *mod - computes the remainder of the division of the second topmost *element by the topmost element
 *@stack:pointer to stack
 *@ln:line number
 *Return:void
 */
void mod(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int mod_n;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n", ln);
		/*free function*/
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (tmp->n == 0)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", ln);
		/*free function*/
		exit(EXIT_FAILURE);
	}
	mod_n = tmp->prev->n % tmp->n;
	tmp->prev->n = mod_n;
	tmp->prev->next = NULL;
	free(tmp);
}
/**
 *pchar - 
