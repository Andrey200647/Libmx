
#include "libmx.h"

void *mx_memset(void *b, int c, size_t len){
	char* s = b;
	while(len--) *s++ = c;
	return s;
}
// //int main(){
// 	char *a = mx_strnew(78);
// 	mx_memset(a, 34, 78);
// 	printf("%s\n", a);
// 	return 0;
// }

