# Libft (First project of 42)
## Support material for the list
### Topics covered by this directory:
1. [to compile](#TocompileinC)
1. [libft](#libft)
1. [ft_ftisalpha](#ft_isalpha)
1. [ft_ftisdigit](#ft_isdigit)
1. [ft_isalnum](#ft_isalnum)
1. [ft_isascii](#ft_isascii)
1. [ft_isprint](#ft_isprint)
1. [ft_toupper](#ft_toupper)
1. [ft_tolower](#ft_tolower)
1. [ft_strchr](#ft_strchr)

## To compile in C
Youtube: https://youtube.com/playlist?list=PL3ZslI15yo2pCf0WpZmV-ga02kMPxKH3p

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

## ft_isalpha
##### man isalpha:
	|DESCRIPTION|
	|---|
	|Checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c));|
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


## Developed by Luan Carvalho.
#### GitHub: https://github.com/luanldcarvalho
#### Linkedin: https://www.linkedin.com/in/luanldcarvalho/
