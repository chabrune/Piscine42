#include "ft_stock_str.h"
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
	t_stock_str *res;
	
	res = ft_strs_to_tab(argc, argv);
	ft_show_tab(res);
	return (0);
}