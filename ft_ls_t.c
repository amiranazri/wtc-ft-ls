#include "ft_ls.h"

void ft_ls_t(char *tmp)
{
	t_list	data;
	t_list	pos;
	t_list	*list;

	data.directory = opendir(".");
	list = NULL;
	while ((data.file = readdir(data.directory)) != NULL)
	{
		if (data.file->d_name[0] == '.')
			continue;
		list = add_node(list, data.file->d_name);
	}
	ft_time_sort(list);
	print_list(list);
	closedir(data.directory);
}