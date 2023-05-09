#include "main.h"
/*
 *create_file- smitha
 *@filename
 *text_content
*/
int create_file(const char *filename, char *text_content)
{
int fd, n_written;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 666);
n_written = write(fd, text_content, strlen(text_content));
if (fd == -1 || n_written == -1)
{
return (-1);
}
}
else
{
fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 421);
}
close (fd);
return (1);
}
