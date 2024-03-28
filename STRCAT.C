#include <stdio.h>
#include <string.h>
Int main( )
{
	char source[ ] = " fresh2refresh" ; 
	char target[ ]= " C tutorial" ;
	printf ( "\nSource string = %s", source ) ; 
	printf ( "\nTarget string = %s", target ) ; 
	strcat ( target, source ) ;
	printf ( "\nTarget string after strcat( ) = %s", target ) ;
}
