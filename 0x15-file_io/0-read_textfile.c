#include "main.h"
/**
 *read_textfile- im the function
 *@filename: im the const
 *@letters: im the size
 *return:  hdhdh 1 cjjd 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, n_read, n_written;
char *buf;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
perror("open");
return (0);
}
buf = malloc(letters + 1);
if (buf == NULL)
{
perror("malloc");
close(fd);
return (0);
}
n_read = read(fd, buf, letters);
if (n_read == -1)
{
perror("read");
close(fd);
free(buf);
return (0);
}
n_written = write(STDOUT_FILENO, buf, n_read);
if (n_written == -1 || (ssize_t)n_written != n_read)
{
perror("write");
close(fd);
free(buf);
return (0);
}
close(fd);
free(buf);
return (n_written);
}
