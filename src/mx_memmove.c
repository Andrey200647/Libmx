#include "libmx.h"

void  *mx_memmove(void *dst, const void *src, size_t len) {
	char *to = dst;
	const char *sourse = src;
	size_t i;
	
	 if (len == 0)
        return NULL;

	if(to <= sourse){
		for(i = 0; i < len; i++){
			to[i] = sourse[i];
		}
	}
	else {
		for (i = len; i > 0; i--){
			to[i] = sourse[i];
		}
	}
	return to;	
}
// int main(){
// 	char src[] = "**********************";
// 	char dst[] = "++++++++++++++++++++++";
// 	printf("%s\n", mx_memmove(dst, src, 22));

// }
