#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

#include "rlutil.h"
#include "FUNCIONES.h"
#include "Fecha.h"



void AnularReserva()
{
    rlutil::setColor(rlutil::YELLOW);
    rectangulo (2, 2, 100, 20);

    rlutil::setColor(rlutil::WHITE);
    rectangulo (28, 4, 33, 1);
    mostrar_mensaje (" ESTAS POR ANULAR UNA RESERVA ", 30, 5);

    mostrar_mensaje (" RESERVAS FUTURAS A ANULAR: ", 10, 9);



   mostrar_mensaje (" CONFIRMAS LA ANULACION (S/N): ", 10, 15);

}

void ConfirmacionAnulacion()
{
    rlutil::setColor(rlutil::YELLOW);
    rectangulo (2, 2, 100, 20);

    rlutil::setColor(rlutil::WHITE);

    mostrar_mensaje (" ACABAS DE ANULAR LA SIGUIENTE RESERVA: ", 10, 6);

    mostrar_mensaje (" MOTIVO DE LA ANULACION: ", 10, 8);



    mostrar_mensaje (" VOLVER AL MENU PRINCIPAL: ", 10, 15);
    mostrar_mensaje (" SALIR DEL SISTEMA: ", 10, 16);

}
