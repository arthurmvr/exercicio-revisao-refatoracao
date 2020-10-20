#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const int HORA = 8;

class Empregado {

  public:

    double pagamentoMes(double horasTrabalhadas) {

      double horasRemuneradas = horasTrabalhadas;

	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORA) {
        double horasExtra = horasTrabalhadas - HORA;
        horasRemuneradas += horasExtra / 2;
      }
	  return horasRemuneradas * salarioHora;
    }

  protected:
    double salarioHora;
    double quotaMensalVendas;

};

#endif
