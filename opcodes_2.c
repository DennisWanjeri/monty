#include "monty.h"
/**
 *add - adds the two topmost elements of a stack
 *@stack:pointer to stack
 *@ln:line number
 *Return:void
 */
void add(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int sum;

	if (tmp == NULL || tmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n");
		/*free function*/
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	sum = tmp->n + tmp->prev->n;
	tmp->prev->n = sum;
	tmp->prev->next = NULL;
	free(tmp);
}
/**
 *nop - doesn't do anything
 *@stack:pointer to stack
 *@ln:line number
 *Return: void
 */
void nop(stack_t **stack, unsigned int ln)
{
	(void)stack;
	(void)ln;
}
