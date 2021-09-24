## ft_bzero
|DESCRIPTION|
|---|
|The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.|
|The explicit_bzero() function performs the same task as bzero().  It differs from bzero() in that it guarantees that compiler optimizations will not remove the erase operation if the compiler deduces that the operation is "unnecessary".|

|RETURN VALUE|
|---|
|None|

#### finded in web:
1. https://man7.org/linux/man-pages/man3/bzero.3.html
1. https://pubs.opengroup.org/onlinepubs/009695399/functions/bzero.html
