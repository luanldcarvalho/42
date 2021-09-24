## ft_calloc

|DESCRIPTION|
|---|
|The  calloc()  function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.  The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().  If the multiplication of  nmemb and size would result in integer overflow, then calloc() returns an error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated: malloc(nmemb * size);|

|RETURN VALUE|
|---|
|The  malloc()  and  calloc()  functions  return a pointer to the allocated memory, which is suitably aligned for any built-in type.  On error, these functions return NULL.  NULL may also be returned by a successful call to malloc() with a size of zero, or by a successful call to calloc() with nmemb or size equal to zero.|

#### finded in web:
1. Malloc, Calloc: https://www.youtube.com/watch?v=_reV9kQVLt0
1. https://www.youtube.com/watch?v=dQMvqz3Ooz8
1. https://www.cplusplus.com/reference/cstdlib/calloc/
1. https://docs.microsoft.com/pt-br/cpp/c-runtime-library/reference/calloc?view=msvc-160
1. https://pt.wikipedia.org/wiki/Aloca%C3%A7%C3%A3o_din%C3%A2mica_de_mem%C3%B3ria_em_C#:~:text=calloc%20%C3%A9%20uma%20fun%C3%A7%C3%A3o%20da,zero)%20para%20cada%20um%20deles.
