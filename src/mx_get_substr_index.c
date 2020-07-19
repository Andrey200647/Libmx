#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub){

		if(!str || !sub)
			return -2;


		for(int i = 0; i < mx_strlen(str); i++){
			if(str[i] == sub[0])
				while(str[i] != sub[i]){
					return i;
					i++;
					
				}
		}
		return -1;
}

// int main(){
// 	char str[20] = "McDonalds Donuts";
// 	printf("%d\n", mx_get_substr_index(str, "on"));
// }
