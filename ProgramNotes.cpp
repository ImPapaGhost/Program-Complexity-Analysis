//A "Hello World!" Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h>
int main() {
    printf("Hello World\n");
    return 0;
}

//C++
#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//C#
using System;
class Program {
    static void Main(string[] args) {
        Console.WriteLine("Hello, World!");
    }
}

//Python
print("Hello, World!")

//JavaScript
console.log('Hello, World!');

//R
print("Hello World")

//A Variable Naming Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
int main() { 
    int x; 
    x = 10; 
    printf("%d\n", x); 
    return 0; 
} 

//C++
#include <iostream> 
int main() { 
    int x; 
    x = 20; 
    std::cout << x << std::endl; 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        int x; 
        x = 20; 
        Console.WriteLine(x); 
    } 
} 

//Python
x = 20
print(x)

//JavaScript
let x = 10;
console.log(x);

//R
x <- 7 
print(x) 

//An Input Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
int main() { 
    int x; 
    printf("Enter a number: "); 
    scanf("%i", &x); 
    printf("%i\n", x); 
    return 0; 
} 

//C++
#include <iostream> 
int main() { 
    int x; 
    std::cout << "Enter a number: "; 
    std::cin >> x; 
    std::cout << x << std::endl; 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        int x; 
        Console.Write("Enter a number: "); 
        x = int.Parse(Console.ReadLine()); 
        Console.WriteLine(x); 
    } 
} 

//Python
x = int(input("Enter a number: "))
print(x)

//JavaScript(Browser console) For web pages, using a pop-up box to get input
let x = prompt("Enter a number: ");
x = parseInt(x, 10);
console.log(x);

//JavaScript(Node.js) For command line, using the terminal to get input
const readline = require('node:readline'); 
const { stdin: input, stdout: output } = require('node:process'); 
const rl = readline.createInterface({ input, output }); 
rl.question('Enter a number: ', (x) => { 
    console.log(x); 
    rl.close(); 
}); 

//R
px <- as.integer(readline(prompt = "Enter a number: "))
cat(x, "\n")

//A Constant Naming Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
int main() { 
    const int x = 42; 
    printf("%i\n", x); 
    return 0; 
} 

//C++
#include <iostream> 
int main() { 
    const int x = 42; 
    std::cout << x << std::endl; 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        const int x = 42; 
        Console.WriteLine(x); 
    } 
} 

//Python (Variables are written in uppercase to be treated as CONSTANTS)
X = 42
print(X)

//Python (Encapsulate the variable in a method to make it unchangeable)
def constant() :
    return 42

print(constant())

//JavaScript
const x = 42;
console.log(x);

//R (Variables are written in uppercase to be treated as CONSTANTS)
X <- 42
print(X)

//R (Encapsulate the variable in a method to make it unchangeable)
X <- function() {
    return(42)
}
print(X())

//An Operator Program------------------------------------------------------------------------------------------------------

//C (+, -. *, /, %, ++, --, ==, !=, >, <, >=, <=, &&. ||, !, &, |, ^, ~, <<, >>, =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=, sizeof, *, &, ., ->, ? :)
#include <stdio.h> 
int main() { 
    int x = 10; 
    int y = 20; 
    int sum; 
    sum = x + y; 
    printf("%d\n", sum); 
    return 0; 
} 

//C++ (+, -. *, /, %, ++, --, ==, !=, >, <, >=, <=, &&. ||, !, &, |, ^, ~, <<, >>, =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=, sizeof, *, &, ., ->, ? :, ::, ,. .*, ->, static_cast<>, const_cast<>, reinterpet_cast<>) 
#include <iostream> 
int main() { 
    int x = 10; 
    int y = 20; 
    int sum; 
    sum = x + y; 
    std::cout << sum << std::endl; 
    return 0; 
} 

//C# (+, -, *, /, %, ++, --, ==, !=, >, <, >=, <=, &&, ||, !, &, |, ^, ~, <<, >>, =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=, ? :, ??, ??=, ?., ?[], is, as, ., [], (), =>, sizeof, typeof, default, checked, unchecked, new, *, &, ->, [])
using System; 
class Program 
{ 
    static void Main() 
    { 
        int x = 10; 
        int y = 20; 
        int sum; 
        sum = x + y; 
        Console.WriteLine(sum); 
    } 
} 

//Python (+, -, *, /, //, %, **, + (unary), - (unary), ==, !=, >, <, >=, <=, and, or, not, &, |, ^, ~, <<, >>, =, +=, -=, *=, /=, //=, %=, **=, &=, |=, ^=, <<=, >>=, in, not in, is, is not, a if condition else b)
x = 10
y = 20
sum = x + y
print(sum)

//JavaScript (+, -, *, /, %, **, ++, --, -, +, ==, !=, ===, !==, >, <, >=, <=, &&, ||, !, &, |, ^, ~, <<, >>, >>>, =, +=, -=, *=, /=, %=, **=, &=, |=, ^=, <<=, >>=, >>>=, condition ? expr1 : expr2, ,, delete, typeof, void, in, instanceof, ?., ??)
let x = 10;
let y = 20;
let sum = x + y;
console.log(sum);

//R (+, -, *, /, ^, %% (modulus), %/% (integer division), ==, !=, >, <, >=, <=, &, |, &&, ||, !, <-, =, ->, :, %in%, %*%, %o%, %x%)
x < -7
y < -5
sum < -x + y
print(sum)

//A Conditional Program Character Count ------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 

int main() { 
    int age; 
    printf("Enter your age: "); 
    scanf("%i", &age); 
    if (age < 18) { 
        printf("You need to be 18 years old to continue\n"); 
    } 
    return 0; 
} 

//C++
#include <iostream> 
int main() { 
    int age; 
    std::cout << "Enter your age: "; 
    std::cin >> age; 
    if (age < 18) { 
        std::cout << "You need to be 18 years old to continue" << std::endl; 
    } 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        int age; 
        Console.WriteLine("Enter your age: "); 
        age = int.Parse(Console.ReadLine()); 
        if(age < 18) 
        { 
            Console.WriteLine("You need to be at least 18 years old to continue"); 
        } 
    } 
} 

//Python
age = int(input("Enter your age: ")) 
if age < 18: 
    print("You need to be 18 years old to continue") 

//JavaScript (Browser)
const age = prompt("Enter your age: "); 
const ageNumber = Number(age); 
if (ageNumber < 18) { 
    console.log("You need to be 18 years old to continue"); 
} 

//JavaScript (Node.js)
const readline = require('readline'); 
const rl = readline.createInterface({ 
    input: process.stdin, 
    output: process.stdout 
}); 
rl.question('Enter your age: ', (age) => { 
    const ageNumber = Number(age); 
    if (ageNumber < 18) { 
        console.log("You need to be 18 years old to continue"); 
    } 
    rl.close(); 
}); 

//R
age <- as.numeric(readline(prompt = "Enter your age: ")) 
if (age < 18) { 
    cat("You need to be 18 years old to continue\n") 
} 

//A Looping Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 

int main() { 
    for (int x = 1; x <= 5; x++) { 
        printf("%i\n", x); 
    } 
    return 0; 
} 

//C++
#include <iostream> 

int main() { 
    for (int x = 1; x <= 5; x++) { 
        std::cout << x << std::endl; 
    } 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        for (int x = 1; x <= 5; x++) 
        { 
            Console.WriteLine(x); 
        } 
    } 
} 

//Python
for x in range(1, 6) :
    print(x)

//JavaScript
for (let x = 1; x <= 5; x++) {
    console.log(x);
}
// Character count: 56

//R
for (x in 1 : 5)
    print(x)

//A "While" Loop Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
int main() { 
    int x = 1; 
    while (x <= 5) { 
        printf("%i\n", x); 
        x++; 
    } 
    return 0; 
} 

//C++
#include <iostream> 
int main() { 
    int x = 1; 
    while (x <= 5) { 
        std::cout << x << std::endl; 
        x++; 
    } 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        int x = 1; 
        while (x <= 5) 
        { 
            Console.WriteLine(x); 
            x++; 
        } 
    } 
} 

//Python
x = 1 
while x <= 5: 
    print(x) 
    x += 1 

//JavaScript (Browser)
let x = 1; 
while (x <= 5) { 
    console.log(x); 
    x++; 
} 

//JavaScript (Node.js)
let x = 1; 
while (x <= 5) { 
    console.log(x); 
    x++; 
} 

//R
x <- 1 
while (x <= 5) { 
    print(x) 
    x <- x + 1 
} 

//A List Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
int main() { 
    int array[] = {1, 2, 3, 4, 5}; 
    int array_size = sizeof(array) / sizeof(array[0]); 
    for (int x = 0; x < array_size; x++) { 
        printf("%i\n", array[x]); 
    } 
    return 0; 
} 

//C++
#include <iostream> 
int main() { 
    int array[] = {1, 2, 3, 4, 5}; 
    int array_size = sizeof(array) / sizeof(array[0]); 
    for (int x = 0; x < array_size; x++) { 
        std::cout << array[x] << std::endl; 
    } 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        int[] array = {1, 2, 3, 4, 5}; 
        for (int x = 0; x < array.Length; x++) 
        { 
            Console.WriteLine(array[x]); 
        } 
    } 
} 

//Python
x = [1, 2, 3, 4, 5] 
for item in x: 
    print(item) 

//JavaScript
let array = [1, 2, 3, 4, 5]; 
for (let x = 0; x < array.length; x++) { 
    console.log(array[x]); 
} 

//R
x <- c(1, 2, 3, 4, 5) 
cat(x, sep = "\n") 

//A Byte Size Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
int main() { 
    int array[] = {1, 2, 3, 4, 5}; 
    int array_size = sizeof(array); 
    printf("%i bytes\n", array_size); 
    return 0; 
} 

