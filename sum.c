#include "sum.h"

int sum(int n) {
	if(n < 1)
		return -1;

	return ((n*(n+1))/2);
}

