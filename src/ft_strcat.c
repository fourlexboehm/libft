char	*ft_strcat(char *dest, char *src)
{
	int	desti;
	int	srci;

	desti = 0;
	srci = 0;
	while (dest[desti] != '\0')
		desti++;
	while (src[srci] != '\0')
	{
		dest[desti] = src[srci];
		srci++;
		desti++;
	}
	dest[desti] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "I'm the SOurce";
	char	dest[80] = "Please Add to me";

	printf("%s", ft_strcat(dest, src)); 
}
*/
