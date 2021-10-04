## ft_substr
|Prototype|
|---|
|char *ft_substr(char const *s, unsigned int start, size_t len);|

|Parameters|
|---|
|#1. The string from which to create the substring.|
|#2. The start index of the substring in the string ’s’.|
|#3. The maximum length of the substring.|

|Return value|
|---|
|The substring. NULL if the allocation fails|

|External functs|
|---|
|malloc|

|Description|
|---|
|Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