//C++
#include <iostream> 
int main() { 
    int array[] = {1, 2, 3, 4, 5}; 
    int array_size = sizeof(array); 
    std::cout << array_size << " bytes " << std::endl; 
    return 0; 
} 

//C#
using System; 
class Program 
{ 
    static void Main() 
    { 
        int[] array = {1, 2, 3, 4, 5}; 
        int array_size = array.Length * sizeof(int); 
        Console.WriteLine($"{array_size} bytes"); 
    } 
} 

//Python
import sys 
array = [1, 2, 3, 4, 5] 
array_size = sys.getsizeof(array) + sum(sys.getsizeof(item) for item in array) 
print(f"{array_size} bytes") 

//JavaScript
const array = [1, 2, 3, 4, 5]; 
const elementSize = 8; 
const arraySize = array.length * elementSize; 
console.log(`${arraySize} bytes`); 

//R
vector <- c(1, 2, 3, 4, 5) 
vector_size <- object.size(vector) 
print(paste(vector_size, "bytes")) 

//A Simple Polynomials Calculus Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
#include <math.h>
double polynomial(double x, int degree, const double coefficients[]) { 
    double result = 0.0; 
    for (int i = 0; i <= degree; i++) { 
        result += coefficients[i] * pow(x, i); 
    } 
    return result; 
} 

void display_polynomial(int degree, const double coefficients[]) {
    printf("Polynomial: ");
    for (int i = degree; i >= 0; i--) {
        printf("%+lf*x^%d ", coefficients[i], i);
    }
    printf("\n");
}
int main() { 
    int degree; 
    printf("Enter the degree of the polynomial: "); 
    scanf("%d", &degree); 
    double coefficients[degree + 1]; 
    for (int i = 0; i <= degree; i++) { 
        printf("Enter coefficient for x^%d: ", i); 
        scanf("%lf", &coefficients[i]); 
    } 
    display_polynomial(degree, coefficients);
    double x; 
    printf("Enter a value for x: "); 
    scanf("%lf", &x); 
    printf("f(%lf) = %lf\n", x, polynomial(x, degree, coefficients)); 
    return 0; 
} 

//C++
#include <iostream> 
#include <cmath> 
#include <vector> 
double polynomial(double x, int degree, const std::vector<double>& coefficients) { 
    double result = 0.0; 
    for (int i = 0; i <= degree; i++) { 
        result += coefficients[i] * std::pow(x, i); 
    } 
    return result; 
}
void display_polynomial(int degree, const std::vector<double>& coefficients) {
    std::cout << "Polynomial: ";
    for (int i = degree; i >= 0; i--) {
        std::cout << (coefficients[i] >= 0 ? "+" : "") << coefficients[i] << "*x^" << i << " ";
    }
    std::cout << std::endl;
}
int main() { 
    int degree; 
    std::cout << "Enter the degree of the polynomial: "; 
    std::cin >> degree; 
    std::vector<double> coefficients(degree + 1); 
    for (int i = 0; i <= degree; i++) { 
        std::cout << "Enter coefficient for x^" << i << ": "; 
        std::cin >> coefficients[i]; 
    } 
    display_polynomial(degree, coefficients);
    double x; 
    std::cout << "Enter a value for x: "; 
    std::cin >> x; 
    std::cout << "f(" << x << ") = " << polynomial(x, degree, coefficients) << std::endl; 
    return 0; 
} 

//C#
using System; 
class Program { 
    static double Polynomial(double x, int degree, double[] coefficients) { 
        double result = 0.0; 
        for (int i = 0; i <= degree; i++) { 
            result += coefficients[i] * Math.Pow(x, i); 
        } 
        return result; 
    }
    static void DisplayPolynomial(int degree, double[] coefficients) {
        Console.Write("Polynomial: ");
        for (int i = degree; i >= 0; i--) {
            Console.Write($"{(coefficients[i] >= 0 ? "+" : "")}{coefficients[i]}*x^{i} ");
        }
        Console.WriteLine();
    }
    static void Main() { 
        Console.Write("Enter the degree of the polynomial: "); 
        int degree = Convert.ToInt32(Console.ReadLine()); 
        double[] coefficients = new double[degree + 1]; 
        for (int i = 0; i <= degree; i++) { 
            Console.Write($"Enter coefficient for x^{i}: "); 
            coefficients[i] = Convert.ToDouble(Console.ReadLine()); 
        } 
        DisplayPolynomial(degree, coefficients);
        Console.Write("Enter a value for x: "); 
        double x = Convert.ToDouble(Console.ReadLine()); 
        Console.WriteLine($"f({x}) = {Polynomial(x, degree, coefficients)}"); 
    } 
} 

//Python
def polynomial(x, degree, coefficients): 
    result = 0 
    for i in range(degree + 1): 
        result += coefficients[i] * (x ** i) 
    return result 
def display_polynomial(degree, coefficients):
    poly_str = "Polynomial: "
    for i in range(degree, -1, -1):
        poly_str += f"{'+' if coefficients[i] >= 0 else ''}{coefficients[i]}*x^{i} "
    print(poly_str)
degree = int(input("Enter the degree of the polynomial: ")) 
coefficients = [] 
for i in range(degree + 1): 
    coefficients.append(float(input(f"Enter coefficient for x^{i}: "))) 
display_polynomial(degree, coefficients)
x = float(input("Enter a value for x: ")) 
print(f"f({x}) = {polynomial(x, degree, coefficients)}") 

//JavaScript (Browser)
function polynomial(x, degree, coefficients) { 
    let result = 0; 
    for (let i = 0; i <= degree; i++) { 
        result += coefficients[i] * Math.pow(x, i); 
    } 
    return result; 
} 
function displayPolynomial(degree, coefficients) {
    let polyStr = "Polynomial: ";
    for (let i = degree; i >= 0; i--) {
        polyStr += `${coefficients[i] >= 0 ? "+" : ""}${coefficients[i]}*x^${i} `;
    }
    alert(polyStr);
}
let degree = parseInt(prompt("Enter the degree of the polynomial:")); 
let coefficients = []; 
for (let i = 0; i <= degree; i++) { 
    coefficients.push(parseFloat(prompt(`Enter coefficient for x^${i}:`))); 
} 
displayPolynomial(degree, coefficients);
let x = parseFloat(prompt("Enter a value for x:")); 
let result = polynomial(x, degree, coefficients); 
alert(`f(${x}) = ${result}`); 

//JavaScript (Node.js)
const readline = require('readline'); 
const rl = readline.createInterface({ 
    input: process.stdin, 
    output: process.stdout 
}); 
function polynomial(x, degree, coefficients) { 
    let result = 0; 
    for (let i = 0; i <= degree; i++) { 
        result += coefficients[i] * Math.pow(x, i); 
    } 
    return result; 
} 
function displayPolynomial(degree, coefficients) {
    let polyStr = "Polynomial: ";
    for (let i = degree; i >= 0; i--) {
        polyStr += `${coefficients[i] >= 0 ? "+" : ""}${coefficients[i]}*x^${i} `;
    }
    console.log(polyStr);
}
rl.question('Enter the degree of the polynomial: ', (degree) => { 
    degree = parseInt(degree); 
    let coefficients = []; 
    let count = 0; 
    function getCoefficient() { 
        if (count <= degree) { 
            rl.question(`Enter coefficient for x^${count}: `, (coefficient) => { 
                coefficients.push(parseFloat(coefficient)); 
                count++; 
                getCoefficient(); 
            }); 
        } else { 
            displayPolynomial(degree, coefficients);

            rl.question('Enter a value for x: ', (x) => { 
                x = parseFloat(x); 
                let result = polynomial(x, degree, coefficients); 
                console.log(`f(${x}) = ${result}`); 
                rl.close(); 
            }); 
        } 
    } 
    getCoefficient(); 
}); 

//R
polynomial <- function(x, degree, coefficients) { 
    result <- 0 
    for (i in 0:degree) { 
        result <- result + coefficients[i + 1] * x^i 
    } 
    return(result) 
} 
display_polynomial <- function(degree, coefficients) {
    cat("Polynomial: ")
    for (i in degree:0) {
        cat(sprintf("%+f*x^%d ", coefficients[i + 1], i))
    }
    cat("\n")
}
degree <- as.integer(readline(prompt = "Enter the degree of the polynomial: ")) 
coefficients <- numeric(degree + 1) 
for (i in 0:degree) { 
    coefficients[i + 1] <- as.numeric(readline(prompt = paste("Enter coefficient for x^", i, ": ", sep = ""))) 
} 
display_polynomial(degree, coefficients)
x <- as.numeric(readline(prompt = "Enter a value for x: ")) 
cat("f(", x, ") = ", polynomial(x, degree, coefficients), "\n", sep = "")


