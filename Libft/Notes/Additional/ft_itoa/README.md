## ft_itoa
|Prototype|
|---|
|char *ft_itoa(int n);|

|Parameters|
|---|
|#1. the integer to convert.|

|Return value|
|---|
|The string representing the integer. NULL if the
allocation fails.bc|

|External functs|
|---|
|malloc|

|Description|
|---|
|Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.|
