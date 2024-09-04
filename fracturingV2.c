// ******************************************************************
// fracturing.c
// Author: Brenna Aleshire 
// UCFID: 5618666 
// Date: 9/4/23
// Class: COP 3223, Professor Parra
// Purpose: This program computes the answer to specific questions  
// Input: Points for calculation 
// Output: Points and answers 
// ******************************************************************

#include <stdio.h> 
#include <math.h> 

#define PI 3.14 

double calculateDistance( ); 
double calcDistanceNoPrint( ); 
double calculatePerimeter( ); 
double calculateArea( );
double calculateWidth( ); 
double calculateHeight( );  
double askForUserInput( ); 

int main(int argc, char **argv) 
{
    calculateDistance(); 
    printf("\n"); 
    calculatePerimeter();
    printf("\n"); 
    calculateArea(); 
    printf("\n"); 
    calculateWidth(); 
    printf("\n"); 
    calculateHeight();  
    printf("\n"); 
    //askForUserInput(); 

    return 0; 
}


//********************************************************
// double calculateDistance()
//
// Purpose:          Calculates the distance between two entered points 
// Output:           Asks the user for the points and prints out the answer 
// Precondition:     None.
// Postcondition:    Returns the answer 
//********************************************************
double calculateDistance() 
{
    double x1 = 0; 
    double y1 = 0; 
    double x2 = 0; 
    double y2 = 0; 

    printf("Point #1 entered: "); 
    scanf("%lf %lf", &x1, &y1); 
    printf("Point #2 entered: "); 
    scanf("%lf %lf", &x2, &y2); 

    double answer = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); 

    printf("The distance between the two points is %0.3lf.\n", answer); 

    return answer; 
}


//********************************************************
// double calcDistanceNoPrint()
//
// Purpose:          Calculates the distance between two entered points 
// Output:           Asks the user for the points  
// Precondition:     None. 
// Postcondition:    Returns the answer 
//********************************************************
double calcDistanceNoPrint() 
{
    double x1 = 0; 
    double y1 = 0; 
    double x2 = 0; 
    double y2 = 0; 

    printf("Point #1 entered: "); 
    scanf("%lf %lf", &x1, &y1); 
    printf("Point #2 entered: "); 
    scanf("%lf %lf", &x2, &y2); 

    double answer = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));   

    return answer; 
}


//********************************************************
// double calculatePerimeter()
//
// Purpose:          Calculates the perimeter between two entered points 
// Output:           Asks the user for the points and prints out the answer
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculatePerimeter()
{
    double answer = PI*calcDistanceNoPrint(); 

    printf("The perimeter of the city encompassed by your request is %0.3lf. \n", answer); 

    return 2; 
}


//********************************************************
// double calculateArea()
//
// Purpose:          Calculates the perimeter between two entered points 
// Output:           Asks the user for the points and prints out the answer
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculateArea()
{
    double answer = PI * pow((calcDistanceNoPrint() / 2), 2); 
    
    printf("The area of the city encompassed by your request is %0.3lf. \n", answer); 

    return 1; 
}


//********************************************************
// double calculateWidth()
//
// Purpose:          Calculates the width between two entered points 
// Output:           Asks the user for the points and prints out the answer 
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculateWidth()
{
    double x1 = 0; 
    double y1 = 0; 
    double x2 = 0; 
    double y2 = 0; 

    printf("Point #1 entered: "); 
    scanf("%lf %lf", &x1, &y1); 
    printf("Point #2 entered: "); 
    scanf("%lf %lf", &x2, &y2); 

    double answer = x2-x1;   
    
    printf("The width of the city encompassed by your request is %0.3lf. \n", answer); 

    return 1; 
}


//********************************************************
// double calculateHeight()
//
// Purpose:          Calculates the width between two entered points 
// Output:           Asks the user for the points and prints out the answer 
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculateHeight()
{
    double x1 = 0; 
    double y1 = 0; 
    double x2 = 0; 
    double y2 = 0; 

    printf("Point #1 entered: "); 
    scanf("%lf %lf", &x1, &y1); 
    printf("Point #2 entered: "); 
    scanf("%lf %lf", &x2, &y2); 

    double answer = y2-y1;   
   
    printf("The height of the city encompassed by your request is %0.3lf. \n", answer); 

    return 1; 
}


double askForUserInput()
{
    //

//BONUS (Optional):
// Arguments: This function have no arguments.
// Output: This function should output nothing.
// Return: A double representing the user’s typed in value... this will attribute to the DRY method as mentioned earlier and can be applied to the previous functions.
// For example, the graders might inspect to see if you compartmentalize the user input function to avoid repeating the same 4 lines per function... 
}
