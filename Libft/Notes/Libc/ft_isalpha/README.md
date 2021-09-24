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
