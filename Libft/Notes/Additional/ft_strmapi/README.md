## ft_strmapi
|Prototype|
|---|
|char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));|

|Parameters|
|---|
|#1. The string on which to iterate.|
|#2. The function to apply to each character.|

|Return value|
|---|
|The string created from the successive applications
of ’f’. Returns NULL if the allocation fails.|

|External functs|
|---|
|malloc|

|Description|
|---|
|Applies the function ’f’ to each character of the
string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.|
