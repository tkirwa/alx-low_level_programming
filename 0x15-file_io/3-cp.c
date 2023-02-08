#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFSIZE 1024
#include "main.h"

/**
 * cp - copy file_from to file_to
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on error
 */
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t r, w;
char buf[BUFSIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

while ((r = read(file_from, buf, BUFSIZE)) > 0)
{
w = write(file_to, buf, (size_t)r);
if (w == -1 || w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}

return (0);
}
