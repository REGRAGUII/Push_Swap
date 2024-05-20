
#include "./includes/push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	sg;
	int	rs;

	sg = 1;
	rs = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		sg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			rs = rs * 10 + *nptr - '0';
		else
			ft_putchar_fd("alpahnumeric argument", 2);
		nptr++;
	}
	return (sg * rs);
}

size_t	ft_strlen(char *c)
{
	size_t	i;

	i = 0;
	while (c && c[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	char	*str;
	size_t	len1;
	size_t	len2;

	str = NULL;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (s1 || s2)
	{
		str = malloc(sizeof(char) * (len1 + len2) + 1);
		if (!str)
			return (NULL);
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
		len2 = 0;
		while (i < (len1 + ft_strlen(s2)))
			str[i++] = s2[len2++];
		str[len1 + ft_strlen(s2)] = '\0';
	}
	return (str);
}

char	*ft_strdup(char *s)
{
	char	*x;
	int		i;

	i = 0;
	x = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!x)
		return (0);
	while (s[i])
	{
		x[i] = s[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}

static	int	tokenizer(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		if (str[i] != sep)
		{
			count++;
			while (str[i] != sep && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	char	*wrd_malloc(const char *str, char sep)
{
	int		i;
	char	*word;

	i = 0;
	while (str && str[i] && str[i] != sep)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, i + 1);
	return (word);
}

static	char	**free_mem(char **buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		free(buff[i]);
		i++;
	}
	free(buff);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**buff;

	i = 0;
	j = 0;
	buff = (char **)malloc(sizeof(char *) * (tokenizer(s, c) + 1));
	if (!buff)
		return (NULL);
	while (s && s[i])
	{
		if (s[i] != c)
		{
			buff[j] = wrd_malloc(s + i, c);
			if (!buff[j])
				return (free_mem(buff));
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	buff[j] = NULL;
	return (buff);
}

void	ft_putchar_fd(char *c, int fd)
{
	write(fd, &c, 1);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	x;

	x = 0;
	srclen = ft_strlen((char *) src);
	if (size)
	{
		while (src[x] && x < size - 1)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (srclen);
}

int ft_isdigit(char c)
{
	if(c >= '0' && c <= '9')
		return(1);
	return(0); 
}

int	ft_isspace (char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] != ' ')
			return(1);
		i++;
	}
	return(0);
}