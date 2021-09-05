long long sum(int *a, int n)
{
	long long ret;
	int i;

	i = 0;
	ret = 0;
	while (i < n)
		ret += *(a + i++);
	return (ret);
}