#include "holberton.h"
/**
 * helpExit - prints the exit help page.
 */
void helpExit(void)
{
	write(STDOUT_FILENO, "exit: exit [n]\n\n", 17);
	write(STDOUT_FILENO, "  Exit the shell.\n\n", 20);
	write(STDOUT_FILENO, "  Exits the shell with a status of N. If N is omitted,\n", 56);
	write(STDOUT_FILENO, "  the exit status is that of the last command executed.\n", 56);
	write(STDOUT_FILENO,"   \n", 5);
}
/**
 *helpCD - prints the cd help page
 */
void helpHelp(void)
{
	write(STDOUT_FILENO,"help: help [PATTERN ...]\n\n", 27);

	write(STDOUT_FILENO,"  Display information about builtin commands. Displays\n", 56);
	write(STDOUT_FILENO,"  brief summaries of builtin commands. If PATTERN is\n", 54);
	write(STDOUT_FILENO,"  specified, gives detailed help on all commands\n", 50);
	write(STDOUT_FILENO,"  matching PATTERN, otherwise the list of help topics\n", 55);
	write(STDOUT_FILENO,"  is printed.\n\n", 16);

	write(STDOUT_FILENO,"  Arguments:\n", 50);
	write(STDOUT_FILENO,"    PATTERN: Pattern specifiying a help topic\n\n", 50);
	write(STDOUT_FILENO,"  Exit Status:\n", 50);
	write(STDOUT_FILENO,"    Returns success unless PATTERN is not found or an\n", 50);
	write(STDOUT_FILENO,"    invalid option is given.\n", 50);
	write(STDOUT_FILENO,"   \n", 5);
}
/**
 * helpAlias - prints the alias help
 */
void helpCD(void)
{
	write(STDOUT_FILENO,"cd: cd [-L|[-P [-e]] [-@]] [dir]\n", 34);
	write(STDOUT_FILENO,"    Change the shell working directory.\n\n", 42);
	write(STDOUT_FILENO,"The default DIR is the value of the HOME shell variable.",57);
	write(STDOUT_FILENO,"The variable CDPATH defines the search path for the directory containing.\n", 75);
	write(STDOUT_FILENO,"DIR. Alternative directory names in CDPATH are separated by a colon (:).\n", 74);
	write(STDOUT_FILENO,"A null directory name is the same as the current directory.", 60);
    write(STDOUT_FILENO,"-L	force symbolic links to be followed: resolve symbolic\n", 58);
	write(STDOUT_FILENO,"   links in DIR after processing instances of `..'\n", 52);
	write(STDOUT_FILENO,"-P	use the physical directory structure without following\n", 59);
	write(STDOUT_FILENO," 	symbolic links.\n", 19);
	write(STDOUT_FILENO,"-e	if the -P option is supplied, and the current working.\n", 59);
	write(STDOUT_FILENO,"	exit with a non-zero status\n", 30);
	write(STDOUT_FILENO,"Exit Status:\n", 14);
	write(STDOUT_FILENO,"Returns 0 if the directory is changed, and if $PWD is set\n", 59);
	write(STDOUT_FILENO,"successfully when -P is used; non-zero otherwise.\n", 51);
	write(STDOUT_FILENO,"   \n", 5);
}
/**
 * helpEnv - prints the env help page.
 */
void helpEnv(void)
{
	write(STDOUT_FILENO,"env: env  [-] [NAME=VALUE]... [COMMAND [ARG]...]\n\n",51);
	write(STDOUT_FILENO,"  Prints out the current environment\n\n",39);
	write(STDOUT_FILENO,"  Exit Status:\n",16);
	write(STDOUT_FILENO,"  Returns success unless an invalid option is given\n",53);
	write(STDOUT_FILENO,"  or an error occurs.\n",23);
	write(STDOUT_FILENO,"   \n", 5);
}
/**
 * helpPWD - prints the Pwd
 */
void helpPWD(void)
{
	write(STDOUT_FILENO,"pwd: pwd [-LP]\n", 16);
	write(STDOUT_FILENO,"     Print the name of the current working directory.\n\n", 56);
	write(STDOUT_FILENO,"     Options:",14);
	write(STDOUT_FILENO,"     -L	print the value of $PWD if it names the current working directory.\n", 76);
	write(STDOUT_FILENO,"	  -P	print the physical directory, without any symbolic links.\n", 65);
	write(STDOUT_FILENO,"	  By default, `pwd' behaves as if `-L' were specified.", 56);
    write(STDOUT_FILENO,"	  Exit Status:\n", 17);
	write(STDOUT_FILENO,"     Returns 0 unless an invalid option is given or the current directory\n", 75);
	write(STDOUT_FILENO,"	  cannot be read.\n", 20);
	write(STDOUT_FILENO,"   \n", 5);
}
/**
 * helpEcho - prints the Echo help
 */
void helpEcho(void)
{
	write(STDOUT_FILENO,"echo: echo [-neE] [arg ...]\n", 29);
	write(STDOUT_FILENO,"      Write arguments to the standard output..\n\n", 49);
	write(STDOUT_FILENO,"	   Display the ARGs, separated by a single space character and followed by",76);
	write(STDOUT_FILENO,"	   a newline, on the standard output.\n\n", 41);
	write(STDOUT_FILENO,"	   Options:\n", 14);
	write(STDOUT_FILENO,"	   -n	do not append a newline\n", 32);
    write(STDOUT_FILENO,"	   -e	enable interpretation of the following backslash escapes\n", 65);
	write(STDOUT_FILENO,"           -E	explicitly suppress interpretation of backslash escapes\n", 71);
	write(STDOUT_FILENO,"	       `echo' interprets the following backslash-escaped characters:\n", 71);
	write(STDOUT_FILENO,"\n 	   \\a	alert (bell)\n", 23);
	write(STDOUT_FILENO,"	   \\b	backspace\n", 18);
	write(STDOUT_FILENO,"	   \\c	suppress further output\n\n", 33);
	write(STDOUT_FILENO,"	   Exit Status:\n", 18);
	write(STDOUT_FILENO,"	   Returns success unless a write error occurs.\n", 50);
	write(STDOUT_FILENO,"   \n", 5);
}