#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    std::string nome;  
	int projetos;
  void Imprimir(double horasTrabalhadas) override {
  	 std::cout << "Nome: " << nome << std::endl;
 	 std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
 	 std::cout << "Projetos: " << projetos << std::endl;
 	 std::cout << std::endl;
  }
};

