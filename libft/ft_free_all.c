#include "libft.h"
#include <stdarg.h>

void free_all(void *first, ...)
{
    va_list		args;
    void		*ptr;

    free(first);
    va_start(args, first);
    while ((ptr = va_arg(args, void *)) != NULL)
        free(ptr);
    va_end(args);
}
