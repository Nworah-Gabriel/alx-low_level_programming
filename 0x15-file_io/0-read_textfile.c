#include "main.h"

/**
 * read_textfile - reads a test file a nd prints it to the POSIX
 * @filename: file to be read from using the system call read
 * @letters: no of letters to be printed to buf
 * Return: returns 0 if filename is null, returns the actual n
 * umber of letters it can read if successful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDONLY, 0600);
	if (!fd)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	char buf[2000];

	read(fd, buf, letters);

	close(fd);

	dprintf(fd, "%s \n", buf);

	return (0);
}
