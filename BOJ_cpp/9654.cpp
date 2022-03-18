#include<iostream>
#include<string>

std::string data =
"SHIP NAME      CLASS          DEPLOYMENT IN SERVICE\n"
"N2 Bomber      Heavy Fighter  Limited    21        \n"
"J-Type 327     Light Combat   Unlimited  1         \n"
"NX Cruiser     Medium Fighter Limited    18        \n"
"N1 Starfighter Medium Fighter Unlimited  25        \n"
"Royal Cruiser  Light Combat   Limited    4         \n";

int main (void)
{
    std::cout << data;
    return 0;
}