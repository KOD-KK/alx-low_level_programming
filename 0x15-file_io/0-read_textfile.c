#include "main.h"
#include <stdlib.h>


/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file being read and printed
 * @letters: number of letters to be read and printed
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *suf;
ssize_t d;
ssize_t z;
ssize_t t;
d = open(filename, O_RDONLY);
if (d == -1)
return (0);
suf = malloc(sizeof(char) * letters);
t = read(d, suf, letters);
z = write(STDOUT_FILENO, suf, t);
free(suf);
close(d);
return (z);
}
