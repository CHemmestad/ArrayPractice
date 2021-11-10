#include <iostream>

using namespace std ;

int main( ) {
	
	//100 random numbers in an array
	//display even numbers first in order
	//display odd numbers second in order
	//put in original array
	
	float randomNums [ 100 ] ;
	float evenOdd [ 100 ] ;
	int smallToLarge [ 100 ] ;
	
	int L = 0 ;
	int R = 99 ;
	int S = 0 ;
	
	for ( int x = 0 ; x < 100 ; x++ ) {
		randomNums [ x ] = rand( ) %100+1 ;
		cout << randomNums [ x ] << endl ;
		if ( ( ( randomNums [ x ] / 2 ) - int ( randomNums [ x ] / 2 ) ) == .5 ) {
			cout << "Odd" << endl ;
			evenOdd [ R ] = randomNums [ x ] ;
			R-- ;
		} else {
			cout << "Even" << endl ;
			evenOdd [ L ] = randomNums [ x ] ;
			L++ ;
		}
	}
	cout << endl ;
	
	for ( int x = 0 ; x < 100 ; x++ ) {
		randomNums [ x ] =  evenOdd [ x ] ;
		cout << randomNums [ x ] << endl ;
	}
	
	L = 0 ;
	R = 99 ;
	
	cout << endl ;
	
	do {
		for ( int x = 0 ; x < 100 ; x++ ) {
			if ( ( ( randomNums [ x ] / 2 ) - int ( randomNums [ x ] / 2 ) ) != .5 ) {
				if ( randomNums [ x ] == x ) {
					smallToLarge [ S ] = x ;
					cout << x ;
					S++ ;
				}
			}
		}
	}
	while ( S != 30 ) ;
	
	return 0 ;
}
