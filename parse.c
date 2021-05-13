#include "monty.h"
/**
 *parse -tokenizes monty  file input and calls corresponding opcode
 *function
 *Return: void
 */
void parse(void)
{
	int i = 0;
	char *token;

	for (mon.line = getline(&mon.buff, &mon.len, mon.file); mon.line != -1; )
	{
		/*initialize the mon.args(2-dimensional array) to NULL*/
		while (mon.args[i])
		{
			mon.args[i] = NULL;
			i++;
		}
		i = 0;
		mon.buff[strlen(mon.buff) - 1] = '\0';
		token = strtok(mon.buff, " ");
		if (!token || token[0] == '#' || tok[0] == '\0')
		{
			mon.line_number++;
			continue;
		}
		for (i = 0; tok != NULL; i++)
		{
			mon.args[i] = token;
			token = strtok(NULL, " ");
			i++;
			if (i > 2)
				break;
		}
		ops();
		mon.line_number++;
	}
}
