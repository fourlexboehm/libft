int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "1551";
	char	s2[] = "15518943";
	printf("%d", ft_strncmp(s1, s2, 4)); 
}
*/
