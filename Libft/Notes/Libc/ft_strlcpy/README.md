## ft_strlcpy
|DESCRIPTION|
|---|
|The strlcpy() and strlcat() functions copy and concatenate strings respectively. They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in size. Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.|
|The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.|

|RETURN VALUE|
|---|
|The strlcpy() and strlcat() functions return the total length of the string they tried to create. For strlcpy() that means the length of src. For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.|

#### finded in web:
1. https://linux.die.net/man/3/strlcpy
1. https://www.sudo.ws/todd/papers/strlcpy.html
1. https://en.wikibooks.org/wiki/C_Programming/C_Reference/nonstandard/strlcpy
1. bsd/string (sudo apt-get install  libbsd-dev): https://stackoverflow.com/questions/24484007/cannot-install-opendkim-because-cannot-find-bsd-string-h
