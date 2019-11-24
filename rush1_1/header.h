/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 19:17:51 by sxu               #+#    #+#             */
/*   Updated: 2018/11/04 19:31:52 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
void	ft_putnbr(int i);
void	ft_putstr(char *str);
void	ft_putsudoku(int **grid);
int		verify_length(char **grid);
int		verify_word(char **grid);
int		verify_row(int **grid);
int		verify_col(int **grid);
int		verify_block(int **grid, int i, int j, int k);
int		**ctoi(char **grid, int **grid_i);
int		**input_to_grid(char **grid);
int		check_block(int row, int col, int **grid);
int		is_place(int count, int **grid);
void	backtrace(int count, int **grid, int i);

#endif
