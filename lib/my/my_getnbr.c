/*
** EPITECH PROJECT, 2017
** gg
** File description:
** gg
*/

int my_getnbr(char const *str)
{
	int i = 0;
	int result = 0;

	while (str[i] == '+' || str[i] == '-' || str[i] == ' ' ||
	str[i] == '/' || str[i] == '*' || str[i] == '%' || str[i] == '(')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result);
}
