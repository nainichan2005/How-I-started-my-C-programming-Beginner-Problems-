#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// | Specifier | Data Type                        | Example     |
// | --------- | -------------------------------- | ----------- |
// | `%d`      | `int`                            | `25`        |
// | `%f`      | `float` / `double` (in `printf`) | `3.14`      |
// | `%c`      | `char`                           | `'A'`       |
// | `%s`      | String (`char[]`)                | `"Hello"`   |
// | `%lf`     | `double` (mainly with `scanf`)   | `3.141592`  |
// | `%u`      | `unsigned int`                   | `100`       |
// | `%ld`     | `long int`                       | `123456789` |
// | `%x`      | Hexadecimal                      | `1A`, `FF`  |
// | `%o`      | Octal                            | `17`        |
// | `%p`      | Memory address (pointer)         | `0x7ffd...` |

int main()
{
    printf("Hello, World!\n"); // This is a single line comment

    int number = 12; // integer variable
    char star = '#'; // character variable
    float pi = 3.14; // float variable

    printf("number = %d\n", typeof(number));

    // different ways to declare variables
    int A = 1;
    printf("%d\n", A);
    int a = 10;
    printf("%d\n", a);
    int _age = 21;
    printf("%d\n", _age);
    int final_principal_amount = 1000;
    return 0;
}
//----------------------COMMANDS-------------------------------

// ---------------------ARTHIMETIC OPERATORS---------------------
int main()
{
    int a = 10, b = 5;
    printf("a + b = %d\n", a + b);  // addition operator
    printf("a - b = %d\n", a - b);  // subtraction operator
    printf("a * b = %d\n", a * b);  // multiplication operator
    printf("a / b = %d\n", a / b);  // division operator
    printf("a %% b = %d\n", a % b); // modulus operator
    printf("a++ = %d\n", a++);      // increment operator
    printf("a-- = %d\n", a--);      // decrement operator

    printf("pow(a, b) = %f\n", pow(a, b)); // power function
    return 0;
}

// ---------------------FIND ODD OR EVEN NUMBER---------------------

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is an even number", a);
    }
    else
    {
        printf("%d is an odd number", a);
    }
    return 0;
}

//--------------------------CONDITIONAL STATEMENTS--------------------------

// IF ELSE STATEMENT

int main()
{
    int a;
    printf("Enter the marks of student : ");
    scanf("%d", &a);

    if (a <= 33)
    {
        printf("student is fail");
    }
    else
    {
        printf("student is pass");
    }
    return 0;
}

//--------------------------TERNARY OPERATOR--------------------------

int main()
{
    int a;
    printf("Enter the marks of student : ");
    scanf("%d", &a);

    a <= 33 ? printf("student is fail") : printf("student is pass");
}

// PROBLEM: Write a C program to read a character from the user and print the corresponding grade based on the following criteria:
int main()
{
    int a;
    printf("Enter the student grades : ");
    scanf("%c", &a);

    a == 'A'   ? printf("Excellent")
    : a == 'B' ? printf("Good")
    : a == 'C' ? printf("Average")
               : printf("Invalid grade");

    return 0;
}

// PROBLEM
int main()
{
    int marks;
    printf("enter the marks of the sutdent :");
    scanf("%d", &marks);
    if (marks < 30)
    {
        printf("student is fail");
    }
    else if (marks >= 30 && marks <= 50)
    {
        printf("student is pass");
    }
    else if (marks >= 50 && marks <= 70)
    {
        printf("student is first class");
    }
    else if (marks >= 70 && marks <= 90)
    {
        printf("student is distinction");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("student is topper");
    }
    else
    {
        printf("invalid marks");
    }
    return 0;
}

// ------ -- -- -- -- -- -- -- -- -- -- -- -- --LOOP-- -- -- -- -- -- -- -

int main()
{
    for (int a = 1; a <= 10; a = a + 1)
    {
        printf("%d\n", a);
    }
    for (int b = 10; b >= 1; b = b - 1)
    {
        printf("%d\n", b);
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        printf("%s", &c);
    }
     for(int i = 1;i<=50; i= i+2 ){  //odd number
    printf("%d ",i);
  }
    return 0;
}
// --------------------------------table---------------------------
void main()
{
//   for(int i = 1;i<=50; i= i+2 ){
//     printf("%d ",i);
//   }
int sum ; 
printf("enter the table of : ");
scanf("%d\n enter the value : ", &sum );

  for(int t = 1;t<=10; t++ ){
    printf("%d\n ", t*sum);
  }
    return ;
}

// --------------------------------------FUNCTIONS---------------------------
void i() {
    printf("Namaste\n");
}   
int main() {
    i();
    return 0;
}

// EXAMPLE: Write a C program to read a character from the user and print a greeting based on the region specified by the user. If the user enters 'I' or 'i', print "Namaste". If the user enters 'F' or 'f', print "Bonjour". For any other input, print "Invalid region".

#include <stdio.h>
void i() {
    printf("Namaste\n");
}
void f() {
    printf("bonjor\n");
}
void main() {
  char region ; 
  printf("Enter your region (I for India, F for France): ");
  scanf(" %c", &region);
  
  if (region == 'I' || region == 'i') {
    i();
  } else if (region == 'F' || region == 'f') {
    f();
  } else {
    printf("Invalid region\n");
  }
    return;
}
// ------------------------------------TABLE USING FUNCTION-----------------------------------
int table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i*n);
  }
}
int main()
{
    table(2);
    return 0;
}
// ------------------------------------GST FUNCTION-----------------------------------

int gst(int n){
  printf("%d\n", n* 18/100 + n);
}
int main(){
  int n;
  printf("Enter the amount : ");
  scanf("%d", &n);
  gst(n);
  return 0;
}
// -----------------------------------------sum of n natural number ---------------------------
#include <stdio.h>

int sum(int n)
{
    if (n == 1)
        return 1;
    else;
        return n + sum(n - 1);
    
}
int main()
{
    int n;
    printf("enter the value : ");
    scanf("%d",&n);
    int result =sum(n);
    
    
    
    printf("\n sum of %d natural number : %d ",n ,  result);
    
    return 0;
}
// ------------------------------------------- factorial of  n in recursion ---------------------------
#include <stdio.h>

int fac(int n ){
    if( n ==1){
        return 1;
    }
    {
        return n*fac(n-1);
    }
}
int main(){
    int n;
    printf("enter the value : ");
    scanf("%d", &n);
    printf("%d\n",fac(n));
    return 0;
}
// --------------------------------------------convert Celsius (°C) to Fahrenheit (°F)--------------------
# include <stdio.h>

int ce_f(int n){
    return ((n *9/5 )+ 32);
}
int main (){
    int n;
    printf("enter the celcius : ");
    scanf("%d", &n);
    printf("the value of %d C into F is : %d", n, ce_f(n));
    return 0;
}

// --------------------------------percentage of three subject--------------------
#include <stdio.h>

float per(int maths, int science, int english) {
        return (((maths + science + english)*100.0)/300);
    }

int main()
{
    int maths;
    int science;
    int english;
    printf("enter the marks of MATHS : ");
    scanf("%d", &maths);
    printf("enter the marks of science : ");
    scanf("%d", &science);
    printf("enter the marks of english : ");
    scanf("%d", &english);
    printf ("percentage of all three subjects are %f",per(maths, science ,english));
    return 0;
}