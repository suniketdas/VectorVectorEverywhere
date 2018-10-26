//This is Suniket's header file
struct vector cross(struct vector a, struct vector b)
{
	struct vector c;
	c={((a.2*b.3)-(a.3*b.2)),((a.3-b.1)-(a.1*b.3)),((a.1*b.2)-(a.2*b.1))};
	return c;
};