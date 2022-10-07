#include <iostream>
#include <cmath>

// using namespace std
int main() {
    int file_size = 100;
    double sales = 9.99;
    std::cout << "Hi mom" ;
    std::cout << file_size ;

    // exercise1: swap two values
    int a = 1;
    int b = -1;
    int tmp = 0;

    tmp = a;
    a = b;
    b = tmp;
    std::cout << a;


    // declare a constant in c++
    const double pi = 3.14;

    int food_price; // Snake Case convention
    int FoodPrice; // Pascal Case
    int foodPrice; // Camel Case

    // x++ vs. ++x
    int x = 10;
    int y = x++;
    int z = ++x;
    std::cout << x; // 12
    std::cout << y; // 10 = assign y = x = 10 first, then x ++
    std::cout << z; // 12 = ++x first to 11+1 = 12 and then assign

    std::cout << "\nhmmm lets see" << std::endl; // endl kind of same to \n
    std::cout << "\nwell we can chain x = " << x;

    // exercise 2:
    double salary = 95000;
    double stateTax = salary * 0.04;
    double countyTax = salary * 0.02;
    std::cout << "County Tax = $" << countyTax << std::endl;

    // reading from the console
    std::cout << "Enter a value: \n";
    int value;
    std::cin >> value; // cin can also be chained like cin >> x >> y
    std::cout << value << std::endl;

    /*
     * multi-line comment, type "/*" and then hit enter
     */

    double result = floor(2.2);
    std::cout << result << std::endl;
    return 0;
}