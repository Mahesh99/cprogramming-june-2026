#include<stdio.h>
int sum();	/* function prototype or function declaration */
int k=10;
int main()
{
	int c;
	c = sum();    	/*function calling */
	printf ("\nThe sum = %d", c);
}
int sum ()		/* Function Definition */
{
	int x, y;
	printf ("\nEnter the values of x and y:  ");
	scanf ("%d%d", &x, &y);
	/* return value to the calling function */
	return x+y;
}


// #include<stdio.h>
// int sum (int , int );
// void main()
// {
// 	int a,b;
// 	printf (“\n Enter the values of a and b:  “);
// 	scanf (“%d%d”, &a, &b);
// 	c = sum (a, b);   
// 	printf (“\n The Sum =%d”, c);
// }
// int sum (int x, int y)
// {
// 	int z;
// 	return x+y;
// }
// }



// #include<stdio.h>
// void sum(int,int);	
// void main ()
// {
// 	int a, b;
// 	printf (“\n Enter the values of a and b:  “);
// 	scanf (“%d%d”, &a, &b);  
// 	sum (a, b);    
// }
// void sum (int x, int y)	
// {
// 	int z;
// 	z=x+y;
// 	printf (“\n The Sum =%d”, z);
// }



// #include<stdio.h>
// void swap (int , int );	
// void main ()
// {
// 	int a, b;
// 	printf (“\n Enter the values of a and b:  “);
// 	scanf (“%d%d”, &a, &b);
// 	swap (a, b);   
//    printf (“\nFrom main The Values of a and b a=%d, b=%d “, a, b);
// }
// void swap (int x, int y)
// {
//  	int temp;
//    	temp=x;
// 	x=y;
// 	y=temp;
//    	printf (“\n The Values of a and b after swapping a=%d, b =%d”, x, y);
// }