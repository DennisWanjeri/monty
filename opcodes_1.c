#include "monty.h"
/**
 *push - adds values on top of the stack
 *@stack:pointer to the stack doubly linked list
 *@ln: line number of monty file to parse
 *Return:void
 */
void push(stack_t **stack, unsigned int ln)
{
	int number, i = 0;
	char *n;/*to hold the parsed number from the line*/

	if (n == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: Usage: push integer\n", ln);
		/*free any mem allocated function*/
		exit(EXIT_FAILURE);
	}
	/*check if the string contains an integer*/
	while (n[i])
	{
		if (((n[i] < '0' || n[i] > '9') && n[i] != '-') || n[i] == '-' && n[i + 1] == '\0')
		{
			dprintf(STDERR_FILENO, "L%d: Usage: push integer\n", ln);
			/*free mem allocated function*/
			exit(EXIT_FAILURE);
		}
		i++;
	}
	number = atoi(n);
	add_dnodeint_end(stack, number);
}
/**
 *pall - prints all the values of the stack from the top
 *@stack:pointer to the stack
 *@ln:line number
 *Return:void
 */
void pall(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;

	(void)ln;
	if (tmp == NULL)
		return;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (tmp->prev != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
	printf("%d\n", tmp->n);
}
void pint(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", ln);
		/*free mem function*/
		exit(EXIT_FAILURE);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	printf("%d\n", tmp->n);
}
