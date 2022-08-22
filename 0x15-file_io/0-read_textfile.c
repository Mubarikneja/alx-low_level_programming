#include "main.h"
/**
* read_textfile - reads a text file
* @filename: name of the file 
* @letters: number of letter
* Return: No printed letters ,0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int l, g;
char *buf;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);
buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);
l = read(fd, buf, letters);
if (l < 0)
{
free(buf);
return (0);
}
buf[l] = '\0';
close(fd);
g = write(STDOUT_FILENO, buf, l);
if (g < 0)
{
free(buf);
return (0);
}
free(buf);
return (g);
}
