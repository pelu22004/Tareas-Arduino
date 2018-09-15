#include <io.h>
#include <conio.h>
#include <stdio.h>
main ()
{
	int x,R;
	printf ("introduzca valor de la variable X: ");
	scanf("%d",&x);
	R=0;
	R=2*(x*x)+3*(x)+2;
	printf("el resultado es %d",R);
	return 0;
	
}
