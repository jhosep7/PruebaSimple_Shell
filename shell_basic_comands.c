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
	write(STDOUT_FILENO, "\n JONATAN MAZO - JOSE DIAZ.\n", 100);
	write(STDOUT_FILENO, "Type program names, and hit enter.\n", 100);
	write(STDOUT_FILENO, "The following are built in:\n", 200);
        for (i = 0; i < hsh_num_builtins(); i++)
	{
		printf("\n  %s\n", args[i]);
	}

	write(STDOUT_FILENO, "\n Use the man command for information\n", 200);
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
