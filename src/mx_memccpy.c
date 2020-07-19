#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){
	char *i = (char *)dst;
	char *j = (char *)src;
	size_t a = 0;

	while(j[a] != c && a < n){
		i[a] = j[a];
		a++;
	}
	if(j[a] == c)
		return NULL;
	return dst;
}

// int main(){

// 	size_t n = 15;
// 	char i[] = "232523585353453";
// 	char j[100];
// 	bzero(j, 100);
// 	mx_memccpy(j, i, '8', n);
// 	printf("%s\n", j);
// }
