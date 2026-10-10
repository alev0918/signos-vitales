#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    } else {
        return "Taquicardia";
    }
}

int main() {
    double fahrenheit;
    std::cout << "Temperatura en Fahrenheit: ";
    std::cin >> fahrenheit;

    std::cout << "Temperatura en Celsius: "
              << fahrenheitACelsius(fahrenheit)
              << std::endl;
   
    int lpm;
    std::cout << "Frecuencia cardiaca (lpm): ";
    std::cin >> lpm;

    std::cout << "Clasificacion: "
              << clasificarFrecuencia(lpm)
              << std::endl;

    return 0;
}