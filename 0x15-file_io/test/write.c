#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd, wr, op;
	
	op = open(filename, O_CREAT | O_RDONLY, 0600);
	buffer = malloc(sizeof(char *) * letters);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO,buffer, letters);
	if (filename != NULL)
	{
		op;
		rd;
		wr;
		return (letters);
	}
	return (0);
	free(buffer);
};
