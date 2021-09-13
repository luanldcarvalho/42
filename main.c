#include "libft.h"
#include "ft_atoi.c"
/*int		atoi(const char *nptr);*/
int	main(void)
{
	char	*n;

	n = "teste";
	ft_atoi(*n);

	return (0);
}



/*
FUNCTION		NORME	COMPIL.		FORBIDDEN FUNC.		TESTS			RESULT
ft_atoi	 		NTI		NTI			NTI					NTI				NTI
ft_calloc		NTI		NTI			NTI					NTI				NTI
ft_memccpy		NTI		NTI			NTI					NTI				NTI
ft_strdup		NTI		NTI			NTI					NTI				NTI
ft_strlcat		ok		success		clean				✓✓✓✗✗✗✗✗✗	KO
ft_strncmp		ok		success		clean				✓✓✓✓✓✓✓✓✓✓✗		KO
ft_strnstr		ok		success		clean				✗✗✗✓✓✗✓✓✓✓		KO
*/
