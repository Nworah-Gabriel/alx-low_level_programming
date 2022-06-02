#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 *main - a function that recieves parameters and copies file content from.one file to the other
 *@argc: file argument count
 *@argv: file arguments
 *Return: return 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}
	int op = open(argv[2], O_CREAT | O_TRUNC | S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH);
	int op2 = open(argv[1], O_RDONLY);

	if (op2 == -1)
	{
		dprintf(2, "Error can't read from the file %s\n", argv[1]);
		exit(98);
	}
	if (op == -1)
	{
		dprintf(2, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}	
		char buff = create_buffer(op2);
	char rd;
	
	rd = read(op2, buff, 1024);
	wr = write(op, buff, 1024);
	
	close_file(op);
	close_file(op2);

}
