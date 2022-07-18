
/* 11. WAP to take time as an input in below given format and convert the time format and 
 display the result as given below.
 
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
*/

#include<stdio.h>

int main()
{
    int HH,MM;
    printf("Enter a time in HH:MM format ");
    scanf("%d:%d",&HH,&MM);
    printf("%d hour and %d minute",HH,MM);

    return 0;
}

/*
 OUTPUT:
 
 Enter a time in HH:MM format 24:10
 24 hour and 10 minute
 */