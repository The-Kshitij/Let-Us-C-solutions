#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2;
	printf("Enter\n(L1,L2): ");
	scanf("(%f,%f)",&l1,&l2);
	fflush(stdin);//fflush is used to clear buffer
	printf("(G1,G2): ");
	scanf("(%f,%f)",&g1,&g2);
	printf("Distance between the 2: %f",3963*(acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1))));
	return 1;
}
