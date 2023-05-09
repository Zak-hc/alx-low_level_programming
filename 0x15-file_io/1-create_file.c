#include "main.h"
/**
 *create_file - smithfffffdd ddda
 *@filename: jhehhehhe
 *@text_content: ehehehe
 *Return: hdhhdhdh
*/
int create_file(const char *filename, char *text_content)
{
int fd, n_written;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
if (fd == -1 || errno == EEXIST)
{
fd = open(filename, O_WRONLY | O_TRUNC);
}
if (fd == -1 || errno != EEXIST)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}
n_written = write(fd, text_content, strlen(text_content));
if (n_written == -1)
{
return (-1);
}
close(fd);
return (1);
}
