
typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
}