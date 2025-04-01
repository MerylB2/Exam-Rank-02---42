// int is_sep(char s)
// {
//     if (s == 32 || (s >= 9 && s <= 13))
//         return (1);
//     return (0);
// }

// int ft_atoi_base(const char *nbr, unsigned int base)
// {
//     int digit = 0;
//     int res = 0;
//     int sign = 1;

//     if (base < 2 || base > 16)
//         return (0);
//     while (is_sep(*nbr))
//         nbr++;
//     sign = (*nbr == '-') ? -1 : 1;
//     if (*nbr == '-' || *nbr == '+')
//         nbr++;
//     while ((*nbr >= '0' && *nbr <= '9') ||
//             (*nbr >= 'a' && *nbr <= 'f') ||
//             (*nbr >= 'A' && *nbr <= 'F'))
//     {
//         if (*nbr >= '0' && *nbr <= '9')
//             digit = *nbr - 32;
//         else if (*nbr >= 'a' && *nbr <= 'f')
//             digit = *nbr - 'a' + 10;
//         else
//             digit = *nbr  - 'A' + 10;
//         if (digit >= (int)base)
//             break;
//         res = res * base + digit;
//         nbr++;
//     }
//     return (res * sign);
// }

int is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int		value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(const char *nbr, unsigned int base)
{
	int result;
	int sign;

	result = 0;
	while (is_blank(*nbr))
		nbr++;
	sign = (*nbr == '-') ? -1 : 1;
	if (*nbr == '-' || *nbr == '+')
        ++nbr;
	while (isvalid(*nbr, (int)base))
		result = result * base + value_of(*nbr++);
	return (result * sign);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi_base("     -1A", 16));
    return (0);
}
