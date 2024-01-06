// Define PI as the symbolic constant and take radius as input from the user to calculate the area of circle.

#include<stdio.h>
int main()
{
    // define PI as symbolic constant.
    const float PI=3.14;

    // take into from the user
    int r= 14;
    float area=PI*r*r;
    
    // print the value of 
    printf("area %f" ,area);
    return 0;
}
