// Area Caluculator for 2D figures
#include<stdio.h>
int main()
{
FILE *p;
int fig_code;
float side, base, length, breadth, height, area, radius, upper_parallel_line,lower_parallel_line, diagonal_1, diagonal_2;
p=fopen("area.txt","a");
fprintf(p,"\t\t Area Calculator\n");
fprintf(p,"-------------------------\n");
fprintf(p," 1 --> Circle\n");
fprintf(p," 2 --> Semicircle\n");
fprintf(p," 3 --> Rectangle\n");
fprintf(p," 4 --> Triangle\n");
fprintf(p," 5 --> Square\n");
fprintf(p," 6 --> Parallelogram\n");
fprintf(p," 7 --> Trapezium\n");
fprintf(p," 8 --> Rhombus\n");
fprintf(p,"-------------------------\n");
fprintf(p,"Enter the Figure code\n");
printf("\t\t Area Calculator\n");
printf("-------------------------\n");
printf(" 1 --> Circle\n");
printf(" 2 --> Semicircle\n");
printf(" 3 --> Rectangle\n");
printf(" 4 --> Triangle\n");
printf(" 5 --> Square\n");
printf(" 6 --> Parallelogram\n");
printf(" 7 --> Trapezium\n");
printf(" 8 --> Rhombus\n");
printf("-------------------------\n");
printf("Enter the Figure code\n");
scanf("%d", &fig_code);
switch(fig_code)
{
case 1:
fprintf(p,"Enter the radius\n");
printf("Enter the radius\n");
scanf("%f", &radius);
area = 3.142 * radius * radius;
fprintf(p,"Area of a circle = \"%.3f\"", area);
printf("Area of a circle =\"%.3f\"\n",area);
break;
case 2:
fprintf(p,"Enter the radius\n");
printf("Enter the radius");
scanf("%f", &radius);
area = (3.142 * radius * radius)/2;
fprintf(p,"Area of a circle = \"%.3f\"\n", area);
printf("Area of a circle=\"%.3f\"\n",area);
break;
case 3:
fprintf(p,"Enter the breadth and length with space between them\n");
printf("Enter the breadth and length with space between them\n");
scanf("%f %f", &breadth, &length);
area = breadth * length;
fprintf(p,"Area of a Reactangle = \"%.3f\"\n", area);
printf("Area of a Rectangle = \"%.3f\" \n",area);
break;
case 4:
fprintf(p,"Enter the base and height with space between them\n");
printf("Enter the base and height with space between them\n");
scanf("%f %f", &base, &height);
area = 0.5 * base * height;
fprintf(p,"Area of a Triangle = \"%.3f\"\n", area);
printf("Area of Triangle =\"%.3f\"\n",area);
break;
case 5:
fprintf(p,"Enter the side\n");
printf("Enter the side\n");
scanf("%f", &side);
area = side * side;
fprintf(p,"Area of a Square=\"%.3f\"\n", area);
printf("Area of Square=\"%.3f\"",area);
break;
case 6:
fprintf(p,"Enter the base and height with space between them\n");
printf("Enter the base and height with space between them\n");
scanf("%f %f", &base, &height);
area = base * height;
fprintf(p,"Area of a Parallelogram = \"%.3f\"\n", area);
printf("Area of a Parallelogram = \"%.3f\"\n",area);
break;
case 7:
fprintf(p,"Enter the upper_parallel_line ,lower_parallel_line and height with spaces between them: \n");
printf("Enter the upper_parallel_line ,lower_parallel_line and height with spaces between them: \n");
scanf("%f %f %f", &upper_parallel_line, &lower_parallel_line, &height);
area = 0.5 * (upper_parallel_line+lower_parallel_line) * height;
fprintf(p,"Area of a Trapezium = \"%.3f\"\n", area);
printf("Area of Trapezium = \"%.3f\"\n",area);
break;
case 8:
fprintf(p,"Enter the diagonal_1 and diagonal_2 with space between them: \n");
printf("Enter the diagonal_1 and diagonal_2 with space between them: \n");
scanf("%f %f", &diagonal_1, &diagonal_2 );
area = 0.5 * diagonal_1 * diagonal_2;
fprintf(p,"Area of a Rhombus = \"%.3f\"\n", area);
printf("Area of Rhombus = \"%.3f\"\n",area);
break;
default:
fprintf(p,"Error in figure code\n");
printf("Error in figure code\n");
break;
}
fclose(p);
return 0;
}