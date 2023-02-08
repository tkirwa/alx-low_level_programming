#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t read_bytes, written_bytes;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

read_bytes = read(fd, buf, letters);
if (read_bytes == -1)
{
free(buf);
return (0);
}

written_bytes = write(1, buf, read_bytes);
free(buf);
close(fd);

if (written_bytes != read_bytes)
return (0);

return (written_bytes);
}
