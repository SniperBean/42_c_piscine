/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:15:33 by mirivera          #+#    #+#             */
/*   Updated: 2018/11/11 19:16:44 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_rush(int x, int y);
int		ft_atoi(char *str);
void	putline(int axx, int x, char xa, char xb);
void	rush00(int h, int v);
void	rush01(int x, int y);
void	rush02(int h, int v);
void	rush03(int h, int v);
void	rush04(int x, int y);
void	ft_result_draw(char *filename, char *nbr1, char *nbr2);
void	ft_allocate_memory(char **func, char *data);
int		ft_verify_function_name(char *arg);
int		ft_verify_char(char *arg);
void	ft_select_function(char *filename, char *nbr1, char *nbr2);

#endif
