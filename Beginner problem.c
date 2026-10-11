#include <stdio.h>

int main(){

    //hello world
printf("Hello, World!\n");

// ---------------------------------------------------------------------------------

// Input two numbers and print their sum.

int a,b,sum ;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
sum = a + b;
printf("Sum of %d and %d is: %d\n",a,b,sum); 

// ---------------------------------------------------------------------------------

// Find the area of a rectangle.

int length;
int width;
printf("Enter the length and width of rectangle: ");
scanf("%d %d",&length,&width);
printf("Area of rectangle is: %d\n",length * width);

// ---------------------------------------------------------------------------------

// Convert Celsius to Fahrenheit.

int Celsius;
printf("Enter the temperature in Celsius: ");
scanf("%d",&Celsius);
printf("Temperature in Fahrenheit is: %d\n", (Celsius * 9/5) + 32);

// ---------------------------------------------------------------------------------

// Swap two numbers using a third variable.

int temp, a,b;
printf("Enter the a & b value: ");
scanf("%d",&a);
printf("Enter the b value: ");
scanf("%d",&b);
 
temp = a;
a = b;
b= temp;
printf("%d %d",a , b );

// ---------------------------------------------------------------------------------

// Swap two numbers without using a third variable.

int a,b;
printf("Enter the a value: ");
scanf("%d",&a);
printf("Enter the b value: ");
scanf("%d",&b);

a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("The value of a %d and b %d ", a,b);

// ---------------------------------------------------------------------------------

// Find the square and cube of a number.

int a, square, cude ;
printf("enter the value of a ");
scanf("%d",&a);
square = a*a;
printf("%d\n",square);
cude = a*a*a;
printf("%d\n",cude);

// ---------------------------------------------------------------------------------

// Find the average of three numbers.

int a, b, c, total, temp, count =0, avg;
printf("enter the value of a :");
scanf("%d",&a);
printf("enter the value of b :");
scanf("%d",&b);
printf("enter the value of c :");
scanf("%d",&c);
total = a+b+c;
temp = total;
while (temp != 0) {
    temp = temp / 10;
        count++;
    }
avg = (total)/count;
printf("%d",avg);

// ---------------------------------------------------------------------------------

// Convert days into years, months, and days.

int n;
float years;
float months ;
printf("total number of days : ");
scanf("%d",&n);
years = n/365;
months = n/12;
printf("%f\n ",years);
printf("%f\n",months);

// ---------------------------------------------------------------------------------

//Check whether a number is even or odd.

int n; 
printf("value of n : ");
scanf("%d",&n);
if(n%2 ==0){
    printf("even");
}
else{
    printf("odd");
}
 
// ---------------------------------------------------------------------------------

// Find the largest of three numbers.

int q,w,e;
printf("enter the value of q,w,e : ");
scanf("%d %d %d",&q,&w,&e );
if (q > w && q > e){
    printf("%d", q);
}

if (w > e && w >q){
    printf("%d", w);
}

if (e > q && e > w){
    printf("%d", e);
}

// ---------------------------------------------------------------------------------

// Check whether a year is a leap year.

int year; 
printf("year  : ");
scanf("%d",&year);
if(year %4 ==0){
    printf("leap year");
}
else{
    printf("not a leap year");
}

// ---------------------------------------------------------------------------------
 
// Check whether a character is a vowel or consonant.

char a ;
printf("enter any letter : ");
scanf("%c",&a);
if (a == 'a'|| a == 'e'|| a == 'i'|| a == 'o'|| a == 'u'){
    printf("vowel");
}
else{
    printf("consonant");
}

// ---------------------------------------------------------------------------------

// Check whether a character is uppercase, lowercase, digit, or special character.

char ch ;
printf("enter the value : ");
scanf("%c",&ch);
if(ch >='A' && ch <='Z'){
    printf("uppercase");
}
else if(ch >='a' && ch <='z'){
    printf("lowercase");
}
else if(ch >='0' && ch <='9'){
    printf("numarical value ");
}
else{
    printf("special char");
}

// ---------------------------------------------------------------------------------

// Find whether a number is positive, negative, or zero.

int  n ;
printf("enter the value : ");
scanf("%d",&n );
if (n > 0){
    printf("positive");
}
else if(n < 0){
    printf("negetive");
}
else if(n == 0){
    printf("zero");
}
// ---------------------------------------------------------------------------------

// Build a simple calculator using switch.

int a , b ;
char op;

printf("enter the value of a ");
scanf("%d",&a);

printf("enter the value of b ");
scanf("%d",&b);

printf("enter operator ('+', '-', '/' ,'*') : ");
scanf(" %c", &op);

switch(op){
    case '+':
    printf("%d\n",a + b);
    break;
    case '-':
    printf("%d\n",a - b);
    break;
    case '/':
    printf("%d\n",a / b);
    break;
    case '*':
    printf("%d\n",a * b);
    break;
}
// ---------------------------------------------------------------------------------

// Check whether a number is divisible by both 5 and 11.

int n ;
printf("enter the value of n");
scanf("%d",&n);

if (n% 5 == 0 && n%11 == 0 ){
    printf("%d number is divisible by both 5 and 11",n);
}
else{
    printf("no");
}

// ---------------------------------------------------------------------------------

// Print numbers from 1 to 100.

int n; 
printf("enter the value of n : ");
scanf("%d", &n);
for(int i = 1; i<=n; i ++){
printf("%d\n", i);
}

// ---------------------------------------------------------------------------------

// Print even numbers from 1 to 100.

for(int i =2; i<=100; i+=2 ){
printf("%d\n", i);
}
// ---------------------------------------------------------------------------------

// Print odd numbers from 1 to 100.

for(int i =1; i<=100; i+=2 ){
printf("%d\n", i );
}

// ---------------------------------------------------------------------------------

// Print the multiplication table of a number.

int table; 
printf("enter the table of  : ");
scanf("%d", &table);
for(int i = 1; i<=10; i++){
    int n =( i*table);
printf("%d x %d = %d \n",table, i,n);
}

// ---------------------------------------------------------------------------------

// Find the sum of the first N natural numbers.

int n = 0; 
int sum = 0;
printf("enter the value of n :");
scanf("%d", &n);
for(int i = 0;i<=n;i++){
sum = (sum + i);
}
printf("%d", sum);

// ---------------------------------------------------------------------------------

// Find the factorial of a number.

int n ; 
int sum  =1 ;
printf("enter the value of n :");
scanf("%d", &n);
for(int i = 1;i<=n;i++){
sum = (sum * i);
}
printf("%d", sum);

// ---------------------------------------------------------------------------------

// Reverse a number.

int n; 
printf("enter the value of n : ");
scanf("%d", &n);
for(int i = n; i>=0; i--){
printf("%d\n", i);
}

// ---------------------------------------------------------------------------------

// Check whether a number is a palindrome.

int num ;
int rev = 0;
printf("enter the value of num : ");
scanf("%d", &num);
int org = num;
while(num !=0){
    rev = rev * 10 + num % 10;
    num = num/10;
}
if(org==rev){
    printf("palandrome");
}
else{
    printf("not a palandrome");
}

// ---------------------------------------------------------------------------------
    
// Count the number of digits.

int num ;
int rev = 0;
int i;
printf("enter the value of num : ");
scanf("%d", &num);
for( i = 0 ;num !=0; i++){
    rev = rev * 10 + num % 10;
    num = num/10;
    }
printf("%d \n", i);

// ---------------------------------------------------------------------------------

// Find the product of digits.

int num ;
int sum = 0 ;
int n = 0;
printf("enter the value of num : ");
scanf("%d", &num);
while(num !=0){
    n = num % 10;
    sum = sum +n;
    num = num/10;
    }
printf("%d \n", sum);

// ---------------------------------------------------------------------------------

// Find the first N Fibonacci numbers.

int a = 0; 
 int b = 1;
 int next =0;
for(int i = 1; i<=10; i++) {
    printf("%d\n", a);
    next= a+b;
    a= b;
    b=next;   
}
// ---------------------------------------------------------------------------------

// Print all prime numbers between 1 and N.

  int n; 
    int cout = 0; 
    printf("enter the n value : ");
    scanf("%d",&n);
 for(int i= 1 ; i<=n; i++){
    if (n%i == 0){
    cout++ ;   
    } 
 }
    if(cout == 2){
        printf("%d\n prime number .",n);
    }
    else{
        printf("%d\n not a prime no . ", n);
    }

// ---------------------------------------------------------------------------------

// Check whether a number is prime.

int gcd;
  int lcm;
  int a;
  printf("enter the a number : ");
  scanf("%d", &a);
  int b;
  printf("enter the b number : ");
  scanf("%d", &b);

  for(int i = 1; i<=a && i<=b ; i++){
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
  
// ---------------------------------------------------------------------------------

// Find the GCD and LCM of two numbers.

int n;int n ;
char x = '*' ;
printf("enter the value of n :");
scanf("%d", &n);
    for (int i =0 ; i<=n; i++){
        for(int j = 0; j< i; j++){
            printf("*");
        }
            printf("\n");
    }
// ---------------------------------------------------------------------------------

// *
// **
// ***
// ****
// *****

int n ;
char x = '*' ;
printf("enter the value of n :");
scanf("%d", &n);
    for (int i =0 ; i<=n; i++){
        for(int j = n; j>i; j--){
            printf("*");
        }
            printf("\n");
    }

// ---------------------------------------------------------------------------------

// *****
// ****
// ***
// **
// *
int n ;
char x = '*' ;
printf("enter the value of n :");
scanf("%d", &n);
    for (int i =1 ; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("%d",j);
        }
            printf("\n");
    }

// ---------------------------------------------------------------------------------

// 1
// 12
// 123
// 1234
// 12345

    for (char i ='a' ; i<='d'; i++){
        for(char j = 'a'; j<=i; j++){
            printf("%c",j);
        }
            printf("\n");
    }
// ---------------------------------------------------------------------------------

// A
// AB
// ABC
// ABCD
// ABCDE

    int n ;
    printf("enter the value of n : ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++)
    {
        for(int j =1; j <= n-i;j++ )
        {
            printf(" ");
        }
        for(int j =1; j <= 2*i-1 ;j++ )
        {
            printf("*");
        }
            printf("\n");
    }
    
// ---------------------------------------------------------------------------------


//     *   
//    ***   
//   *****  
//  ******* 
// *********

int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        for(int j =1; j <=n;j++ ){
            printf(" %d",n);
        }
            printf("\n");
    }

// ---------------------------------------------------------------------------------

// 1
// 22
// 333
// 4444
// 55555

int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    for(int i =n; i>=1; i--){
        for(int j =i; j >=1;j-- ){
            printf(" %d",j);
        }
            printf("\n");
    }

// ---------------------------------------------------------------------------------

// 5
// 54
// 543
// 5432
// 54321

int  square (int n){
    printf("%d", n*n);
}
int main() {
square(6);
    return 0;

// ---------------------------------------------------------------------------------

// Write a function to find the factorial.

#include <stdio.h>

int  fact(int n){
    int sum = 1;
    for(int i =1 ; i<=n; i++){
        sum  = (i * sum);
    }
    printf("%d", sum);
}
int main() {
    fact(4);
    return 0;
}

// ---------------------------------------------------------------------------------

// Write a function to find the prime number.

int prime(int n){
    int cout =0;
    for(int i = 1;i<=n; i++ ){
        if(n%i==0){
        cout++;
        }
    }
        if(cout == 2){
            printf("%d is a prime number ",n);
        }
        else{
            printf("%d is not a prime number ",n);
        }
}
int main() {
    int n;
    printf("enter the value of n :");
    scanf("%d", &n);
    prime(n);
    return 0;
}

// ---------------------------------------------------------------------------------

// Write a function to reverse a number.

int reverse (int n){
 int rev = 0;
 for(int i = 1; n!=0; i++){
    rev = rev*10 + n%10;
    n = n/10; 
 }
    printf("%d", rev);
 }
int main() {
    int n;
    printf("enter the value of n :");
    scanf("%d", &n);
    reverse(n);
    return 0;
}

// ---------------------------------------------------------------------------------

// Write a function to find the largest of three numbers.


int largest (int a, int b, int c ){

    if( a>b){
        printf("%d",a);
    }
    else if( b>c){
        printf("%d",b);
    }
    else if( c>a){
        printf("%d",c);
    }
    else{
        printf("equal");
    }
}
int main() {
    int a,b,c;
    printf("enter the value : ");
    scanf("%d %d %d", &a, &b, &c);
    largest(a,b,c);
    return 0;
}

// ---------------------------------------------------------------------------------

// Write a recursive function to calculate factorial.

#include <stdio.h>

int fact(int n){
if(n ==0 || n==1){
    return 1;
}
else{
    return n*fact(n-1);
}
}
int main (){
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}

// ---------------------------------------------------------------------------------

// fibonacci(recursion) = fibonacci(n-1) + fibonacci(n-1) 
 
#include <stdio.h>
int fic(int n){
 if (n==0){
    return 0;
 }
 else if (n==1){
    return 1;
 }
 else{
    return fic(n-1)+ fic(n-2);
 }
}
int main() {
    int n = 0;
    printf("enter the value of n : ");
    scanf("%d", &n);
    for(int i = 1; i<n; i++){
    printf("%d ", fic(i));
    }
    return 0;
}

// ---------------------------------------------------------------------------------

// sum of n natural number : n+ sum(n-1) 

#include <stdio.h>

int sumn(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+(sumn(n-1));
    }

}
int  main(){
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("%d\n",sumn(n));

    return 0;
}

// ---------------------------------------------------------------------------------



// ---------------------------------------------------------------------------------



// ---------------------------------------------------------------------------------
return 0;
}
