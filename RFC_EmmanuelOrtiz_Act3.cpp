#include <iostream>
#include <string>

 
class Empleado{
private:
     std::string nombre;
     std::string apellidoPaterno;
     std::string apellidoMaterno;
     std::string fechaNacimiento;
public:
 void capturaDatos(){
     std::cout <<"Ingrese su nombre: ";
     std::getline(std::cin>>std::ws, nombre);
     
     std::cout <<"Ingrese su apellido paterno: ";
     std::getline(std::cin>>std::ws, apellidoPaterno);
     
     std::cout <<"Ingrese su apellido materno: ";
     std::getline(std::cin>>std::ws, apellidoMaterno);
     
     std::cout <<"Ingrese su fecha de nacimiento: ";
     std::getline(std::cin>>std::ws, fechaNacimiento);
 }
 std::string generarRFC(){
     std::string rfc;
     
     //2 caracteres
     rfc+= apellidoPaterno[0];
     for (char c: apellidoPaterno){
         if (c == 'A' || c == 'E' || c == 'I' || c== 'O' || c == 'U'){
             rfc += c;
             break;
        }
     }
     //3 caracter
     if(apellidoMaterno.empty()){
         rfc +='X';
     } else{
       rfc += apellidoMaterno[0];  
     }
     //4 caracter
     rfc += (nombre[0] == 'Ñ')?'X':nombre[0];
     //5 y 6 catacter
     rfc += fechaNacimiento.substr(8,2);
     //7 y 8 caracter
     rfc += fechaNacimiento.substr(3,2);
     //9 y 10 caracterer
     rfc += fechaNacimiento.substr(0,2);
     
     return rfc;
    }
 };
 
 int main() {
     Empleado empleado;
     
     empleado.capturaDatos();
     std::string rfc=empleado.generarRFC();
     
     std::cout<<"El RFC generado es: "<<rfc<<std::endl;
     
     return 0; 
     
 }
     
 
 
 
 
 
 