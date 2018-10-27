//This is Suniket's header file
void input(struct vector *a)
{
	printf("\nplease enter your i complonent ::");
	scanf("%d",&(a->i));
	printf("\nplease enter your j complonent ::");
	scanf("%d",&(a->j));
	printf("\nplease enter your k complonent ::");
	scanf("%d",&(a->k));
}
struct vector cross(struct vector a, struct vector b)
{
	struct vector c;
	c={((a.j*b.k)-(a.k*b.j)),((a.k-b.i)-(a.i*b.k)),((a.i*b.j)-(a.j*b.i))};
	return c;
};