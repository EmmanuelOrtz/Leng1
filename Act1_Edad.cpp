#include <stdio.h>
#include <iostream>

int main()
{
  int edad;
  std::cout << "Escriba una Edad: "<<std::endl;
  std::cin >>edad;

  if (edad >= 18)
    {
      std::cout << "Esta persona es mayor de Edad" << std::endl;

    }
  else
    std::cout << "Esta persona es menor de edad" << std::endl;

  return 0;
}
