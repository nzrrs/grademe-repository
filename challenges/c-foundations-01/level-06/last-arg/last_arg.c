#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c , 1);
}
int	main(int argc, char **argv)
{
	int j;
	j = 0;
	if(argc <= 1){
		write(1,"wrong number of arguments\n",26);
		return (0);
	}
	while(argv[argc - 1][j])
	{
		ft_putchar(argv[argc - 1][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
