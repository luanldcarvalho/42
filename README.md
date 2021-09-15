# Libft (First project of 42)
[My socials links](#Socials)
## Support material for the list
### Topics covered by this directory:
1. [To compile in C](#To_compile)
1. [libft](#libft)
1. [Makefile](#Makefile)
1. [ft_ftisalpha](#ft_isalpha)
1. [ft_ftisdigit](#ft_isdigit)
1. [ft_isalnum](#ft_isalnum)
1. [ft_isascii](#ft_isascii)
1. [ft_isprint](#ft_isprint)
1. [ft_toupper](#ft_toupper)
1. [ft_tolower](#ft_tolower)
1. [ft_strlen](#ft_strlen)
1. [ft_memset](#ft_memset)
1. [ft_bzero](#ft_bzero)
1. [ft_memscpy](#ft_memcpy)
1. [ft_memmove](#ft_memmove)
1. [ft_memchr](#ft_memchar)
1. [ft_memcmp](#ft_memcmp)
1. [ft_strchr](#ft_strchr)
1. [ft_strrchr](#ft_strrchr)
1. [ft_strncmp](#ft_strncmp)
1. [ft_strlcpy](#ft_strlcpy)
1. [ft_strlcat](#ft_strlcat)
1. [ft_strnstr](#ft_strnstr)
1. [ft_atoi](#ft_atoi)
1. [ft_calloc](#ft_calloc)

## To_compile
1. Compile, Makefile: https://youtube.com/playlist?list=PL3ZslI15yo2pCf0WpZmV-ga02kMPxKH3p
1. General about C: https://www.youtube.com/watch?v=VnH7OVFj_pA&list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW
1. size_t: https://www.tutorialspoint.com/size-t-data-type-in-c#:~:text=The%20datatype%20size_t%20is%20unsigned,It%20can%20never%20be%20negative.
1. Casting: https://www.ime.usp.br/~pf/algoritmos/aulas/footnotes/cast.html

#### Others_References
1. https://github.com/pbie42/libft42commented
1. https://github.com/jtoty/Libftest
1. Is Printable Characters: http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm
1. ASCII Table: https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

## libft

|DESCRIPTION|
|---|
|We create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.|

## Makefile
|DESCRIPTION|
|---|
|MakeFile is a command directives file. From the moment you run the Make command it looks for a makefile in the current directory. From the moment you run the command, look for a makefile in the current directory.|

|SYNTAX|
|---|
|The standard makefile tag is all and should follow this syntax:|
|all: \n \tab command (Flag, two points, your command on the line underneath and indented).|
|You can also create another directive. Replacing 'all:' to the new name (but without deleting the 'all:' directive). And the other command becomes make name|

|EXAMPLE|DESCRIPTION|
|---|---|
|make|do all:|
|make name| do name:|

|VARIABLE|DESCRIPTION|
|---|---|
|NAME = arguments|NAME receive all arguments after =|
|$(NAME)|To call the variable NAME during the code, can use $(NAME)|

|COMMON TARGETS|DESCRIPTION
|---|---|
|run|start a program|
|clean|clean compiled files|

##### man ar
1. man ar
	|FLAG|DESCRIPTION|
	|---|---|
	|ar|create, modify, and extract from archives|

1. About ar:
	|SUFFIX|DESCRIPTION|
	|---|---|
	|Suffix r|Insert the files member into archive (with replacement).|
	|.|This operation differs from q in that any previously existing members are deleted if their names match those being added.|
	|.|If one of the files named in member does not exist, ar displays an error message, and leaves undisturbed any existing members of the archive matching that name.|
	|.|By default, new members are added at the end of the file; but you may use one of the modifiers a, b, or i to request placement relative to some existing member.|
	|.|The modifier v used with this operation elicits a line of output for each file inserted, along with one of the letters a or r to indicate whether the file was appended (no old member deleted) or replaced.|
	|Suffix c|Create the archive.|
	|.|The specified archive is always created if it did not exist, when you request an update.|
	|.|But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.|
	|Suffix s|Add an index to the archive, or update it if it already exists.|
	|.|Note this command is an exception to the rule that there can only be one command letter, as it is possible to use it as either a command or a modifier.|
	|.|In either case it does the same thing.|

#### finded in web:
1. https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html
1. https://man7.org/linux/man-pages/man1/gcc.1.html

## ft_isalpha
##### man isalpha:
|DESCRIPTION|
|---|
|Checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) or islower(c));|
1.	The values returned are nonzero if the character c falls into the tested class, and zero if not.
	|RETURN VALUE|REMARKS|
	|---|---|
	|Zero (0)|If the parameter isn't an alphabet.|
	|Non zero number|If the parameter is an alphabet.|
1.	Output:
	|Result when ...|Return|
	|---|---|
	|Result when uppercase alphabet is passed| 1|
	|Result when lowercase alphabet is passed| 2|
	|Result when non-alphabetic character is passed| 0|

1.	You can get a different non-zero integer when alphabetic character is passed to isalpha() on your system. But, when you pass non-alphabetic character to isalpha(), it always returns 0.

##### finded in web
1. https://www.programiz.com/c-programming/library-function/ctype.h/isalpha

## ft_isdigit
|DESCRIPTION|
|---|
|Checks for an number digit. 0,1,2,3,4,5,6,7,8 ou 9|
##### finded in web:
1. https://www.programiz.com/c-programming/library-function/ctype.h/isdigit
2. https://www.ime.usp.br/~pf/algoritmos/apend/ctype.h.html

## ft_isalnum
|DESCRIPTION|
|---|
|Checks for an alphabetic character or a number. '0' to '9', 'A' to 'Z' and 'a' to 'z'|
|RETURN VALUE|
|---|
|The values returned are nonzero if the character c falls into the tested class, and zero if not.|

##### finded in web:
1. https://www.programiz.com/c-programming/library-function/ctype.h/isalnum

## ft_isascii
|DESCRIPTION|
|---|
|The isascii() function shall test whether c is a 7-bit US-ASCII character code. The isascii() function is defined on all integer values.|

|RETURN VALUE|
|---|
|The isascii() function shall return non-zero if c is a 7-bit US-ASCII character code between 0 and octal 0177 inclusive; otherwise, it shall return 0.|

##### finded in web:
1. https://linux.die.net/man/3/isascii
1. https://www.ibm.com/docs/en/i/7.3?topic=functions-isascii-test-character-representable-as-ascii-value
1. https://users.pja.edu.pl/~jms/qnx/help/watcom/clibref/src/isascii.html

## ft_isprint
|DESCRIPTION|
|---|
|A printable character is a character that occupies a printing position on a display (this is the opposite of a control character, checked with iscntrl).|
##### finded in web:
1. https://www.cplusplus.com/reference/cctype/isprint/
1. http://www.w3big.com/pt/cprogramming/c-function-isprint.html
1. https://www.programiz.com/c-programming/library-function/ctype.h/isprint

## ft_toupper
|DESCRIPTION|
|---|
|The toupper() function is used to convert lowercase alphabet to uppercase. i.e. If the character passed is a lowercase alphabet then the toupper() function converts a lowercase alphabet to an uppercase alphabet.|

##### finded in web:
1. https://www.geeksforgeeks.org/toupper-function-in-c/
1. https://www.tutorialspoint.com/c_standard_library/c_function_toupper.htm

## ft_tolower
|DESCRIPTION|
|---|
|The tolower() function is used to convert uppercase alphabet to lowercase. i.e. If the character passed is a uppercase alphabet then the tolower() function converts a uppercase alphabet to an lowercase alphabet.|
|This function is simular to ft_toupper|

## ft_strchr
|DESCRIPTION|
|---|
|This returns a pointer to the first occurrence of the character c in the string str, or NULL if the character is not found.|

##### finded in web:
1. https://man7.org/linux/man-pages/man3/strchr.3.html
1. https://www.tutorialspoint.com/c_standard_library/c_function_strchr.htm
1. http://www.w3big.com/pt/cprogramming/c-function-strchr.html
1. http://www.univasf.edu.br/~marcelo.linder/arquivos_iapCB/material_semestre_passado/aula19.pdf

## ft_strlen
|DESCRIPTION|
|---|
|The length of a C string is determined by the terminating null-character: A C string is as long as the number of characters between the beginning of the string and the terminating null character (without including the terminating null character itself).|

|RETURN VALUE|
|---|
|The strlen() function returns the number of bytes in the string pointed to by string.|

#### finded in web:
1. https://www.cplusplus.com/reference/cstring/strlen/
1. https://www.geeksforgeeks.org/strlen-function-in-c/#:~:text=The%20strlen()%20function%20calculates,null%20character%20'%5C0'.

## ft_memset
|DESCRIPTION|
|---|
|The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.|

|RETURN VALUE|
|---|
|The memset() function returns a pointer to the memory area s.|

#### finded in web:
1. https://docs.microsoft.com/pt-br/cpp/c-runtime-library/reference/memset-wmemset?view=msvc-160
1. https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
1. https://www.vivaolinux.com.br/artigo/Ponteiros-void-na-linguagem-C

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

## ft_memcpy
|DESCRIPTION|
|---|
|The memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.|

|RETURN VALUE|
|---|
|The memcpy() function returns a pointer to dest.|

## ft_memmove
|DESCRIPTION|
|---|
|The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.|

|RETURN VALUE|
|---|
|The memmove() function returns a pointer to dest.|

#### finded in web:
1. https://www.tutorialspoint.com/c_standard_library/c_function_memmove.htm
1. http://www.w3big.com/pt/cprogramming/c-function-memmove.html
1. https://www.geeksforgeeks.org/memmove-in-cc/
1. https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html

## ft_memchr
|DESCRIPTION|
|---|
| The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.|

|RETURN VALUE|
|---|
|The memchr() function return a pointer to the matching byte or NULL if the character does not occur in the given memory area.|

#### finded in web:
1. https://www.tutorialspoint.com/c_standard_library/c_function_memchr.htm
1. https://www.cplusplus.com/reference/cstring/memchr/
1. http://www.w3big.com/pt/cprogramming/c-function-memchr.html

## ft_memcmp
|DESCRIPTION|
|---|
|The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.|

|RETURN VALUE|
|---|
|The  memcmp()  function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.|
|For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2.|
|If n is zero, the return value is zero.|

#### finded in web:
1. http://www.w3big.com/pt/cprogramming/c-function-memcmp.html
1. https://www.tutorialspoint.com/c_standard_library/c_function_memcmp.htm
1. https://docs.microsoft.com/pt-br/cpp/c-runtime-library/reference/memcmp-wmemcmp?view=msvc-160
1. https://www.techonthenet.com/c_language/standard_library_functions/string_h/memcmp.php

## ft_strchr
|DESCRIPTION|
|---|
|The strchr() function returns a pointer to the first occurrence of the character c in the string s.|

|RETURN VALUE|
|---|
|The strchr() function return a pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.|

#### finded in web:
1. https://www.tutorialspoint.com/c_standard_library/c_function_strchr.htm
1. http://www.w3big.com/pt/cprogramming/c-function-strchr.html
1. https://stackoverflow.com/questions/8618413/why-i-get-returning-const-char-from-a-function-with-result-type-char-discar

## ft_strrchr
|DESCRIPTION|
|---|
|The strchr() function returns a pointer to the first occurrence of the character c in the string s.|

|RETURN VALUE|
|---|
|The strchr() function return a pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.|

## ft_strncmp
|DESCRIPTION|
|---|
|Compare string1 and string2 for n times.|

|RETURN VALUE|DESCRIPTION|
|---|---|
|strncmp|return an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.|
|< 0|then it indicates str1 is less than str2.|
|0|then it indicates str1 is equal to str2.|
|> 0|then it indicates str2 is less than str1.|

#### finded in web:
1. https://www.tutorialspoint.com/c_standard_library/c_function_strcmp.htm

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

## ft_strlcat
|DESCRIPTION|
|---|
|The strlcpy() and strlcat() functions copy and concatenate strings respectively. They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in size. Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.|
|The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.|

|RETURN VALUE|
|---|
|The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.|

## ft_strnstr
|DESCRIPTION|
|---|
|The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.|

|RETURN VALUE|
|---|
|If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.|

## ft_atoi

|DESCRIPTION|
|---|
|The atoi() function converts the initial portion of the string pointed to by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10); except that atoi() does not detect errors.|
|The atol() and atoll() functions behave the same as atoi(), except that they convert the initial portion of the string to their return type of long or long long.|

|RETURN VALUE|
|---|
|The converted value.|

#### finded in web:
1. https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm
1. http://www.w3big.com/pt/cprogramming/c-function-atoi.html
1. https://www.cplusplus.com/reference/cstdlib/atoi/
1. https://www.holbertonschool.com/coding-resource-atoi-in-c
1. WhiteSpaces: https://stackoverflow.com/questions/30033582/what-is-the-symbol-for-whitespace-in-c
1. https://www.dca.fee.unicamp.br/cursos/EA876/apostila/HTML/node140.html
1. https://www.embarcados.com.br/ponteiro-em-c-aritmetica-de-ponteiro/

## ft_calloc

|DESCRIPTION|
|---|
|The  calloc()  function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.  The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().  If the multiplication of  nmemb and size would result in integer overflow, then calloc() returns an error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated: malloc(nmemb * size);|

|RETURN VALUE|
|---|
|The  malloc()  and  calloc()  functions  return a pointer to the allocated memory, which is suitably aligned for any built-in type.  On error, these functions return NULL.  NULL may also be returned by a successful call to malloc() with a size of zero, or by a successful call to calloc() with nmemb or size equal to zero.|

#### finded in web:
1. Malloc, Calloc: https://www.youtube.com/watch?v=_reV9kQVLt0
1. https://www.youtube.com/watch?v=dQMvqz3Ooz8
1. https://www.cplusplus.com/reference/cstdlib/calloc/
1. https://docs.microsoft.com/pt-br/cpp/c-runtime-library/reference/calloc?view=msvc-160

## ft_strdup

|DESCRIPTION|
|---|
|The strdup() function returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc(3), and can be freed with free(3).|

|RETURN VALUE|
|---|
|On  success,  the strdup() function returns a pointer to the duplicated string.  It returns NULL if insufficient memory was available, with errno set to indicate the cause of the error.|

#### finded in web:
1. https://www.geeksforgeeks.org/strdup-strdndup-functions-c/
1. https://man7.org/linux/man-pages/man3/strdup.3.html
1. https://www.ti-enxame.com/pt/c/strcpy-vs-strdup/1070183184/


## Socials
### Developed by Luan Carvalho.
#### GitHub: https://github.com/luanldcarvalho
#### Linkedin: https://www.linkedin.com/in/luanldcarvalho/
