#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	character;

	character = 0;
	while (str[character] != '\0')
	{
		character++;
	}
	return (character);
}

int main(void)
{
	char *str;
	str = "i am Happy";
	int len;

	len = ft_strlen(str);
	printf("%i\n", len);
}