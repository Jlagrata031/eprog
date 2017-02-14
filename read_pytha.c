#include <stdio.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.text", "r");


	int i;
	double j;
	int numberArray[2];

	for (i = 0; i < 2; i++){
    fscanf(myFile, "%d", &numberArray[i]);
}
j=sqrt((numberArray[0]*numberArray[0])+(numberArray[1]*numberArray[1]));
printf("%f",(j) );
}
    
