#include "3-calc.h"
#include <stddef.h> /* NULL */

/**
 * get_op_func - Function that selects the correct function
 * to perform the operation asked by the user.
 *
 * @s: Operator passed as argument
 *
 * Description: op is pointer to a string, represents an operator.
 * f is function pointer, func takes 2 int as argument and returns int.
 *
 * Return: Pointer to the function that corresponds to the 
 * operator given as parameter, or NULL if operator does not 
 * match any of the expected operators.
 *
 */

int (*get_op_func(char *s))(int, int)
{
	/* ops is an array of op_t structure */
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0; /* loop to find correct function */
    while (ops[i].op != NULL) /* stop loop at end of array */
    {
	    if (*(ops[i].op) == *s && s[1] == '\0')
	    /* checks if first character of string matches */
	    /* checks if operator string has only one character */
	    /* this avoids partial matches */
		   return (ops[i].f; /* function pointer, match found */
	    i++;
    }

   return (NULL); /* no match */ 
}
