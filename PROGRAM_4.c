
// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
// result in below given format.

#include<stdio.h>

int main(){
    
    float r ,pi=3.14;

    printf("Enter radius of a circle ");
    scanf("%f",&r);
    printf("Area of circle is %.3f having the radius %.2f",pi*r*r,r);
    return 0;

}

/*
 OUTPUT:
 Enter radius of a circle 5.67
 Area of circle is 100.948 having the radius 5.67 
 */