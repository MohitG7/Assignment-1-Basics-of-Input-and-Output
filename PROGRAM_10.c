
//10. WAP to take date as an input in below given format and convert the date format and 
//display the result as given below.

#include<stdio.h>
int main()
{
    int DD,MM,YYYY;

    printf("Enter date in DD/MM/YYYY ");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
  
    printf("Day - %d , Month - %d , Year - %d",DD,MM,YYYY);

    return 0;

}

/*
 OUTPUT:
 
 Enter date in DD/MM/YYYY 27/11/2022
 Day - 27 , Month - 11 , Year - 2022

 */