#include <iostream>

int main ()
{
struct person
{
    int telefonnummer;
    const char* navn;
};

person Ulrik {8000000, "Ulrik"};

std::cout << "Personen" << Ulrik.navn << std::endl;
std::cout << "Har telefonnummer" << Ulrik.telefonnummer << std::endl;
}
