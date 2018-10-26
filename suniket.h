//This is Suniket's header file
struct vector cross(struct vector a, struct vector b)
{
	struct vector c;
	c={((a.j*b.k)-(a.k*b.j)),((a.k-b.i)-(a.i*b.k)),((a.i*b.j)-(a.j*b.i))};
	return c;
};