//A Polynomials Collecting Like Terms Calculus Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h>
#define MAX_DEGREE 100
void multiply_polynomials(int *poly1, int *poly2, int degree1, int degree2, int *result) {
    for (int i = 0; i <= degree1 + degree2; i++) {
        result[i] = 0;
    }
    for (int i = 0; i <= degree1; i++) {
        for (int j = 0; j <= degree2; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }
}
void parse_polynomial(int *poly, int degree) {
    for (int i = 0; i <= degree; i++) {
        printf("Enter the coefficient for y^%d: ", degree - i);
        scanf("%d", &poly[i]);
    }
}
void format_polynomial(int *poly, int degree) {
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i == 0) {
                printf("%d", poly[i]);
            } else if (i == 1) {
                printf("%dy ", poly[i]);
            } else {
                printf("%dy^%d ", poly[i], i);
            }
            if (i > 0 && poly[i-1] > 0) {
                printf("+ ");
            }
        }
    }
    printf("\n");
}
int main() {
    int num_polynomials;
    printf("How many polynomials do you want to multiply? ");
    scanf("%d", &num_polynomials);
    int polynomials[MAX_DEGREE][MAX_DEGREE] = {0};
    int degrees[MAX_DEGREE] = {0};
    for (int i = 0; i < num_polynomials; i++) {
        printf("Enter the degree of polynomial %d: ", i + 1);
        scanf("%d", &degrees[i]);
        parse_polynomial(polynomials[i], degrees[i]);
    }
    int result[MAX_DEGREE * 2] = {0};
    int result_degree = degrees[0];
    for (int i = 0; i <= degrees[0]; i++) {
        result[i] = polynomials[0][i];
    }
    for (int i = 1; i < num_polynomials; i++) {
        int temp_result[MAX_DEGREE * 2] = {0};
        multiply_polynomials(result, polynomials[i], result_degree, degrees[i], temp_result);
        result_degree += degrees[i];
        for (int j = 0; j <= result_degree; j++) {
            result[j] = temp_result[j];
        }
    }
    printf("The resulting polynomial is: ");
    format_polynomial(result, result_degree);
    return 0;
}

//C++
#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, int> multiply_polynomials(const map<int, int> &poly1, const map<int, int> &poly2) {
    map<int, int> result;
    for (auto &term1 : poly1) {
        for (auto &term2 : poly2) {
            int exp = term1.first + term2.first;
            int coeff = term1.second * term2.second;
            result[exp] += coeff;
        }
    }
    return result;
}
map<int, int> parse_polynomial(int degree) { 
    map<int, int> poly; 
    for (int i = degree; i >= 0; i--) { 
        int coeff; 
        cout << "Enter the coefficient for y^" << i << ": "; 
        cin >> coeff; 
        poly[i] = coeff; 
    } 
    return poly; 
} 
string format_polynomial(const map<int, int> &poly) { 
    string result; 
    for (auto it = poly.rbegin(); it != poly.rend(); ++it) { 
        int exp = it->first; 
        int coeff = it->second; 
        if (coeff != 0) { 
            if (!result.empty() && coeff > 0) result += " + "; 
            if (exp == 0) { 
                result += to_string(coeff); 
            } else if (exp == 1) { 
                result += to_string(coeff) + "y"; 
            } else { 
                result += to_string(coeff) + "y^" + to_string(exp); 
            } 
        } 
    } 
    return result; 
} 
int main() { 
    int num_polynomials; 
    cout << "How many polynomials do you want to multiply? "; 
    cin >> num_polynomials; 
    vector<map<int, int>> polynomials(num_polynomials); 
    for (int i = 0; i < num_polynomials; i++) { 
        cout << "Enter the degree of polynomial " << i + 1 << ": "; 
        int degree; 
        cin >> degree; 
        polynomials[i] = parse_polynomial(degree); 
    } 
    map<int, int> result_poly = polynomials[0]; 
    for (int i = 1; i < num_polynomials; i++) { 
        result_poly = multiply_polynomials(result_poly, polynomials[i]); 
    } 
    string polynomial_str = format_polynomial(result_poly); 
    cout << "The resulting polynomial is: " << polynomial_str << endl; 
    return 0; 
} 

//C#
using System; 
using System.Collections.Generic;
class Program { 
    static Dictionary<int, int> MultiplyPolynomials(Dictionary<int, int> poly1, Dictionary<int, int> poly2) { 
        Dictionary<int, int> result = new Dictionary<int, int>(); 
        foreach (var term1 in poly1) { 
            foreach (var term2 in poly2) { 
                int exp = term1.Key + term2.Key; 
                int coeff = term1.Value * term2.Value; 
                if (result.ContainsKey(exp)) { 
                    result[exp] += coeff; 
                } else { 
                    result[exp] = coeff; 
                } 
            } 
        } 
        return result; 
    }
    static Dictionary<int, int> ParsePolynomial(int degree) { 
        Dictionary<int, int> poly = new Dictionary<int, int>(); 
        for (int i = degree; i >= 0; i--) { 
            Console.Write($"Enter the coefficient for y^{i}: "); 
            int coeff = int.Parse(Console.ReadLine()); 
            poly[i] = coeff; 
        } 
        return poly; 
    }
    static string FormatPolynomial(Dictionary<int, int> poly) { 
        List<string> terms = new List<string>(); 
        foreach (var term in poly) { 
            int exp = term.Key; 
            int coeff = term.Value; 
            if (coeff != 0) { 
                if (exp == 0) { 
                    terms.Add($"{coeff}"); 
                } else if (exp == 1) { 
                    terms.Add($"{coeff}y"); 
                } else { 
                    terms.Add($"{coeff}y^{exp}"); 
                } 
            } 
        } 
        return string.Join(" + ", terms).Replace("+ -", "- "); 
    }
    static void Main() { 
        Console.Write("How many polynomials do you want to multiply? "); 
        int numPolynomials = int.Parse(Console.ReadLine()); 
        List<Dictionary<int, int>> polynomials = new List<Dictionary<int, int>>(); 
        for (int i = 0; i < numPolynomials; i++) { 
            Console.WriteLine($"Enter the degree of polynomial {i + 1}: "); 
            int degree = int.Parse(Console.ReadLine()); 
            polynomials.Add(ParsePolynomial(degree)); 
        } 
        Dictionary<int, int> resultPoly = polynomials[0]; 
        for (int i = 1; i < numPolynomials; i++) { 
            resultPoly = MultiplyPolynomials(resultPoly, polynomials[i]); 
        } 
        string polynomialStr = FormatPolynomial(resultPoly); 
        Console.WriteLine("The resulting polynomial is: " + polynomialStr); 
    } 
}

//Python
def multiply_polynomials(poly1, poly2):
    result = {}
    for exp1, coeff1 in poly1.items():
        for exp2, coeff2 in poly2.items():
            exp = exp1 + exp2
            coeff = coeff1 * coeff2
            if exp in result:
                result[exp] += coeff
            else:
                result[exp] = coeff
    return result
def parse_polynomial(degree):
    poly = {}
    for i in range(degree, -1, -1):
        coeff = int(input(f"Enter the coefficient for y^{i}: "))
        poly[i] = coeff
    return poly
def format_polynomial(poly):
    terms = []
    for exp in sorted(poly.keys(), reverse=True):
        coeff = poly[exp]
        if coeff != 0:
            if exp == 0:
                terms.append(f"{coeff}")
            elif exp == 1:
                terms.append(f"{coeff}y")
            else:
                terms.append(f"{coeff}y^{exp}")
    return " + ".join(terms).replace("+ -", "- ")
num_polynomials = int(input("How many polynomials do you want to multiply? "))
polynomials = []
for i in range(num_polynomials):
    print(f"Enter the coefficients for polynomial {i+1}:")
    degree = int(input(f"Enter the degree of polynomial {i+1}: "))
    polynomials.append(parse_polynomial(degree))
result_poly = polynomials[0]
for poly in polynomials[1:]:
    result_poly = multiply_polynomials(result_poly, poly)
polynomial_str = format_polynomial(result_poly)
print("The resulting polynomial is:", polynomial_str)

//JavaScript (Browser)
function multiplyPolynomials(poly1, poly2) {
    let result = {};
    for (let exp1 in poly1) {
        for (let exp2 in poly2) {
            let exp = parseInt(exp1) + parseInt(exp2);
            let coeff = poly1[exp1] * poly2[exp2];
            if (result[exp]) {
                result[exp] += coeff;
            } else {
                result[exp] = coeff;
            }
        }
    }
    return result;
}
function parsePolynomial(degree) {
    let poly = {};
    for (let i = degree; i >= 0; i--) {
        let coeff = parseInt(prompt(`Enter the coefficient for y^${i}: `));
        poly[i] = coeff;
    }
    return poly;
}
function formatPolynomial(poly) {
    let terms = [];
    let keys = Object.keys(poly).map(Number).sort((a, b) => b - a);
    keys.forEach(exp => {
        let coeff = poly[exp];
        if (coeff !== 0) {
            if (exp === 0) {
                terms.push(`${coeff}`);
            } else if (exp === 1) {
                terms.push(`${coeff}y`);
            } else {
                terms.push(`${coeff}y^${exp}`);
            }
        }
    });
    return terms.join(' + ').replace('+ -', '- ');
}
let numPolynomials = parseInt(prompt("How many polynomials do you want to multiply? "));
let polynomials = [];
for (let i = 0; i < numPolynomials; i++) {
    console.log(`Enter the coefficients for polynomial ${i + 1}:`);
    let degree = parseInt(prompt(`Enter the degree of polynomial ${i + 1}: `));
    polynomials.push(parsePolynomial(degree));
}
let resultPoly = polynomials[0];
for (let i = 1; i < numPolynomials; i++) {
    resultPoly = multiplyPolynomials(resultPoly, polynomials[i]);
}
let polynomialStr = formatPolynomial(resultPoly)
console.log("The resulting polynomial is: " + polynomialStr);

