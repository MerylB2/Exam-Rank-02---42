
typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
// if (begin_list == 0)
// 	return (0);
// else
// 	return (1 + ft_list_size(begin_list->next));


// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int n = 0;

// 	t_list *c = malloc(sizeof(*c));
// 	c->next = 0;
// 	c->data = &n;

// 	t_list *b = malloc(sizeof(*b));
// 	b->next = c;
// 	b->data = &n;

// 	t_list *a = malloc(sizeof(*a));
// 	a->next = b;
// 	a->data = &n;

// 	t_list *d = malloc(sizeof(*d));
// 	d->next = a;
// 	d->data = &n;

// 	printf("%d\n", ft_list_size(d));
// }
