void bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
	void *s: A pointer to the memory area where zeroing will occur.
	0: The value to be set (in this case, 0 represents the null byte or zero-value byte).
    size_t n: The number of bytes to set to zero, starting from the address s.
*/
