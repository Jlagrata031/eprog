#include <stdio.h>
int main(){
	int i, arrays[i],num_ones=0;
	for(i=0; i<5; i++){
 		printf("Enter the value %d: ", i+1);
 		scanf("%d", &arrays[i]);
 	}
 	for (i=0; i<5;i++){
 	if(arrays[i] == 1)
 	num_ones++;
 }
	 printf("ones: %d\n",num_ones);
	 printf("zeroes: %d\n",5-num_ones);
 	
 
	 }
	
 
