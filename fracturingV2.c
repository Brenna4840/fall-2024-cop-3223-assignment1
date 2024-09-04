// ******************************************************************
// fracturing.c
// Author: Brenna Aleshire 
// UCFID: 5618666 
// Date: 9/2/23
// Class: COP 3223, Professor Parra
// Purpose: This program computes the answer to specific questions  
// Input: Points for calculation 
// Output: Points and answers 
// ******************************************************************

#include <stdio.h> 
#include <math.h> 

#define PI 3.14 

double calculate_distance( ); 
double calc_distance_no_print( ); 
double calculate_perimeter( ); 
double calculate_area( );
double calculate_width( ); 
double calculate_height( );  
double ask_for_user_input( ); 

int main(int argc, char **argv) 
{
    calculate_distance(); 
    printf("\n"); 
    calculate_perimeter();
    printf("\n"); 
    calculate_area(); 
    printf("\n"); 
    calculate_width(); 
    printf("\n"); 
    calculate_height();  
    printf("\n"); 
    //ask_for_user_input(); 

    return 0; 
}


//********************************************************
// double calculate_distance()
//
// Purpose:          Calculates the distance between two entered points 
// Output:           Asks the user for the points and prints out the answer 
// Precondition:     None.
// Postcondition:    Returns the answer 
//********************************************************
double calculate_distance() 
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

    printf("The distance between the two points is %lf.\n", answer); 

    return answer; 
}


//********************************************************
// double calc_distance_no_print()
//
// Purpose:          Calculates the distance between two entered points 
// Output:           Asks the user for the points  
// Precondition:     None. 
// Postcondition:    Returns the answer 
//********************************************************
double calc_distance_no_print() 
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
// double calculate_perimeter()
//
// Purpose:          Calculates the perimeter between two entered points 
// Output:           Asks the user for the points and prints out the answer
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculate_perimeter()
{
    double answer = PI*calc_distance_no_print(); 

    printf("The perimeter of the city encompassed by your request is %lf. \n", answer); 

    return 5; 
}


//********************************************************
// double calculate_area()
//
// Purpose:          Calculates the perimeter between two entered points 
// Output:           Asks the user for the points and prints out the answer
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculate_area()
{
    double answer = PI * pow((calc_distance_no_print() / 2), 2); 
    
    printf("The area of the city encompassed by your request is %lf. \n", answer); 

    return 5; 
}


//********************************************************
// double calculate_width()
//
// Purpose:          Calculates the width between two entered points 
// Output:           Asks the user for the points and prints out the answer 
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculate_width()
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
    
    printf("The width of the city encompassed by your request is %lf. \n", answer); 

    return 1; 
}


//********************************************************
// double calculate_height()
//
// Purpose:          Calculates the width between two entered points 
// Output:           Asks the user for the points and prints out the answer 
// Precondition:     None. 
// Postcondition:    Dificulty rating 
//********************************************************
double calculate_height()
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
   
    printf("The height of the city encompassed by your request is %lf. \n", answer); 

    return 1; 
}


double ask_for_user_input()
{
    //

//BONUS (Optional):
// Arguments: This function have no arguments.
// Output: This function should output nothing.
// Return: A double representing the user’s typed in value... this will attribute to the DRY method as mentioned earlier and can be applied to the previous functions.
// For example, the graders might inspect to see if you compartmentalize the user input function to avoid repeating the same 4 lines per function... 
}