//JavaScript (Node.js)
const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
function multiplyPolynomials(poly1, poly2) {
    let result = {};
    for (let exp1 in poly1) {
        for (let exp2 in poly2) {
            let exp = parseInt(exp1) + parseInt(exp2);
            let coeff = poly1[exp1] * poly2[exp2];
            if (result[exp]) {
                result[exp] += coeff;
            } else {
                result[exp] = coeff;
            }
        }
    }
    return result;
}
function parsePolynomial(degree, callback) {
    let poly = {};
    let i = degree;
    function askCoefficient() {
        if (i < 0) {
            callback(poly);
            return;
        }
        rl.question(`Enter the coefficient for y^${i}: `, (answer) => {
            poly[i] = parseInt(answer);
            i--;
            askCoefficient();
        });
    }
    askCoefficient();
}
function formatPolynomial(poly) {
    let terms = [];
    let keys = Object.keys(poly).map(Number).sort((a, b) => b - a);
    keys.forEach(exp => {
        let coeff = poly[exp];
        if (coeff !== 0) {
            if (exp === 0) {
                terms.push(`${coeff}`);
            } else if (exp === 1) {
                terms.push(`${coeff}y`);
            } else {
                terms.push(`${coeff}y^${exp}`);
            }
        }
    });
    return terms.join(' + ').replace('+ -', '- ');
}
rl.question("How many polynomials do you want to multiply? ", (numPolynomialsAnswer) => {
    let numPolynomials = parseInt(numPolynomialsAnswer);
    let polynomials = [];
    let currentPolynomial = 0;
    function getPolynomial() {
        if (currentPolynomial >= numPolynomials) {
            let resultPoly = polynomials[0];
            for (let i = 1; i < numPolynomials; i++) {
                resultPoly = multiplyPolynomials(resultPoly, polynomials[i]);
            }
            let polynomialStr = formatPolynomial(resultPoly);
            console.log("The resulting polynomial is: " + polynomialStr);
            rl.close();
            return;
        }
        console.log(`Enter the coefficients for polynomial ${currentPolynomial + 1}:`);
        rl.question(`Enter the degree of polynomial ${currentPolynomial + 1}: `, (degreeAnswer) => {
            let degree = parseInt(degreeAnswer);
            parsePolynomial(degree, (poly) => {
                polynomials.push(poly);
                currentPolynomial++;
                getPolynomial();
            });
        });
    }
    getPolynomial();
});

//R
multiply_polynomials <- function(poly1, poly2) {
    result <- list()
    for (exp1 in names(poly1)) {
        for (exp2 in names(poly2)) {
            exp <- as.numeric(exp1) + as.numeric(exp2)
            coeff <- poly1[[exp1]] * poly2[[exp2]]
            if (is.null(result[[as.character(exp)]])) {
                result[[as.character(exp)]] <- coeff
            } else {
                result[[as.character(exp)]] <- result[[as.character(exp)]] + coeff
            }
        }
    }
    return(result)
}
parse_polynomial <- function(degree) {
    poly <- list()
    for (i in degree:0) {
        coeff <- as.numeric(readline(paste("Enter the coefficient for y^", i, ": ", sep = "")))
        poly[[as.character(i)]] <- coeff
    }
    return(poly)
}
format_polynomial <- function(poly) {
    terms <- c()
    exponents <- as.numeric(names(poly))
    exponents <- sort(exponents, decreasing = TRUE)
    for (exp in exponents) {
        coeff <- poly[[as.character(exp)]]
        if (coeff != 0) {
            if (exp == 0) {
                terms <- c(terms, as.character(coeff))
            } else if (exp == 1) {
                terms <- c(terms, paste(coeff, "y", sep = ""))
            } else {
                terms <- c(terms, paste(coeff, "y^", exp, sep = ""))
            }
        }
    }
    result <- paste(terms, collapse = " + ")
    result <- gsub("\\+ -", "- ", result)
    return(result)
}
num_polynomials <- as.numeric(readline("How many polynomials do you want to multiply? "))
polynomials <- list()
for (i in 1:num_polynomials) {
    cat("Enter the coefficients for polynomial", i, ":\n")
    degree <- as.numeric(readline(paste("Enter the degree of polynomial", i, ": ")))
    polynomials[[i]] <- parse_polynomial(degree)
}
result_poly <- polynomials[[1]]
for (i in 2:num_polynomials) {
    result_poly <- multiply_polynomials(result_poly, polynomials[[i]])
}
polynomial_str <- format_polynomial(result_poly)
cat("The resulting polynomial is:", polynomial_str, "\n")

//Converting Radians to Degrees and Degrees to Radians Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h>
#define PI 3.141592653589793
double degrees_to_radians(double degrees) {
    return degrees * (PI / 180.0);
}
double radians_to_degrees(double radians) {
    return radians * (180.0 / PI);
} 
int main() {
    int choice;
    double value, result; 
    printf("Choose conversion:\n");
    printf("1. Degrees to Radians\n");
    printf("2. Radians to Degrees\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter degrees to convert to radians: ");
        scanf("%lf", &value);
        result = degrees_to_radians(value);
        printf("%lf degrees is %lf radians\n", value, result);
    } else if (choice == 2) {
        printf("Enter radians to convert to degrees: ");
        scanf("%lf", &value);
        result = radians_to_degrees(value);
        printf("%lf radians is %lf degrees\n", value, result);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}

//C++
#include <iostream> 
#define PI 3.141592653589793 
double degrees_to_radians(double degrees) { 
    return degrees * (PI / 180.0); 
} 
double radians_to_degrees(double radians) { 
    return radians * (180.0 / PI); 
} 
int main() { 
    int choice; 
    double value, result; 
    std::cout << "Choose conversion:\n"; 
    std::cout << "1. Degrees to Radians\n"; 
    std::cout << "2. Radians to Degrees\n"; 
    std::cout << "Enter your choice: "; 
    std::cin >> choice; 
    if (choice == 1) { 
        std::cout << "Enter degrees to convert to radians: "; 
        std::cin >> value; 
        result = degrees_to_radians(value); 
        std::cout << value << " degrees is " << result << " radians\n"; 
    } else if (choice == 2) { 
        std::cout << "Enter radians to convert to degrees: "; 
        std::cin >> value; 
        result = radians_to_degrees(value); 
        std::cout << value << " radians is " << result << " degrees\n"; 
    } else { 
        std::cout << "Invalid choice\n"; 
    } 
    return 0; 
} 

//C#
using System;
class Program {
    const double PI = 3.141592653589793;
    static double DegreesToRadians(double degrees) {
        return degrees * (PI / 180.0);
    }
    static double RadiansToDegrees(double radians) {
        return radians * (180.0 / PI);
    }
    static void Main() {
        Console.WriteLine("Choose conversion:");
        Console.WriteLine("1. Degrees to Radians");
        Console.WriteLine("2. Radians to Degrees");
        Console.Write("Enter your choice: ");
        int choice = Convert.ToInt32(Console.ReadLine());
        if (choice == 1) {
            Console.Write("Enter degrees to convert to radians: ");
            double degrees = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("{0} degrees is {1} radians", degrees, DegreesToRadians(degrees));
        } else if (choice == 2) {
            Console.Write("Enter radians to convert to degrees: ");
            double radians = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("{0} radians is {1} degrees", radians, RadiansToDegrees(radians));
        } else {
            Console.WriteLine("Invalid choice");
        }
    }
}

//Python
PI = 3.141592653589793 
def degrees_to_radians(degrees): 
    return degrees * (PI / 180.0) 
def radians_to_degrees(radians): 
    return radians * (180.0 / PI) 
print("Choose conversion:") 
print("1. Degrees to Radians") 
print("2. Radians to Degrees") 
choice = int(input("Enter your choice: ")) 
if choice == 1: 
    degrees = float(input("Enter degrees to convert to radians: ")) 
    print(f"{degrees} degrees is {degrees_to_radians(degrees)} radians") 
elif choice == 2: 
    radians = float(input("Enter radians to convert to degrees: ")) 
    print(f"{radians} radians is {radians_to_degrees(radians)} degrees") 
else: 
    print("Invalid choice") 
# Character count: 654

//JavaScript
const PI = 3.141592653589793; 
function degreesToRadians(degrees) { 
    return degrees * (PI / 180.0); 
} 
function radiansToDegrees(radians) { 
    return radians * (180.0 / PI); 
} 
console.log("Choose conversion:"); 
console.log("1. Degrees to Radians"); 
console.log("2. Radians to Degrees"); 
const choice = parseInt(prompt("Enter your choice: ")); 
if (choice === 1) { 
    const degrees = parseFloat(prompt("Enter degrees to convert to radians: ")); 
    console.log(`${degrees} degrees is ${degreesToRadians(degrees)} radians`); 
} else if (choice === 2) { 
    const radians = parseFloat(prompt("Enter radians to convert to degrees: ")); 
    console.log(`${radians} radians is ${radiansToDegrees(radians)} degrees`); 
} else { 
    console.log("Invalid choice"); 
} 

//R
PI <- 3.141592653589793 
degrees_to_radians <- function(degrees) { 
    return(degrees * (PI / 180.0)) 
} 
radians_to_degrees <- function(radians) { 
    return(radians * (180.0 / PI)) 
} 
cat("Choose conversion:\n") 
cat("1. Degrees to Radians\n") 
cat("2. Radians to Degrees\n") 
choice <- as.numeric(readline("Enter your choice: ")) 
if (choice == 1) { 
    degrees <- as.numeric(readline("Enter degrees to convert to radians: ")) 
    cat(degrees, "degrees is", degrees_to_radians(degrees), "radians\n") 
} else if (choice == 2) { 
    radians <- as.numeric(readline("Enter radians to convert to degrees: ")) 
    cat(radians, "radians is", radians_to_degrees(radians), "degrees\n") 
} else { 
    cat("Invalid choice\n") 
} 

