#include "../includes/scop.h"

void	error_quit(char *message)
{
	ft_putendl(message);
	safe_free_lst(&lst);
	exit(0);
}