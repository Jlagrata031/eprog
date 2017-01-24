#include<stdio.h>
#include<math.h>
int main(){
int j,i,num;
		printf("Input num: ");
		scanf("%d", &num);
	for(i=0;i<num;i++){
 	for(j=0;j<i;j++)
 { printf("*"); }
  printf("\n"); } 
  for(i=0;i<num;i++)
	{ for(j=num;j>i;j--){
printf("*");
}
printf("\n");
}
system("pause");
}
