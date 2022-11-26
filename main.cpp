#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Declaración de variables
    double costoDeProduccionMunecas;
    double costoDeProduccionPayasos;
    double precioDeVentaMunecas;
    double precioDeVentaPayasos;
    int cantidadMunecas;
    int cantidadPayasos;
    double pesoTotal;
    int pesoPayaso=112;
    int pesoMuneca=75;
    double costoPorGramo=0.16;
    int munecasFabricadas=500;
    int payasosFabricados=700;
    
    //Leer cantidades
    cout << "BIENVENIDO A JUGUETERÍA LINCE \n";
    cout << "Ingresa la cantidad de muñecas: ";
    cin >> cantidadMunecas; 
    cout << "Ingresa la cantidad de payasos: ";
    cin >> cantidadPayasos; 
   
   //Procesos
   //Calcular costo de producción, precio de venta de las muñecas
   costoDeProduccionMunecas = 10+5*sqrt(munecasFabricadas);
   precioDeVentaMunecas = costoDeProduccionMunecas*2.4;
   //Calcular costo de producción, precio de venta de los payasos
   costoDeProduccionPayasos = 10+5*sqrt(payasosFabricados);
   precioDeVentaPayasos = costoDeProduccionPayasos*2.4;
   //Calcular peso total del paquete
   pesoTotal = cantidadMunecas*pesoMuneca + cantidadPayasos*pesoPayaso;
   
   //Mostrar en pantalla los resultados
   cout << "\n          JUGUETERÍA LINCE \n";
   cout << "         FACTURA DEL PEDIDO \n";
   cout << "No.de muñecas: " << cantidadMunecas << "   No.de payasos: " << cantidadPayasos << "\n";
   cout << "Precio por muñeca: $" << precioDeVentaMunecas << "   Precio por payaso: $" << precioDeVentaPayasos << "\n\n";
   cout << "Costo total muñecas: $" << precioDeVentaMunecas*cantidadMunecas << "\n";
   cout << "Costo total payasos: $" << precioDeVentaPayasos*cantidadPayasos << "\n\n";
   cout << "Peso total del paquete: " << pesoTotal << " gramos\n";
   cout << "Costo del envio: $" << pesoTotal*costoPorGramo << "\n";
   cout << "        Gran total del pedido: $" << precioDeVentaMunecas*cantidadMunecas+precioDeVentaPayasos*cantidadPayasos+pesoTotal*costoPorGramo;
   
   
   
    return 0;
}
