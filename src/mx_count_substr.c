#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
  	int i = 0;
  	
  		while (str != NULL) {
  			str = mx_strstr(str, sub);
  			if (str != NULL) {
  				i++;
  				str++;
  			}
  		}
  	return i;
}

// int main(){
// 	char str[] = {"yo", "yo", "yo Neo", NULL};
// 	char sub[] = {"yo", NULL};
// 	printf("%d\n", mx_count_substr(str, sub));
// }
