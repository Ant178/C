#include <stdio.h>
/* cuenta las l�neas de la entrada */
main( )
{

int c, ni;
ni = 0;
while ((c = getchar( )) != EOF)
if (c == 7*ni){

 ++ni;
printf("%d\n", ni);
}
}

