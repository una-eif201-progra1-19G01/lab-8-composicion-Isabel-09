//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_VENTANA_H
#define LAB_7_COMPOSICION_VENTANA_H


class Ventana {
	bool polarizada;
	bool electrica;
	bool estado;
public:
	Ventana(bool, bool, bool);
	Ventana();
	void abrir();
	void cerrar();
};


#endif //LAB_7_COMPOSICION_VENTANA_H
