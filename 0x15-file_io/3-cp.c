#include "main.h"

void error_trick(int, int, char **);

/**
 * main - program that copies the content of a file to another.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, cfile;
	char buffer[1024];
	ssize_t rbyte, wbyte;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);

	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	error_trick(fd_1, fd_2, argv);
	rbyte = 1024;

	while (rbyte == 1024)
	{
		rbyte = read(fd_1, buffer, 1024);
		if (rbyte == -1)
			error_trick(-1, 0, argv);

		wbyte = write(fd_2, buffer, rbyte);
		if (wbyte == -1)
			error_trick(0, -1, argv);
	}
	cfile =	close(fd_1);
	if (cfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	cfile = close(fd_2);
	if (cfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	return (0);
}

/**
 * error_trick - errors checking.
 * @fd_1: file descriptor one.
 * @fd_2: file descriptor two.
 * @argv: argument vector.
 *
 * Return: void.
 */
void error_trick(int fd_1, int fd_2, char *argv[])
{
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}


}
