#include <string>
#include "Empregado.hpp"
const int MESES = 12;

class Vendedor : public Empregado {

  public:
    Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas){
      nome = _nome;
      salarioHora = _salarioHora;
      quotaMensalVendas = _quotaMensalVendas;
    }

	  double quotaTotalAnual() {
	    return quotaMensalVendas * MESES;
	  }

	  void Imprimir(double horasTrabalhadas){
      std::cout << "Nome: " << nome << std::endl;
      std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
      std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
      std::cout << std::endl;
	  }

  private:
    std::string nome;
  
};
