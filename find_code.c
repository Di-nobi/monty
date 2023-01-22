#include "monty.h"
/**
 * find_code - instructs the codes
 * opc: opcode passed
 * Return: pointer to the function
 */

void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL}
	}

	int i = 0;
	while (instruct[i].opcode)
	{
		if (instruct[i].opcode == opc)
			return (instruct[i].f);
		i++;
	}
	return (NULL);
}
