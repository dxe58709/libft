void	ft_itoa(int n, char *buffer, size_t buffer_size)
{
	int		num_len;
	int		sign;
	unsigned int num;

	if (n < 0)
	{
		sign = -1;
		num = -n;
	}
	else
	{
		sign = 1;
		num = n;
	}
	num_len = get_num_len(num);
	if (sign == -1)
		num_len++;
	if (buffer_size < (num_len + 1))
		return;  // バッファサイズが足りない場合は何もしないかエラー処理を行う
	buffer[num_len] = '\0';
	while (num_len--)
	{
		buffer[num_len] = num % 10 + '0';
		num /= 10;
	}
	if (sign == -1)
		buffer[0] = '-';
}
