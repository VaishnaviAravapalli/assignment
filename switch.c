#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
#define AREA_CIRCLE PI*R*R
#define AREA_SQUARE S*S
#define AREA_RECTANGLE L*B

void main()
{
     
    float R,L,B,S,area_square,area_rectangle,area_circle;
    int ch;
    printf("\n Enter the radius of a circle");
    scanf("%f",&R);
    printf("\n Enter the length and breadth of the circle");
    scanf("%f %f",&L,&B);
    printf(" \n enter the side of a square ");
    scanf("%f",&S);
    printf(" \nEnter you choice: \n 0-Area of a circle \n 1- Area of a rectangle \n 2-Area of a square \n 3- Exit \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 0: 
            area_circle = AREA_CIRCLE;
         printf("\n Area of circle is %f",area_circle);
          break;
        case 1: 
        area_rectangle =L*B;
        printf("\n Area of circle is %f",area_circle);
        break;
        case 2: 
        area_square =S*S;
        printf("\n Area of circle is %f",area_circle);
        break;
        default : exit(0);
        break;
        
    }
}


