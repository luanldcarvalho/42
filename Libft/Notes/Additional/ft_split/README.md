## ft_split
|Prototype|
|---|
|char **ft_split(char const *s, char c);|

|Parameters|
|---|
|#1. The string to be split.|
|#2. The delimiter character.|

|Return value|
|---|
|The array of new strings resulting from the split. NULL if the allocation fails|

|External functs|
|---|
|malloc, free|

|Description|
|---|
|Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.|
