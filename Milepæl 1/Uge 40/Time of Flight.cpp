#include <iostream>




int main()
{
// Deklarer variabler 
double formue, renteProcent, rente, formueTotal;

// Bruger input
std::cout << "Angiv formue:";
std::cin >> formue;

// Hvis betingelser
if (formue <1000000);
{
    rente = formue * (2.5 / 100);
}

else if (formue >100000 & <250000);
{
    rente = formue * (3.75 / 100);
}

else if (formue >250000);
{
    rente = formue * (5 / 100);
}

//Beregning af samlet formue efter et år
formueTotal = formue + rente;

//Vis resultat
std::cout << "Renter efter et år" << rente << std::endl;
std::cout << "Samlet formue efter et år:" << formueTotal << std::endl;

return 0;
}
