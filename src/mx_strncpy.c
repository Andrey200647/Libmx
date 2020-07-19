#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
int i = 0;
	while(i <= len){
		dst[i] = src[i];
		i++;
	}	
	dst[i] = '\0';
return dst;
}
// int main(){
// 	char dst[10];
// 	char src[] = "String";
// 	printf("%s\n", mx_strncpy(dst, src, 3));

// }
