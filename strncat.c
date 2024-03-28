int main( )
{
	char source[ ] = " fresh2refresh" ; 
	char target[ ]= "C tutorial" ;
	clrscr();
	printf ( "\nSource string = %s", source ) ; 
	printf ( "\nTarget string = %s", target ) ; 
	strncat ( target, source, 5 ) ;
	printf ( "\nTarget string after strncat( ) = %s", target ) ;
	return 0 ;
}
