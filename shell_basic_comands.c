#include "holberton.h"

//int (*builtin_func[]) (char **) = {&hsh_cd, &hsh_help, &hsh_exit};
/**
 * hsh_num_builtins - change directory.
 * Return: Always returns 1, to continue executing.
 */

int hsh_num_builtins(void)
{
	char *builtin_str[] = {"cd", "exit", "help"};
	return (sizeof(builtin_str) / sizeof(char *));
}

/**
 * hsh_cd - change directory.
 * @args: List of args.  args[0] is "cd".  args[1] is the directory.
 * Return: Always returns 1, to continue executing.
 */

int hsh_cd(char **args)
{
	if (args[1] == NULL)
	{
		write(STDOUT_FILENO, "hsh: expected argument to \"cd\"\n", 200);
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("hsh");
		}
	}
	return (1);
}

/**
 * hsh_help - prints help.
 * @args: arguments.
 * Return: returns int.
 */
int hsh_help(char **args)
{
	int i;

	write(STDOUT_FILENO, "\nHolberton students bash, version 1.0-release (x86_64-pc-linux-gnu)\n", 70);
	write(STDOUT_FILENO, "Use `man_1_simple_shell' to find more information.\n",52);
	write(STDOUT_FILENO, "Usage: \"help [comand] [comand] [...]\"\n", 41);
	write(STDOUT_FILENO, "===================\n\n", 22);

	for (i = 0; args[i] != NULL; i++)
	{
		write(STDOUT_FILENO, " ", 1);
		write(STDOUT_FILENO, args[i], strlen(args[i])); /* Hay que cambiar STRLEN, por ls nuestra */
		write(STDOUT_FILENO, "\n", 1);
	}
	write(STDOUT_FILENO, "\n", 1);

	write(STDOUT_FILENO, "By: JONATAN MAZO - JOSE DIAZ.\n", 31);
	write(STDOUT_FILENO, "More in Holberton website https://www.holbertonschool.com/co\n", 62);
	return (1);
}

/**
 * hsh_exit - exit.
 * @args: arguments.
 * Return: Always returns 0, to terminate execution.
 */

int hsh_exit(char **args)
{
	if (args == NULL)
	{
		write(STDOUT_FILENO, "Error to exit.\n", 100);
		return (1);
	}
	return (0);
}
