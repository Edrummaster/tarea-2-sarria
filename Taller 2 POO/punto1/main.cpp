
#include "Prueba1.h"
int main(void){
    Papa *p = new Papa ;
    // Imprime ” Clase papa ”
    p -> prueba() ;
    delete p;
    p =new Hijo;
    // Imprime ” Clase hijo ”
    p ->prueba(); 
    delete p;
    return 0;
}