//Convert Degrees Minutes Seconds to Degrees and Degrees to DMS Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
double dms_to_decimal(int degrees, int minutes, int seconds) { 
    return degrees + minutes / 60.0 + seconds / 3600.0; 
} 
void decimal_to_dms(double decimal_degrees, int *degrees, int *minutes, int *seconds) { 
    *degrees = (int)decimal_degrees; 
    double fractional = (decimal_degrees - *degrees) * 60.0; 
    if (fractional < 0) fractional *= -1; // Convert negative to positive if needed 
    *minutes = (int)fractional; 
    *seconds = (int)((fractional - *minutes) * 60.0); 
} 
int main() { 
    int choice; 
    double decimal_degrees; 
    int degrees, minutes, seconds; 
    printf("Choose conversion:\n"); 
    printf("1. DMS to Decimal Degrees\n"); 
    printf("2. Decimal Degrees to DMS\n"); 
    printf("Enter your choice: "); 
    scanf("%d", &choice); 
    if (choice == 1) { 
        printf("Enter degrees, minutes, and seconds separated by spaces: "); 
        scanf("%d %d %d", &degrees, &minutes, &seconds); 
        decimal_degrees = dms_to_decimal(degrees, minutes, seconds); 
        printf("%d°%d'%d\" is %.6f°\n", degrees, minutes, seconds, decimal_degrees); 
    } else if (choice == 2) { 
        printf("Enter decimal degrees: "); 
        scanf("%lf", &decimal_degrees); 
        decimal_to_dms(decimal_degrees, &degrees, &minutes, &seconds); 
        printf("%.6f° is %d°%d'%d\"\n", decimal_degrees, degrees, minutes, seconds); 
    } else { 
        printf("Invalid choice\n"); 
    } 
    return 0; 
} 

//C++
#include <iostream> 
using namespace std; 
double dms_to_decimal(int degrees, int minutes, int seconds) { 
    return degrees + minutes / 60.0 + seconds / 3600.0; 
} 
void decimal_to_dms(double decimal_degrees, int &degrees, int &minutes, int &seconds) { 
    degrees = static_cast<int>(decimal_degrees); 
    double fractional = (decimal_degrees - degrees) * 60.0; 
    if (fractional < 0) fractional *= -1; // Convert negative to positive if needed 
    minutes = static_cast<int>(fractional); 
    seconds = static_cast<int>((fractional - minutes) * 60.0); 
} 
int main() { 
    int choice; 
    double decimal_degrees; 
    int degrees, minutes, seconds; 
    cout << "Choose conversion:\n"; 
    cout << "1. DMS to Decimal Degrees\n"; 
    cout << "2. Decimal Degrees to DMS\n"; 
    cout << "Enter your choice: "; 
    cin >> choice; 
    if (choice == 1) { 
        cout << "Enter degrees, minutes, and seconds separated by spaces: "; 
        cin >> degrees >> minutes >> seconds; 
        decimal_degrees = dms_to_decimal(degrees, minutes, seconds); 
        cout << degrees << "°" << minutes << "'" << seconds << "\" is " << decimal_degrees << "°" << endl; 
    } else if (choice == 2) { 
        cout << "Enter decimal degrees: "; 
        cin >> decimal_degrees; 
        decimal_to_dms(decimal_degrees, degrees, minutes, seconds); 
        cout << decimal_degrees << "° is " << degrees << "°" << minutes << "'" << seconds << "\"" << endl; 
    } else { 
        cout << "Invalid choice" << endl; 
    } 
    return 0; 
} 

//C#
using System; 
class Program { 
    static double DmsToDecimal(int degrees, int minutes, int seconds) { 
        return degrees + minutes / 60.0 + seconds / 3600.0; 
    } 
    static void DecimalToDms(double decimalDegrees, out int degrees, out int minutes, out int seconds) { 
        degrees = (int)decimalDegrees; 
        double fractional = (decimalDegrees - degrees) * 60.0; 
        if (fractional < 0) fractional *= -1; // Convert negative to positive if needed 
        minutes = (int)fractional; 
        seconds = (int)((fractional - minutes) * 60.0); 
    } 
    static void Main() { 
        Console.WriteLine("Choose conversion:"); 
        Console.WriteLine("1. DMS to Decimal Degrees"); 
        Console.WriteLine("2. Decimal Degrees to DMS"); 
        Console.Write("Enter your choice: "); 
        int choice = int.Parse(Console.ReadLine()); 
        if (choice == 1) { 
            Console.Write("Enter degrees, minutes, and seconds separated by spaces: "); 
            string[] inputs = Console.ReadLine().Split(); 
            int degrees = int.Parse(inputs[0]); 
            int minutes = int.Parse(inputs[1]); 
            int seconds = int.Parse(inputs[2]); 
            double decimalDegrees = DmsToDecimal(degrees, minutes, seconds); 
            Console.WriteLine($"{degrees}°{minutes}'{seconds}\" is {decimalDegrees}°"); 
        } else if (choice == 2) { 
            Console.Write("Enter decimal degrees: "); 
            double decimalDegrees = double.Parse(Console.ReadLine()); 
            DecimalToDms(decimalDegrees, out int degrees, out int minutes, out int seconds); 
            Console.WriteLine($"{decimalDegrees}° is {degrees}°{minutes}'{seconds}\""); 
        } else { 
            Console.WriteLine("Invalid choice"); 
        } 
    } 
} 

//Python
def dms_to_decimal(degrees, minutes, seconds): 
    return degrees + minutes / 60.0 + seconds / 3600.0 
def decimal_to_dms(decimal_degrees): 
    degrees = int(decimal_degrees) 
    fractional = (decimal_degrees - degrees) * 60.0 
    if fractional < 0: 
        fractional = -fractional  # Convert negative to positive if needed 
    minutes = int(fractional) 
    seconds = int((fractional - minutes) * 60.0) 
    return degrees, minutes, seconds 
print("Choose conversion:") 
print("1. DMS to Decimal Degrees") 
print("2. Decimal Degrees to DMS") 
choice = int(input("Enter your choice: ")) 

if choice == 1: 
    degrees = int(input("Enter degrees: ")) 
    minutes = int(input("Enter minutes: ")) 
    seconds = int(input("Enter seconds: ")) 
    decimal_degrees = dms_to_decimal(degrees, minutes, seconds) 
    print(f"{degrees}°{minutes}'{seconds}\" is {decimal_degrees}°") 
elif choice == 2: 
    decimal_degrees = float(input("Enter decimal degrees: ")) 
    degrees, minutes, seconds = decimal_to_dms(decimal_degrees) 
    print(f"{decimal_degrees}° is {degrees}°{minutes}'{seconds}\"") 
else: 
    print("Invalid choice") 

//JavaScript
function dmsToDecimal(degrees, minutes, seconds) { 
    return degrees + minutes / 60.0 + seconds / 3600.0; 
} 
function decimalToDms(decimalDegrees) { 
    const degrees = Math.floor(decimalDegrees); 
    let fractional = (decimalDegrees - degrees) * 60.0; 
    if (fractional < 0) fractional = -fractional; // Convert negative to positive if needed 
    const minutes = Math.floor(fractional); 
    const seconds = Math.floor((fractional - minutes) * 60.0); 
    return { degrees, minutes, seconds }; 
} 
console.log("Choose conversion:"); 
console.log("1. DMS to Decimal Degrees"); 
console.log("2. Decimal Degrees to DMS"); 
const choice = parseInt(prompt("Enter your choice: ")); 
if (choice === 1) { 
    const degrees = parseInt(prompt("Enter degrees: ")); 
    const minutes = parseInt(prompt("Enter minutes: ")); 
    const seconds = parseInt(prompt("Enter seconds: ")); 
    const decimalDegrees = dmsToDecimal(degrees, minutes, seconds); 
    console.log(`${degrees}°${minutes}'${seconds}" is ${decimalDegrees}°`); 
} else if (choice === 2) { 
    const decimalDegrees = parseFloat(prompt("Enter decimal degrees: ")); 
    const { degrees, minutes, seconds } = decimalToDms(decimalDegrees); 
    console.log(`${decimalDegrees}° is ${degrees}°${minutes}'${seconds}"`); 
} else { 
    console.log("Invalid choice"); 
} 

//R
dms_to_decimal <- function(degrees, minutes, seconds) { 
    return(degrees + minutes / 60.0 + seconds / 3600.0) 
}
decimal_to_dms <- function(decimal_degrees) { 
    degrees <- as.integer(decimal_degrees) 
    fractional <- (decimal_degrees - degrees) * 60.0 
    if (fractional < 0) { 
        fractional <- -fractional  # Convert negative to positive if needed 
    } 
    minutes <- as.integer(fractional) 
    seconds <- as.integer((fractional - minutes) * 60.0) 
    return(c(degrees, minutes, seconds)) 
}
cat("Choose conversion:\n") 
cat("1. DMS to Decimal Degrees\n") 
cat("2. Decimal Degrees to DMS\n") 
choice <- as.numeric(readline("Enter your choice: ")) 
if (choice == 1) { 
    degrees <- as.numeric(readline("Enter degrees: ")) 
    minutes <- as.numeric(readline("Enter minutes: ")) 
    seconds <- as.numeric(readline("Enter seconds: ")) 
    decimal_degrees <- dms_to_decimal(degrees, minutes, seconds) 
    cat(degrees, "°", minutes, "'", seconds, "\" is ", decimal_degrees, "°\n") 
} else if (choice == 2) { 
    decimal_degrees <- as.numeric(readline("Enter decimal degrees: "))
    dms <- decimal_to_dms(decimal_degrees)
    cat(decimal_degrees, "° is ", dms[1], "°", dms[2], "'", dms[3], "\"\n")
} else {
    cat("Invalid choice\n")
}
//Arclength and Area------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
double calculate_arclength(double radius, double central_angle) { 
    return radius * central_angle; 
} 
double calculate_area_of_sector(double radius, double central_angle) { 
    return 0.5 * radius * radius * central_angle; 
} 
int main() { 
    double radius, central_angle; 
    printf("Enter the radius of the circle: "); 
    scanf("%lf", &radius); 
    printf("Enter the central angle in radians: "); 
    scanf("%lf", &central_angle); 
    double arclength = calculate_arclength(radius, central_angle); 
    double area_of_sector = calculate_area_of_sector(radius, central_angle); 
    printf("The arclength is: %.2lf meters\n", arclength); 
    printf("The area of the sector is: %.2lf square meters\n", area_of_sector); 
    return 0; 
} 

