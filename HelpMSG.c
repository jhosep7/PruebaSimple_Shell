#include "holberton.h"
/**
 * helpExit - prints the exit help page.
 */
void helpExit(void)
{
	write(STDOUT_FILENO, "exit: exit [n]\n\n", 50);

	write(STDOUT_FILENO, "  Exit the shell.\n\n", 50);

	write(STDOUT_FILENO, "  Exits the shell with a status of N. If N is omitted,\n", 50);
	write(STDOUT_FILENO, "  the exit status is that of the last command executed\n", 50);
}
/**
 *helpCD - prints the cd help page
 */
void helpHelp(void)
{
	write(STDOUT_FILENO,"help: help [PATTERN ...]\n\n", 50);

	write(STDOUT_FILENO,"  Display information about builtin commands. Displays\n", 50);
	write(STDOUT_FILENO,"  brief summaries of builtin commands. If PATTERN is\n", 50);
	write(STDOUT_FILENO,"  specified, gives detailed help on all commands\n", 50);
	write(STDOUT_FILENO,"  matching PATTERN, otherwise the list of help topics\n", 50);
	write(STDOUT_FILENO,"  is printed.\n\n", 50);

	write(STDOUT_FILENO,"  Arguments:\n", 50);
	write(STDOUT_FILENO,"    PATTERN: Pattern specifiying a help topic\n\n", 50);
	write(STDOUT_FILENO,"  Exit Status:\n", 50);
	write(STDOUT_FILENO,"    Returns success unless PATTERN is not found or an\n", 50);
	write(STDOUT_FILENO,"    invalid option is given.\n", 50);
}
/**
 * helpAlias - prints the alias help
 */
void helpCD(void)
{
	write(STDOUT_FILENO,"_strcmp(args[1], 'help') == 0\n", 100);
	write(STDOUT_FILENO," Cambia el directorio de trabajo del intérprete de comandos..\n\n", 100);
	write(STDOUT_FILENO,"Cambia el directorio actual a DIR.  El DIR por defecto",100);
	write(STDOUT_FILENO,"es el valor de la variable HOME del intérprete.\n", 100);
	write(STDOUT_FILENO," \n Opciones:\n", 50);
	write(STDOUT_FILENO,"  -L   fuerza a seguir enlaces simbolicos: resuelve enlaces", 100);
    write(STDOUT_FILENO,"simbólicos en DIR después de procesar instancias\n", 100);
	write(STDOUT_FILENO,"  -P   usa la estructura del directorio físico sin seguir\n", 100);
	write(STDOUT_FILENO,"enlaces simbólicos: resuelve enlaces simbólicos en DIR\n", 100);
	write(STDOUT_FILENO," Lo predeterminado es seguir enlaces simbólicos, como si «-L» se hu\n", 100);
	write(STDOUT_FILENO,"biera especificado.\n", 50);
	write(STDOUT_FILENO,"Estado de salida:\n", 50);
	write(STDOUT_FILENO,"Devuelve 0 si se ha cambiado el directorio.\n", 100);
}
/**
 * helpEnv - prints the env help page.
 */
void helpEnv(void)
{
	write(STDOUT_FILENO,"env: env  [-] [NAME=VALUE]... [COMMAND [ARG]...]\n\n",100);
	write(STDOUT_FILENO,"  Prints out the current environment\n\n",100);
	write(STDOUT_FILENO,"  Exit Status:\n",100);
	write(STDOUT_FILENO,"  Returns success unless an invalid option is given\n",100);
	write(STDOUT_FILENO,"  or an error occurs.\n",100);
}