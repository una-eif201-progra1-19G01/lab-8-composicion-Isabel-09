//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PUERTA_H
#define LAB_7_COMPOSICION_PUERTA_H
#include"Ventana.h"

class Puerta {
	Ventana* ventana;
	bool estado;/* abierta o cerrada*/
public:
	Puerta(Ventana*, bool);
	Puerta();
	void abrirPuerta();
	void cerrarPuerta();
	void abrirVentana();
	void cerrarVentana();
};


#endif //LAB_7_COMPOSICION_PUERTA_H