//C++
#include <iostream> 
using namespace std; 
double calculate_arclength(double radius, double central_angle) { 
    return radius * central_angle; 
} 
double calculate_area_of_sector(double radius, double central_angle) { 
    return 0.5 * radius * radius * central_angle; 
} 
int main() { 
    double radius, central_angle; 
    cout << "Enter the radius of the circle: "; 
    cin >> radius; 
    cout << "Enter the central angle in radians: "; 
    cin >> central_angle; 
    double arclength = calculate_arclength(radius, central_angle); 
    double area_of_sector = calculate_area_of_sector(radius, central_angle); 
    cout << "The arclength is: " << arclength << " meters" << endl; 
    cout << "The area of the sector is: " << area_of_sector << " square meters" << endl; 
    return 0; 
} 

//C#
using System; 
class Program { 
    static double CalculateArclength(double radius, double centralAngle) { 
        return radius * centralAngle; 
    }
    static double CalculateAreaOfSector(double radius, double centralAngle) { 
        return 0.5 * radius * radius * centralAngle; 
    } 
    static void Main() { 
        Console.Write("Enter the radius of the circle: "); 
        double radius = Convert.ToDouble(Console.ReadLine()); 
        Console.Write("Enter the central angle in radians: "); 
        double centralAngle = Convert.ToDouble(Console.ReadLine()); 
        double arclength = CalculateArclength(radius, centralAngle); 
        double areaOfSector = CalculateAreaOfSector(radius, centralAngle); 
        Console.WriteLine("The arclength is: {0} meters", arclength); 
        Console.WriteLine("The area of the sector is: {0} square meters", areaOfSector); 
    } 
} 

//Python
def calculate_arclength(radius, central_angle): 
    return radius * central_angle 
def calculate_area_of_sector(radius, central_angle): 
    return 0.5 * radius * radius * central_angle 
radius = float(input("Enter the radius of the circle: ")) 
central_angle = float(input("Enter the central angle in radians: ")) 
arclength = calculate_arclength(radius, central_angle) 
area_of_sector = calculate_area_of_sector(radius, central_angle) 
print(f"The arclength is: {arclength:.2f} meters") 
print(f"The area of the sector is: {area_of_sector:.2f} square meters") 
# Character count: 516

//JavaScript
function calculateArclength(radius, centralAngle) { 
    return radius * centralAngle; 
}
function calculateAreaOfSector(radius, centralAngle) { 
    return 0.5 * radius * radius * centralAngle; 
} 
const radius = parseFloat(prompt("Enter the radius of the circle: ")); 
const centralAngle = parseFloat(prompt("Enter the central angle in radians: ")); 
const arclength = calculateArclength(radius, centralAngle); 
const areaOfSector = calculateAreaOfSector(radius, centralAngle); 
console.log(`The arclength is: ${arclength.toFixed(2)} meters`); 
console.log(`The area of the sector is: ${areaOfSector.toFixed(2)} square meters`); 

//R
calculate_arclength <- function(radius, central_angle) { 
    return(radius * central_angle) 
} 
calculate_area_of_sector <- function(radius, central_angle) { 
    return(0.5 * radius * radius * central_angle) 
} 
radius <- as.numeric(readline("Enter the radius of the circle: ")) 
central_angle <- as.numeric(readline("Enter the central angle in radians: ")) 
arclength <- calculate_arclength(radius, central_angle) 
area_of_sector <- calculate_area_of_sector(radius, central_angle) 
cat("The arclength is:", sprintf("%.2f", arclength), "meters\n") 
cat("The area of the sector is:", sprintf("%.2f", area_of_sector), "square meters\n") 

//A "Hello World!" Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
#define PI 3.141592653589793 
double calculate_angular_speed(double period) { 
    return 2 * PI / period; 
} 
double calculate_linear_speed(double radius, double angular_speed) { 
    return radius * angular_speed; 
} 
int main() { 
    double radius, period; 
    printf("Enter the radius of the wheel (in meters): "); 
    scanf("%lf", &radius); 
    printf("Enter the period of one revolution (in minutes): "); 
    scanf("%lf", &period); 
    double period_in_seconds = period * 60.0; 
    double angular_speed = calculate_angular_speed(period_in_seconds); 
    double linear_speed = calculate_linear_speed(radius, angular_speed); 
    printf("The angular speed is: %.6f radians per second\n", angular_speed); 
    printf("The linear speed is: %.6f meters per second\n", linear_speed); 
    return 0; 
} 

//C++
#include <iostream>
#define PI 3.141592653589793 
double calculate_angular_speed(double period) { 
    return 2 * PI / period; 
} 
double calculate_linear_speed(double radius, double angular_speed) { 
    return radius * angular_speed; 
} 
int main() { 
    double radius, period; 
    std::cout << "Enter the radius of the wheel (in meters): "; 
    std::cin >> radius; 
    std::cout << "Enter the period of one revolution (in minutes): "; 
    std::cin >> period; 
    double period_in_seconds = period * 60.0; 
    double angular_speed = calculate_angular_speed(period_in_seconds); 
    double linear_speed = calculate_linear_speed(radius, angular_speed); 
    std::cout << "The angular speed is: " << angular_speed << " radians per second" << std::endl; 
    std::cout << "The linear speed is: " << linear_speed << " meters per second" << std::endl; 
    return 0; 
} 

//C#
using System; 
class Program { 
    const double PI = 3.141592653589793; 
    static double CalculateAngularSpeed(double period) { 
        return 2 * PI / period; 
    } 
    static double CalculateLinearSpeed(double radius, double angularSpeed) { 
        return radius * angularSpeed; 
    } 
    static void Main() { 
        Console.Write("Enter the radius of the wheel (in meters): "); 
        double radius = Convert.ToDouble(Console.ReadLine()); 
        Console.Write("Enter the period of one revolution (in minutes): "); 
        double period = Convert.ToDouble(Console.ReadLine()); 
        double periodInSeconds = period * 60.0; 
        double angularSpeed = CalculateAngularSpeed(periodInSeconds); 
        double linearSpeed = CalculateLinearSpeed(radius, angularSpeed); 
        Console.WriteLine("The angular speed is: {0} radians per second", angularSpeed); 
        Console.WriteLine("The linear speed is: {0} meters per second", linearSpeed); 
    } 
} 

//Python
import math 
def calculate_angular_speed(period): 
    return 2 * math.pi / period 
def calculate_linear_speed(radius, angular_speed): 
    return radius * angular_speed 
radius = float(input("Enter the radius of the wheel (in meters): ")) 
period = float(input("Enter the period of one revolution (in minutes): ")) 
period_in_seconds = period * 60.0 
angular_speed = calculate_angular_speed(period_in_seconds) 
linear_speed = calculate_linear_speed(radius, angular_speed)
print(f"The angular speed is: {angular_speed:.6f} radians per second") 
print(f"The linear speed is: {linear_speed:.6f} meters per second") 

//JavaScript
const PI = 3.141592653589793; 
function calculateAngularSpeed(period) { 
    return 2 * PI / period; 
} 
function calculateLinearSpeed(radius, angularSpeed) { 
    return radius * angularSpeed; 
} 
const radius = parseFloat(prompt("Enter the radius of the wheel (in meters): ")); 
const period = parseFloat(prompt("Enter the period of one revolution (in minutes): ")); 
const periodInSeconds = period * 60.0; 
const angularSpeed = calculateAngularSpeed(periodInSeconds); 
const linearSpeed = calculateLinearSpeed(radius, angularSpeed); 
console.log(`The angular speed is: ${angularSpeed.toFixed(6)} radians per second`); 
console.log(`The linear speed is: ${linearSpeed.toFixed(6)} meters per second`); 

//R
calculate_angular_speed <- function(period) { 
    return(2 * pi / period) 
} 
calculate_linear_speed <- function(radius, angular_speed) { 
    return(radius * angular_speed) 
} 
radius <- as.numeric(readline("Enter the radius of the wheel (in meters): ")) 
period <- as.numeric(readline("Enter the period of one revolution (in minutes): ")) 
period_in_seconds <- period * 60.0 
angular_speed <- calculate_angular_speed(period_in_seconds) 
linear_speed <- calculate_linear_speed(radius, angular_speed) 
cat("The angular speed is:", sprintf("%.6f", angular_speed), "radians per second\n") 
cat("The linear speed is:", sprintf("%.6f", linear_speed), "meters per second\n") 

//A "Hello World!" Program------------------------------------------------------------------------------------------------------

