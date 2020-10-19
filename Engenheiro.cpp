#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    std::string nome;  
	int projetos;
  void Imprimir() override {
  	 std::cout << "Nome: " << nome << std::endl;
 	 std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
 	 std::cout << "Projetos: " << eng1.projetos << std::endl;
 	 std::cout << std::endl;
  }
};

