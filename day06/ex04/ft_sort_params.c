/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:50:33 by sxu               #+#    #+#             */
/*   Updated: 2018/10/30 19:51:45 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	res;

	i = 0;
	j = 0;
	k = 0;
	res = 0;
	while (s1[i] != '\0' || s1[i] != 0)
		i++;
	while (s2[j] != '\0' || s2[j] != 0)
		j++;
	while (k < i || k < j)
	{
		if (res == 0 && s1[k] != s2[k])
		{
			res = s1[k] - s2[k];
		}
		k++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	while (argc > 1)
	{
		i = 0;
		j = 0;
		while (++i < argc)
			if (j == 0 || ft_strcmp(argv[i], argv[j]) < 0)
				j = i;
		ft_putstr(argv[j]);
		ft_putchar('\n');
		if (j != --argc)
			ft_swap(argv + j, argv + argc);
	}
	return (0);
}