//C
#include <stdio.h> 
#include <string.h> 
double degrees_to_radians(double degrees) { 
    return degrees * 3.141592653589793 / 180.0; 
} 
double radians_to_degrees(double radians) { 
    return radians * 180.0 / 3.141592653589793; 
} 
double dms_to_decimal(char* direction, int degrees, int minutes, int seconds) { 
    double decimal = degrees + minutes / 60.0 + seconds / 3600.0; 
    if (direction[0] == 'S' || direction[0] == 'W') { 
        decimal = -decimal; 
    } 
    return decimal; 
} 
void decimal_to_dms(double decimal, char* direction, int* degrees, int* minutes, int* seconds) { 
    if (decimal < 0) { 
        decimal = -decimal; 
        if (strcmp(direction, "N") == 0) { 
            strcpy(direction, "S"); 
        } else if (strcmp(direction, "E") == 0) { 
            strcpy(direction, "W"); 
        } 
    } 
    *degrees = (int) decimal; 
    *minutes = (int) ((decimal - *degrees) * 60.0); 
    *seconds = (int) ((((decimal - *degrees) * 60.0) - *minutes) * 60.0); 
} 
void parse_dms(char* input, char* direction, int* degrees, int* minutes, int* seconds) { 
    sscanf(input, "%s %d° %d' %d\"", direction, degrees, minutes, seconds); 
} 
void parse_decimal(char* input, char* direction, double* decimal) { 
    sscanf(input, "%c%lf", direction, decimal); 
} 
int main() { 
    int choice; 
    printf("Select conversion:\n1. Degrees to Radians\n2. Radians to Degrees\n3. DMS to Decimal\n4. Decimal to DMS\n"); 
    scanf("%d", &choice); 
    getchar(); 
    if (choice == 1) { 
        double degrees; 
        printf("Enter degrees: "); 
        scanf("%lf", &degrees); 
        printf("Radians: %lf\n", degrees_to_radians(degrees)); 
    } else if (choice == 2) { 
        double radians; 
        printf("Enter radians: "); 
        scanf("%lf", &radians); 
        printf("Degrees: %lf\n", radians_to_degrees(radians)); 
    } else if (choice == 3) { 
        char input[100]; 
        char direction[10]; 
        int degrees, minutes, seconds; 
        printf("Enter degrees, minutes, and seconds for latitude: "); 
        getchar(); 
        fgets(input, sizeof(input), stdin); 
        parse_dms(input, direction, &degrees, &minutes, &seconds); 
        double lat_decimal = dms_to_decimal(direction, degrees, minutes, seconds); 
        printf("Enter degrees, minutes, and seconds for longitude: "); 
        fgets(input, sizeof(input), stdin); 
        parse_dms(input, direction, &degrees, &minutes, &seconds); 
        double lon_decimal = dms_to_decimal(direction, degrees, minutes, seconds); 
        printf("Decimal degrees: %lf, %lf\n", lat_decimal, lon_decimal); 
    } else if (choice == 4) { 
        char input[100]; 
        char direction[10]; 
        double decimal; 
        int degrees, minutes, seconds; 
        printf("Enter decimal degrees for latitude: "); 
        getchar(); 
        fgets(input, sizeof(input), stdin); 
        parse_decimal(input, direction, &decimal); 
        decimal_to_dms(decimal, direction, &degrees, &minutes, &seconds); 
        printf("Latitude: %s %d° %d' %d\"\n", direction, degrees, minutes, seconds); 
        printf("Enter decimal degrees for longitude: "); 
        fgets(input, sizeof(input), stdin); 
        parse_decimal(input, direction, &decimal); 
        decimal_to_dms(decimal, direction, &degrees, &minutes, &seconds); 
        printf("Longitude: %s %d° %d' %d\"\n", direction, degrees, minutes, seconds); 
    } else { 
        printf("Invalid choice\n"); 
    } 

    return 0; 
} 

//C++
#include <iostream> 
#include <string> 
using namespace std; 
double degrees_to_radians(double degrees) { 
    return degrees * 3.141592653589793 / 180.0; 
} 
double radians_to_degrees(double radians) { 
    return radians * 180.0 / 3.141592653589793; 
} 
double dms_to_decimal(char direction, int degrees, int minutes, int seconds) { 
    double decimal = degrees + minutes / 60.0 + seconds / 3600.0; 
    if (direction == 'S' || direction == 'W') { 
        decimal = -decimal; 
    } 
    return decimal; 
} 
void decimal_to_dms(double decimal, char &direction, int &degrees, int &minutes, int &seconds) { 
    if (decimal < 0) { 
        decimal = -decimal; 
        if (direction == 'N') direction = 'S'; 
        else if (direction == 'E') direction = 'W'; 
    } 
    degrees = static_cast<int>(decimal); 
    minutes = static_cast<int>((decimal - degrees) * 60.0); 
    seconds = static_cast<int>((((decimal - degrees) * 60.0) - minutes) * 60.0); 
} 
void parse_dms(string input, char &direction, int &degrees, int &minutes, int &seconds) { 
    sscanf(input.c_str(), "%c %d° %d' %d\"", &direction, &degrees, &minutes, &seconds); 
} 
void parse_decimal(string input, char &direction, double &decimal) { 
    sscanf(input.c_str(), "%c%lf", &direction, &decimal); 
} 
int main() { 
    int choice; 
    cout << "Select conversion:\n1. Degrees to Radians\n2. Radians to Degrees\n3. DMS to Decimal\n4. Decimal to DMS\n"; 
    cin >> choice; 
    cin.ignore(); 
    if (choice == 1) { 
        double degrees; 
        cout << "Enter degrees: "; 
        cin >> degrees; 
        cout << "Radians: " << degrees_to_radians(degrees) << endl; 
    } else if (choice == 2) { 
        double radians; 
        cout << "Enter radians: "; 
        cin >> radians; 
        cout << "Degrees: " << radians_to_degrees(radians) << endl; 
    } else if (choice == 3) { 
        string input; 
        char direction; 
        int degrees, minutes, seconds; 
        cout << "Enter degrees, minutes, and seconds for latitude: "; 
        cin.ignore(); 
        getline(cin, input); 
        parse_dms(input, direction, degrees, minutes, seconds); 
        double lat_decimal = dms_to_decimal(direction, degrees, minutes, seconds); 
        cout << "Enter degrees, minutes, and seconds for longitude: "; 
        getline(cin, input); 
        parse_dms(input, direction, degrees, minutes, seconds); 
        double lon_decimal = dms_to_decimal(direction, degrees, minutes, seconds); 
        cout << "Decimal degrees: " << lat_decimal << ", " << lon_decimal << endl; 
    } else if (choice == 4) { 
        string input; 
        char direction; 
        double decimal; 
        int degrees, minutes, seconds; 
        cout << "Enter decimal degrees for latitude: "; 
        cin.ignore(); 
        getline(cin, input); 
        parse_decimal(input, direction, decimal); 
        decimal_to_dms(decimal, direction, degrees, minutes, seconds); 
        cout << "Latitude: " << direction << " " << degrees << "° " << minutes << "' " << seconds << "\"" << endl; 
        cout << "Enter decimal degrees for longitude: "; 
        getline(cin, input); 
        parse_decimal(input, direction, decimal); 
        decimal_to_dms(decimal, direction, degrees, minutes, seconds); 
        cout << "Longitude: " << direction << " " << degrees << "° " << minutes << "' " << seconds << "\"" << endl; 
    } else { 
        cout << "Invalid choice\n"; 
    } 
    return 0; 
} 

//C#
using System; 
class Program { 
    static double DegreesToRadians(double degrees) { 
        return degrees * Math.PI / 180.0; 
    } 
    static double RadiansToDegrees(double radians) { 
        return radians * 180.0 / Math.PI; 
    } 
    static double DMSToDecimal(char direction, int degrees, int minutes, int seconds) { 
        double decimalDegrees = degrees + minutes / 60.0 + seconds / 3600.0; 
        if (direction == 'S' || direction == 'W') { 
            decimalDegrees = -decimalDegrees; 
        } 
        return decimalDegrees; 
    } 
    static void DecimalToDMS(double decimal, ref char direction, out int degrees, out int minutes, out int seconds) { 
        if (decimal < 0) { 
            decimal = -decimal; 
            if (direction == 'N') direction = 'S'; 
            else if (direction == 'E') direction = 'W'; 
        } 
        degrees = (int)decimal; 
        minutes = (int)((decimal - degrees) * 60.0); 
        seconds = (int)((((decimal - degrees) * 60.0) - minutes) * 60.0); 
    } 
    static void ParseDMS(string input, out char direction, out int degrees, out int minutes, out int seconds) { 
        string[] parts = input.Split(new char[] { ' ', '°', '\'', '\"' }, StringSplitOptions.RemoveEmptyEntries); 
        direction = parts[0][0]; 
        degrees = int.Parse(parts[1]); 
        minutes = int.Parse(parts[2]); 
        seconds = int.Parse(parts[3]); 
    } 
    static void ParseDecimal(string input, out char direction, out double decimal) { 
        direction = input[0]; 
        decimal = double.Parse(input.Substring(1)); 
    } 
    static void Main() { 
        Console.WriteLine("Select conversion:\n1. Degrees to Radians\n2. Radians to Degrees\n3. DMS to Decimal\n4. Decimal to DMS"); 
        int choice = int.Parse(Console.ReadLine()); 
        if (choice == 1) { 
            Console.Write("Enter degrees: "); 
            double degrees = double.Parse(Console.ReadLine()); 
            Console.WriteLine("Radians: " + DegreesToRadians(degrees)); 
        } else if (choice == 2) { 
            Console.Write("Enter radians: "); 
            double radians = double.Parse(Console.ReadLine()); 
            Console.WriteLine("Degrees: " + RadiansToDegrees(radians)); 
        } else if (choice == 3) { 
            Console.Write("Enter degrees, minutes, and seconds for latitude: "); 
            string input = Console.ReadLine(); 
            ParseDMS(input, out char direction, out int degrees, out int minutes, out int seconds); 
            double latDecimal = DMSToDecimal(direction, degrees, minutes, seconds); 
            Console.Write("Enter degrees, minutes, and seconds for longitude: "); 
            input = Console.ReadLine(); 
            ParseDMS(input, out direction, out degrees, out minutes, out seconds); 
            double lonDecimal = DMSToDecimal(direction, degrees, minutes, seconds); 
            Console.WriteLine($"Decimal degrees: {latDecimal}, {lonDecimal}"); 
        } else if (choice == 4) { 
            Console.Write("Enter decimal degrees for latitude: "); 
            string input = Console.ReadLine(); 
            ParseDecimal(input, out char direction, out double decimal); 
            DecimalToDMS(decimal, ref direction, out int degrees, out int minutes, out int seconds); 
            Console.WriteLine($"Latitude: {direction} {degrees}° {minutes}' {seconds}\""); 
            Console.Write("Enter decimal degrees for longitude: "); 
            input = Console.ReadLine(); 
            ParseDecimal(input, out direction, out decimal); 
            DecimalToDMS(decimal, ref direction, out degrees, out minutes, out seconds); 
            Console.WriteLine($"Longitude: {direction} {degrees}° {minutes}' {seconds}\""); 
        } else { 
            Console.WriteLine("Invalid choice"); 
        } 
    } 
} 

