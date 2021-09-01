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

## To_compile
1. Compile, Makefile: https://youtube.com/playlist?list=PL3ZslI15yo2pCf0WpZmV-ga02kMPxKH3p
1. General about C: https://www.youtube.com/watch?v=VnH7OVFj_pA&list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW
1. size_t: https://www.tutorialspoint.com/size-t-data-type-in-c#:~:text=The%20datatype%20size_t%20is%20unsigned,It%20can%20never%20be%20negative.

## libft
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

## ft_strncmp
|DESCRIPTION|
|---|
|Compare string1 and string2 for n times.|

|RETURN VALUE|DESCRIPTION|
|---|---|
|< 0|then it indicates str1 is less than str2.|
|0|then it indicates str1 is equal to str2.|
|> 0|then it indicates str2 is less than str1.|

#### finded in web:
1. https://www.tutorialspoint.com/c_standard_library/c_function_strcmp.htm

## Others_References
1. https://github.com/pbie42/libft42commented

## Socials
### Developed by Luan Carvalho.
#### GitHub: https://github.com/luanldcarvalho
#### Linkedin: https://www.linkedin.com/in/luanldcarvalho/
