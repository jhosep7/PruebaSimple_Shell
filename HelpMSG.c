#include "holberton.h"
/**
 * helpExit - prints the exit help page.
 */
int helpExit(void)
{
	write(STDOUT_FILENO, "exit: exit [n]\n\n", 17);
	write(STDOUT_FILENO, "  Exit the shell.\n\n", 20);
	write(STDOUT_FILENO, "  Exits the shell with a status of N.\n", 39);
	write(STDOUT_FILENO, "  the exit status is that", 26);
	write(STDOUT_FILENO, "  the exit status is that of", 29);
	write(STDOUT_FILENO, "  the last command executed.\n", 30);
	write(STDOUT_FILENO, "   \n", 5);
	return (1);
}
/**
 * helpAlias - prints the alias help
 */
int helpCD(void)
{
	write(STDOUT_FILENO, "cd: cd [-L|[-P [-e]] [-@]] [dir]\n", 34);
	write(STDOUT_FILENO, "    Change the shell working directory.\n\n", 42);
	write(STDOUT_FILENO, "The default DIR is the value of the HOME shell.", 48);
	write(STDOUT_FILENO, "The variable CDPATH defines the search path.\n", 46);
	write(STDOUT_FILENO, "Alt DIR names in CDPATH separated by colon (:).\n", 49);
	write(STDOUT_FILENO, "A null directory name is the same as the cur dir.", 50);
	write(STDOUT_FILENO, "-L force symbolic links to be followed\n", 40);
	write(STDOUT_FILENO, " links in DIR after processing instances\n", 50);
	write(STDOUT_FILENO, "-P use the physical DIR structure without \n", 44);
	write(STDOUT_FILENO, "	 symbolic links.\n", 19);
	write(STDOUT_FILENO, "-e	if the -P option is supplied.\n", 34);
	write(STDOUT_FILENO, "	exit with a non-zero status\n", 30);
	write(STDOUT_FILENO, "Exit Status:\n", 14);
	write(STDOUT_FILENO, "Returns 0 if the directory is changed\n", 39);
	write(STDOUT_FILENO, "successfully when -P is used;\n", 31);
	write(STDOUT_FILENO, "   \n", 5);
	return (1);
}
/**
 * helpEnv - prints the env help page.
 */
int helpEnv(void)
{
	write(STDOUT_FILENO, "env: env  [-] [NAME=VALUE].. [COMMAND [ARG].]\n\n", 48);
	write(STDOUT_FILENO, "  Prints out the current environment\n\n", 39);
	write(STDOUT_FILENO, "  Exit Status:\n", 16);
	write(STDOUT_FILENO, "  Returns success unless invalid option given\n", 47);
	write(STDOUT_FILENO, "  or an error occurs.\n", 23);
	write(STDOUT_FILENO, "   \n", 5);
	return (1);
}
/**
 * helpPWD - prints the Pwd
 */
int helpPWD(void)
{
	write(STDOUT_FILENO, "pwd: pwd [-LP]\n", 16);
	write(STDOUT_FILENO, "     Print the name of the cur working DIR.\n\n", 46);
	write(STDOUT_FILENO, "     Options:", 14);
	write(STDOUT_FILENO, "    -L	print the value of $PWD.\n", 33);
	write(STDOUT_FILENO, "	  -P	print the physical directory.\n", 37);
	write(STDOUT_FILENO, "	  `pwd' behaves as if `-L' were specified.", 44);
	write(STDOUT_FILENO, "	  Exit Status:\n", 17);
	write(STDOUT_FILENO, "     Returns 0 unless invalid option is given\n", 47);
	write(STDOUT_FILENO, "	  cannot be read.\n", 20);
	write(STDOUT_FILENO, "   \n", 5);
	return (1);
}
/**
 * helpEcho - prints the Echo help
 */
int helpEcho(void)
{
	write(STDOUT_FILENO, "echo: echo [-neE] [arg ...]\n", 29);
	write(STDOUT_FILENO, "      Write arguments to the standard output..\n\n", 49);
	write(STDOUT_FILENO, "	   Display the ARGs, followed by",34);
	write(STDOUT_FILENO, "	   a newline, on the standard output.\n\n", 41);
	write(STDOUT_FILENO, "	   Options:\n", 14);
	write(STDOUT_FILENO, "	   -n	do not append a newline\n", 32);
    write(STDOUT_FILENO, "	   -e	enable interpretation of backslash escapes\n", 65);
	write(STDOUT_FILENO, "     -E	explicitly suppress interpretation of backslash escapes\n", 71);
	write(STDOUT_FILENO, "	       `echo' interprets the following backslash-escaped characters:\n", 71);
	write(STDOUT_FILENO, "\n 	   \\a	alert (bell)\n", 23);
	write(STDOUT_FILENO, "	   \\b	backspace\n", 18);
	write(STDOUT_FILENO, "	   \\c	suppress further output\n\n", 33);
	write(STDOUT_FILENO, "	   Exit Status:\n", 18);
	write(STDOUT_FILENO, "	   Returns success unless a write error occurs.\n", 50);
	write(STDOUT_FILENO, "   \n", 5);
	return (1);
}