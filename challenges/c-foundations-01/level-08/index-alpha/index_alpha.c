#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int i;
	int j;
	char word;
	int word_pos;
	if(argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	i = 0;
	while(argv[1][i])
	{
		word = argv[1][i];
		if(word >= 'a' && word <= 'z')
			word_pos = word - 'a';
		else if(word >= 'A' && word <= 'Z')
			word_pos = word - 'A';
		else 
		{
			ft_putchar(word);
			i++;
			continue;
		}
		j = 0;
		while(j < word_pos)	
		{
			ft_putchar(word);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
