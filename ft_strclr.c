void 	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (!s)
 		return ;
	while (s[i])
		s[i++] = 0;
}