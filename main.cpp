
/*
Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.
*/

#include <iostream>
using namespace std;

//Prototipo funcion llamada factor primo
bool factorprimo(int i);

int main(){

    int numero_ingresado;
    int maximo_factor_primo;

    cout << "Ingrese un numero: ";
    cin >> numero_ingresado;

     //Ciclo for para hallar los factores del numero
    for (int i = 1; i <= numero_ingresado; i++){

        //Halla los factores del numero
        if (numero_ingresado % i == 0){

            //El ultimo factor primo hallado es el maximo factor primo
            if (factorprimo(i))
                maximo_factor_primo = i;
        }
    }

    cout << "El mayor factor primo de " << numero_ingresado << " es " << maximo_factor_primo << endl;

    return 0;

}

//Funcion factor primo dice si el factor del numero ingresado es primo
bool factorprimo(int numero){

    int contador = 0;
    bool primo = 0;

    for (int i=1; i<=numero; i++) {

        if ((numero % i) == 0) {
                contador += 1;

                if ((contador > 2) || (numero == 1)) {
                    primo = false;
                }

                else {

                     if ((contador == 2) && (i == numero)){
                         primo = true;
                     }
                }
        }
    }

    return primo;
}
