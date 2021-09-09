/*char	*strnstr(const char *big, const char *little, size_t len);
int	main(void)
{
	char	str1[15];
	char	str2[15];
	char	*ret;
	int		buffer;

	strcpy(str1, "0abcdef");
	strcpy(str2, "ABCDEF");
	buffer = 15;

	printf("\nstr1 (dest):|%s| str2(scr): |%s| buffer:(%d)", \
	str1, str2, buffer);
	ret = ft_strnstr(str1, str2, buffer);
	printf("\n\nUsing [ft_strnstr] ===> ");
	printf("\nString ret: %s", ret);
	printf("\ndest:|%s| src:|%s|", str1, str2);

	printf("\n");
	return(0);
}
*/
/*
* return ((char *)big);
* returning 'const char *' from a function with result type 'char *'
* 	return(big)
* while (*big == *little)
* 	If value of little == value of big, do:
*/

