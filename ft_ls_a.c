#include "ft_ls.h"

void ft_ls_a(char *tmp)
{
	t_list	data;
	t_list	pos;
	t_list	*list;

	data.directory = opendir(".");
	list = NULL;
	while ((data.file = readdir(data.directory)) != NULL)
	{
		list = add_node(list, data.file->d_name, 0);
	}
	ft_sort(list);
	print_list(list);
	closedir(data.directory);
}