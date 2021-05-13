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
		{"div", div_op},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}
	};
	while (op[op_i].opcode != NULL)
	{
		if (strcmp(mon.args[0], op[op_i].opcode) == 0)
		{
			op.[op_i].f(&mon.stack, mon.line_number);
			break;
		}
		op_i++;
		if (op[op_i].opcode == NULL)
		{
			dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", mon.line_number, mon.args[0]);
			freer();
			wxit(EXIT_FAILURE);
		}
	}
}