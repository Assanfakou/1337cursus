#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE

char *ft_strchr(char *str, char to_find);
size_t ft_strlen(char *str);
char *ft_strdup(char *str);
char *get_next_line(int fd);