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
		dprintf(STDERR_FILENO, "L%d: cant rotl\n", ln);
		freer();
		exit(0);
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

/**
  * rotr - opcode that rotates a stack to the bottom
  * @stack: 1st paramenter
  *
  * Return: void
  */
void rotr(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = *stack;
	int rotr_n;

	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: cant rotl\n", ln);
		freer();
		exit(0);
	}
	rotr_n = tmp->n;
	while (tmp->next != NULL)
	{
		tmp->n = tmp->next->n;
		tmp = tmp->next;
	}
	tmp->n = rotr_n;
}
