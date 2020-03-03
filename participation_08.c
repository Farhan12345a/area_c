//Farhan Shahbaz

//Williamson



#include <stdio.h>



int main()
{
    
	int width;
    
	int* wPtr = &width;
    
	printf("Please enter the width of the room:\n");
    
	scanf("%d", wPtr);
    
	//printf("Width is: %d\n", *wPtr);
    
    

	int length;
    
	int* lPtr = &length;
    
	printf("Please enter the lenght of the room\n");
    
	scanf("%d", lPtr);
    
	//printf("Length is %d\n", *lPtr);
    
    

	int area;
    
	area = (*lPtr) * (*wPtr);
    
	int* aPtr = &area;
    
    
	
	printf("Area of a room with dimensions %d x %d is: %d ft^2\n", *wPtr, *lPtr, *aPtr);
   
    

	return 0;

}
