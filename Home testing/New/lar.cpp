#include <stdio.h>
int main () {
	int size,i,largest;
	printf("Enter Array Size Num:");
	scanf("%d", &size);
	
	int array[size];
	printf("Enter %d Elements:\n",size);
	for(i=1; i<=size; i++) {
		scanf("%d", &array[i]);
	}
	largest=array[0];
	for(i=0; i<size; i++) {
		if(largest<array[i])
			largest=array[i];
	}
	printf("Largest Number is: %d", largest);
	return 0;
}
