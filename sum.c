#include "sum.h"

int sum(int n) {
	if(n < 1)
		return -2;

	return ((n*(n+1))/2);
}

