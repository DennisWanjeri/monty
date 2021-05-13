#include "monty.h"
/**
 *ops - function to get corresponding opcode function
 */
void ops(void)
{
	int op_i = 0;
	instruction_op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}
	};
	while (op[op_i].opcode != NULL)
	{
		
