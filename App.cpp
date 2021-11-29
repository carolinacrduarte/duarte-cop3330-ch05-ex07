/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Carolina Duarte
 */

/*
Quadratic equations are of the form:
a · x
2 + b · x + c = 0
To solve these, one uses the quadratic formula:
There is a problem, though: if b2–4ac is less than zero, then it will fail. Write a program that can calculate x for a quadratic equation. Create a function that prints out the roots of a quadratic equation, given a, b, c. When the program detects an equation with no real roots, have it print out a message. How do you know that your results are plausible? Can you check that they are correct?
*/

//Header file.
#include "std_lib_facilities.h" 

void RootPrinter(double root1, double root2);

int main()
{
	double a, b, c, d, root, result1, result2;

	cout << "Quadratic Equation";
	cout << "Enter value for 'a': ";
	cin >> a;
	cout << "Enter value for 'b': ";
	cin >> b;
	cout << "Enter value for 'c': ";
	cin >> c;

    //Calculation that happens under the square root:
	d = (b * b) - (4 * a * c);


	if (d > 0) {
		root = sqrt(d);
        //Calculating using the quadratic formula:
		result1 = (0 - b + root) / (2 * a);
		result2 = (0 - b - root) / (2 * a);

		RootPrinter(result1, result2);
	}
	else if (d == 0) {
		result1 = result2 = (0 - b) / (2 * a);

		RootPrinter(result1, result2);
	}
	else {
		cout << "No roots have been found for the quadratic equation entered.\n";
	}
	return 0;
}

//Function to print root results:
void RootPrinter(double root1, double root2)
{
	if (root1 != root2) {
		cout << "Root number 1 is " << root1 << " and root number 2 is " << root2 << "\n";
	}
	else {
		cout << "Roots are the same, therefore there is only one root, which is: " << root1 << "\n";
	}
	return;
}