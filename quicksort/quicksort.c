#include "headers.h"

void swap (int *a, int *b) {
	int ax = *a;
	*a = *b;
	*b = ax;
}

int findpivot ( int *target, int len  ) {
	int i=1,pivot=target[0];
	for ( int k=i; k<len; k++ ) {
		if ( target[k]<pivot )
			swap( &target[k],&target[i++] );
	}
	swap ( &target[i-1],&target[0] );
	return i;
}

int* quicksort ( int *target,int len ) {
	int pv;
	if ( len>1 && target ) {
		pv = findpivot( target,len );
		quicksort( target,pv );
		quicksort( target+pv,len-pv );
	}
	return target;
}
