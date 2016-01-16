unsigned char	ft_pwr2(unsigned char oc)
{
	unsigned char	r;

	r = 0;
	if (oc & 1)
		r += 128;
	if (oc & 2)
		r += 64;
	if (oc & 4)
		r += 32;
	if (oc & 8)
		r += 16;
	if (oc & 16)
		r += 8;
	if (oc & 32)
		r += 4;
	if (oc & 64)
		r += 2;
	if (oc & 128)
		r += 1;
	return (r);
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r;

	r = ft_pwr2(octet);
	return (r);
}
