## ft_strtrim
|Prototype|
|---|
|char *ft_strtrim(char const *s1, char const *set);|

|Parameters|
|---|
|#1. The string to be trimmed.|
|#2. The reference set of characters to trim.|

|Return value|
|---|
|The trimmed string. NULL if the allocation fails.|

|External functs|
|---|
|malloc|

|Description|
|---|
|Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string|