//Python
def degrees_to_radians(degrees): 
    return degrees * 3.141592653589793 / 180.0 
def radians_to_degrees(radians): 
    return radians * 180.0 / 3.141592653589793 
def dms_to_decimal(direction, degrees, minutes, seconds): 
    decimal = degrees + minutes / 60.0 + seconds / 3600.0 
    if direction in ['S', 'W']: 
        decimal = -decimal 
    return decimal 
def decimal_to_dms(decimal, direction): 
    if decimal < 0: 
        decimal = -decimal 
        if direction == 'N': 
            direction = 'S' 
        elif direction == 'E': 
            direction = 'W' 
    degrees = int(decimal) 
    minutes = int((decimal - degrees) * 60) 
    seconds = int((((decimal - degrees) * 60) - minutes) * 60) 
    return degrees, minutes, seconds, direction 
def parse_dms(input_str): 
    parts = input_str.replace("°", "").replace("'", "").replace("\"", "").split() 
    direction = parts[0] 
    degrees = int(parts[1]) 
    minutes = int(parts[2]) 
    seconds = int(parts[3]) 
    return direction, degrees, minutes, seconds 
def parse_decimal(input_str): 
    direction = input_str[0] 
    decimal = float(input_str[1:]) 
    return direction, decimal 
choice = int(input("Select conversion:\n1. Degrees to Radians\n2. Radians to Degrees\n3. DMS to Decimal\n4. Decimal to DMS\n")) 
if choice == 1: 
    degrees = float(input("Enter degrees: ")) 
    print("Radians:", degrees_to_radians(degrees)) 
elif choice == 2: 
    radians = float(input("Enter radians: ")) 
    print("Degrees:", radians_to_degrees(radians)) 
elif choice == 3: 
    input_str = input("Enter degrees, minutes, and seconds for latitude: ") 
    direction, degrees, minutes, seconds = parse_dms(input_str) 
    lat_decimal = dms_to_decimal(direction, degrees, minutes, seconds) 
    input_str = input("Enter degrees, minutes, and seconds for longitude: ") 
    direction, degrees, minutes, seconds = parse_dms(input_str) 
    lon_decimal = dms_to_decimal(direction, degrees, minutes, seconds) 
    print("Decimal degrees:", lat_decimal, ",", lon_decimal) 
elif choice == 4: 
    input_str = input("Enter decimal degrees for latitude: ") 
    direction, decimal = parse_decimal(input_str) 
    degrees, minutes, seconds, direction = decimal_to_dms(decimal, direction) 
    print(f"Latitude: {direction} {degrees}° {minutes}' {seconds}\"") 
    input_str = input("Enter decimal degrees for longitude: ") 
    direction, decimal = parse_decimal(input_str) 
    degrees, minutes, seconds, direction = decimal_to_dms(decimal, direction) 
    print(f"Longitude: {direction} {degrees}° {minutes}' {seconds}\"") 
else: 
    print("Invalid choice") 

//JavaScript
function degreesToRadians(degrees) { 
    return degrees * Math.PI / 180.0; 
} 
function radiansToDegrees(radians) { 
    return radians * 180.0 / Math.PI; 
} 
function dmsToDecimal(direction, degrees, minutes, seconds) { 
    var decimal = degrees + minutes / 60.0 + seconds / 3600.0; 
    if (direction === 'S' || direction === 'W') { 
        decimal = -decimal; 
    } 
    return decimal; 
} 
function decimalToDMS(decimal, direction) { 
    if (decimal < 0) { 
        decimal = -decimal; 
        if (direction === 'N') direction = 'S'; 
        else if (direction === 'E') direction = 'W'; 
    } 
    var degrees = Math.floor(decimal); 
    var minutes = Math.floor((decimal - degrees) * 60); 
    var seconds = Math.floor(((decimal - degrees) * 60 - minutes) * 60); 
    return [degrees, minutes, seconds, direction]; 
} 
function parseDMS(input) { 
    var parts = input.replace(/[°'\"]/g, "").split(/\s+/); 
    return { 
        direction: parts[0], 
        degrees: parseInt(parts[1]), 
        minutes: parseInt(parts[2]), 
        seconds: parseInt(parts[3]) 
    }; 
} 
function parseDecimal(input) { 
    var direction = input.charAt(0); 
    var decimal = parseFloat(input.substring(1)); 
    return [direction, decimal]; 
} 
var choice = parseInt(prompt("Select conversion:\n1. Degrees to Radians\n2. Radians to Degrees\n3. DMS to Decimal\n4. Decimal to DMS")); 
if (choice === 1) { 
    var degrees = parseFloat(prompt("Enter degrees: ")); 
    console.log("Radians: " + degreesToRadians(degrees)); 
} else if (choice === 2) { 
    var radians = parseFloat(prompt("Enter radians: ")); 
    console.log("Degrees: " + radiansToDegrees(radians)); 
} else if (choice === 3) { 
    var input = prompt("Enter degrees, minutes, and seconds for latitude: "); 
    var dms = parseDMS(input); 
    var latDecimal = dmsToDecimal(dms.direction, dms.degrees, dms.minutes, dms.seconds); 
    input = prompt("Enter degrees, minutes, and seconds for longitude: "); 
    dms = parseDMS(input); 
    var lonDecimal = dmsToDecimal(dms.direction, dms.degrees, dms.minutes, dms.seconds); 
    console.log("Decimal degrees: " + latDecimal + ", " + lonDecimal); 
} else if (choice === 4) { 
    var input = prompt("Enter decimal degrees for latitude: "); 
    var [direction, decimal] = parseDecimal(input); 
    var [degrees, minutes, seconds, dir] = decimalToDMS(decimal, direction); 
    console.log("Latitude: " + dir + " " + degrees + "° " + minutes + "' " + seconds + "\""); 
    input = prompt("Enter decimal degrees for longitude: "); 
    [direction, decimal] = parseDecimal(input); 
    [degrees, minutes, seconds, dir] = decimalToDMS(decimal, direction); 
    console.log("Longitude: " + dir + " " + degrees + "° " + minutes + "' " + seconds + "\""); 
} else { 
    console.log("Invalid choice"); 
} 

//R
function degreesToRadians(degrees) { 
    return degrees * Math.PI / 180.0; 
} 
function radiansToDegrees(radians) { 
    return radians * 180.0 / Math.PI; 
} 
function dmsToDecimal(direction, degrees, minutes, seconds) { 
    var decimal = degrees + minutes / 60.0 + seconds / 3600.0; 
    if (direction === 'S' || direction === 'W') { 
        decimal = -decimal; 
    } 
    return decimal; 
} 
function decimalToDMS(decimal, direction) { 
    if (decimal < 0) { 
        decimal = -decimal; 
        if (direction === 'N') direction = 'S'; 
        else if (direction === 'E') direction = 'W'; 
    } 
    var degrees = Math.floor(decimal); 
    var minutes = Math.floor((decimal - degrees) * 60); 
    var seconds = Math.floor(((decimal - degrees) * 60 - minutes) * 60); 
    return [degrees, minutes, seconds, direction]; 
} 
function parseDMS(input) { 
    var parts = input.replace(/[°'\"]/g, "").split(/\s+/); 
    return { 
        direction: parts[0], 
        degrees: parseInt(parts[1]), 
        minutes: parseInt(parts[2]), 
        seconds: parseInt(parts[3]) 
    }; 
}
function parseDecimal(input) { 
    var direction = input.charAt(0); 
    var decimal = parseFloat(input.substring(1)); 
    return [direction, decimal]; 
} 
var choice = parseInt(prompt("Select conversion:\n1. Degrees to Radians\n2. Radians to Degrees\n3. DMS to Decimal\n4. Decimal to DMS")); 
if (choice === 1) { 
    var degrees = parseFloat(prompt("Enter degrees: ")); 
    console.log("Radians: " + degreesToRadians(degrees)); 
} else if (choice === 2) { 
    var radians = parseFloat(prompt("Enter radians: ")); 
    console.log("Degrees: " + radiansToDegrees(radians)); 
} else if (choice === 3) { 
    var input = prompt("Enter degrees, minutes, and seconds for latitude: "); 
    var dms = parseDMS(input); 
    var latDecimal = dmsToDecimal(dms.direction, dms.degrees, dms.minutes, dms.seconds); 
    input = prompt("Enter degrees, minutes, and seconds for longitude: "); 
    dms = parseDMS(input); 
    var lonDecimal = dmsToDecimal(dms.direction, dms.degrees, dms.minutes, dms.seconds); 
    console.log("Decimal degrees: " + latDecimal + ", " + lonDecimal); 
} else if (choice === 4) { 
    var input = prompt("Enter decimal degrees for latitude: "); 
    var [direction, decimal] = parseDecimal(input); 
    var [degrees, minutes, seconds, dir] = decimalToDMS(decimal, direction); 
    console.log("Latitude: " + dir + " " + degrees + "° " + minutes + "' " + seconds + "\""); 
    input = prompt("Enter decimal degrees for longitude: "); 
    [direction, decimal] = parseDecimal(input); 
    [degrees, minutes, seconds, dir] = decimalToDMS(decimal, direction); 
    console.log("Longitude: " + dir + " " + degrees + "° " + minutes + "' " + seconds + "\""); 
} else { 
    console.log("Invalid choice"); 
} 
