#include <stdio.h>

extern Range maxSubseq(int const   *sequence , int len ) ;


int main() {
	int const   * sequence;
	int  len;
	alarm(2);
	len = 0;


	maxSubseq(sequence, len);
	return 0;
}
