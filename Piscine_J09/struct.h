/*
** struct.h for mylib in /run/media/xxx/2337a639-4d85-4f36-ade6-cdcedffd0cf2/xxx/Test/piscine/pj9
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Mon Nov 10 14:41:41 2014 
** Last update Mon Nov 10 17:39:34 2014 
*/

#ifndef		STRUCT_H_
# define	STRUCT_H_
#include	<stdlib.h>

struct s_stock_par
{
  int		size_param;
  char		*str;
  char		*copy;
  char		**tab; 
};

struct s_stock_par *my_param_to_tab(int, char **);
void		my_putstr(char*);
int		my_strlen(char *str);
char		*my_strcp(char *str);
void		my_put_nbr(int);
int		my_show_tab(struct s_stock_par*);
char		**my_str_to_wordtab(char*);
#endif
