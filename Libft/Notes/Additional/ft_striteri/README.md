## ft_striteri
|Prototype|
|---|
|void ft_striteri(char *s, void (*f)(unsigned int,
char*));|

|Parameters|
|---|
|#1. The string on which to iterate.|
|#2. The function to apply to each character.|

|Return value|
|---|
|None|

|External functs|
|---|
|None|

|Description|
|---|
|Applies the function f to each character of the
string passed as argument, and passing its index
as first argument. Each character is passed by
address to f to be modified if necessary|
