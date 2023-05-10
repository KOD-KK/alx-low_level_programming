#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int t, z, l = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
t = open(filename, O_WRONLY | O_APPEND);
z = write(o, text_content, l);
if (t == -1 || z == -1)
return (-1);
close(t);
return (1);
}
