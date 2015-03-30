#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int suma = 0;
    int pierwsza=1;
    int druga=2;
    int trzecia=0;

    while (druga <= 4000000)
    {
          trzecia = pierwsza + druga;
          if (druga % 2 == 0)
          suma += druga;
          pierwsza = druga;
          druga = trzecia;
          }
          
          cout<< suma;
          
          getchar();
          
    return EXIT_SUCCESS;
    
    
}
