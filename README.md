# Libft
## First project of 42

### Suport material

#### To compile in C
Youtube: https://youtube.com/playlist?list=PL3ZslI15yo2pCf0WpZmV-ga02kMPxKH3p

#### ft_isalpha
##### man isalpha:
1.	Checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c));
1.	The values returned are nonzero if the character c falls into the tested class, and zero if not.
	| Return Value|Remarks |
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

#### ft_isdigit

##### finded in web:
1. https://www.programiz.com/c-programming/library-function/ctype.h/isdigit
2. https://www.ime.usp.br/~pf/algoritmos/apend/ctype.h.html

#### ft_isalnum

##### finded in web:
1. https://www.programiz.com/c-programming/library-function/ctype.h/isalnum

#### ft_isascii

|DESCRIPTION|
|---|
|The isascii() function shall test whether c is a 7-bit US-ASCII character code.|
|The isascii() function is defined on all integer values.|

|RETURN VALUE|
|---|
|The isascii() function shall return non-zero if c is a 7-bit US-ASCII character code between 0 and octal 0177 inclusive; otherwise, it shall return 0.|

##### finded in web:
1. https://linux.die.net/man/3/isascii
1. https://www.ibm.com/docs/en/i/7.3?topic=functions-isascii-test-character-representable-as-ascii-value
1. https://users.pja.edu.pl/~jms/qnx/help/watcom/clibref/src/isascii.html

#### ft_isprint

##### finded in web:
1. https://www.cplusplus.com/reference/cctype/isprint/
1. http://www.w3big.com/pt/cprogramming/c-function-isprint.html
1. https://www.programiz.com/c-programming/library-function/ctype.h/isprint

#### ft_toupper

|DESCRIPTION|
|---|
|The toupper() function is used to convert lowercase alphabet to uppercase. i.e. If the character passed is a lowercase alphabet then the toupper() function converts a lowercase alphabet to an uppercase alphabet.|

##### finded in web:
1. https://www.geeksforgeeks.org/toupper-function-in-c/
1. https://www.tutorialspoint.com/c_standard_library/c_function_toupper.htm

## Developed by Luan Carvalho.
#### GitHub: https://github.com/luanldcarvalho
#### Linkedin: https://www.linkedin.com/in/luanldcarvalho/
