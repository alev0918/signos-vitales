#include <iostream>
double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}
int main() {
      double fahrenheit;

    std::cout << "Temperatura en Fahrenheit: ";
    std::cin >> fahrenheit;

    std::cout << "Temperatura en Celsius: "
              << fahrenheitACelsius(fahrenheit)
              << std::endl;

    return 0;

}