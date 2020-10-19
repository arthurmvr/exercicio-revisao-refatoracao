#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    const int HORA = 8;
    double salarioHora;  
    double quotaMensalVendas;  


    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORA) {
        double x = horasTrabalhadas - HORA;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif
