#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float i;
float j;
float k;
float l;
float m;
float n;
float o;
float di;
float gst;
float tp;
char start;
char option;




int main()
{

	
printf("                                        WELCOME TO DISCOUNT CALCULATOR\n");	

printf("                                                                                                                     \n");

printf("                                                                                                                     \n");

printf("Enter the price of the 1st bought thing:");
scanf("%f", & a);

printf("                                                                                                                     \n");

printf("Enter the price of the 2nd bought thing:");
scanf("%f", & b);

printf("                                                                                                                     \n");

printf("Enter the price of the 3rd bought thing:");
scanf("%f", & c);

printf("                                                                                                                     \n");

printf("Enter the price of the 4th bought thing:");
scanf("%f", & d);

printf("                                                                                                                     \n");

printf("Enter the price of the 5th bought thing:");
scanf("%f", & e);

printf("                                                                                                                     \n");

printf("Enter the price of the 6th bought thing:");
scanf("%f", & f);

printf("                                                                                                                     \n");

printf("Enter the price of the 7th bought thing:");
scanf("%f", & g);

printf("                                                                                                                     \n");

printf("Enter the price of the 8th bought thing:");
scanf("%f", & h);

printf("                                                                                                                     \n");

printf("Enter the price of the 9th bought thing:");
scanf("%f", & i);

printf("                                                                                                                     \n");

printf("Enter the price of the 10th bought thing:");
scanf("%f", & j);

printf("                                                                                                                     \n");

printf("Enter the price of the 11th bought thing:");
scanf("%f", & k);

printf("                                                                                                                     \n");

printf("Enter the price of the 12th bought thing:");
scanf("%f", & l);

printf("                                                                                                                     \n");

printf("Enter the price of the 13th bought thing:");
scanf("%f", & m);

printf("                                                                                                                     \n");

printf("Enter the price of the 14th bought thing:");
scanf("%f", & n);

printf("                                                                                                                     \n");

printf("Enter the price of the 15th bought thing:");
scanf("%f", & o);

printf("                                                                                                                     \n");

printf("                                                                                                                     \n");


printf("->Your ingredent price is Rs. %f \n", a+b+c+d+e+f+g+h+i+j+k+l+m+n+o);

printf("                                                                                                                     \n");

printf("*********Verify the ingredent price*********:");
scanf("%f", & tp);

printf("                                                                                                                     \n");

printf("Enter the GST percentage:");
scanf("%f", & gst);
 
printf("                                                                                                                     \n");

printf("->Your GST price is Rs. %f.\n", tp*gst/100);

printf("                                                                                                                     \n");

printf("->Your total price without any discount is Rs. %f\n", tp+tp*gst/100);

printf("                                                                                                                     \n");

printf("                                                                                                                     \n");

printf("Enter the amount of discount you want to put:");
scanf("%f", & di);

printf("                                                                                                                     \n");

printf("                                                                                                                     \n");

float ip=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o;
float gstp=tp/100*gst;
float tpp=tp+tp/100*gst;
float tppp=tpp-tpp*di/100;

printf("=>YOUR TOTAL PRICE IS %f\n", tppp);


printf("                                                                                                                     \n");

printf("                                                                                                                     \n");
printf("----->BYE BYE!!<----\n");

printf("----->SEE YOU SOON AGAIN<----");

}
