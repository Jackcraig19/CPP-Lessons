/**
 *  Parameters, return values, operators
 * 
 *  Gets the sum of 2 numbers in the form a + b
 *  RETURN: sum of both numbers
 */  
int sumTwoNum(const int& a, const int& b);

/**
 *  Prints a square of * characters to the terminal (stdout)
 *  PARAM: width is the width and height of the square
 *  RETURN: nothing
 * 
 *  Example:
 *  width=5
 *  terminal output:
 *  *****
 *  *****
 *  *****
 *  *****
 *  *****
 */ 
void squarePrint(const int& width);

/**
 *  Prints a triangle of * characters to the terminal (stdout)
 *  PARAM: width is the length of * characters to put at the base of the triangle
 *  RETURN: nothing
 *  Example:
 *  width=5
 *  terminal output:
 * 
 *  *
 *  **
 *  ***
 *  ****
 *  *****
 */
void trianglePrint(const int& width);

/**
 *  Iteration
 * 
 *  Calculates the factorial starting at the parameter factorial
 *  RETURN: factorial * (factorial - 1) * (factorial - 2) * ... * (1)
 *  Example: factorial = 6
 *  return: 720 
 *  (6*5*4*3*2*1)
 */
int factorial(const int& factorial);

/**
 *  Recursive calls
 * 
 *  Calculates the "fib" number of the fibonacci sequence fibonacci sequence
 */
int fibonacci(const int& fib);

/**
 *  Array usage
 * 
 *  Gets the sum of the array and returns it
 *  RETURN: sum of all elements in the array
 *  example:
 *  array: [1,5,-3,2] size: 4
 *  return: 5
 */
int getSum(const int purchases[], const int& size);