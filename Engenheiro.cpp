#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    Engenheiro(std::string _nome, double _salarioHora, int _projetos){
     nome = _nome;
     salarioHora = _salarioHora;
     projetos = _projetos;
    }

    void Imprimir(double horasTrabalhadas){
      std::cout << "Nome: " << nome << std::endl;
      std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
      std::cout << "Projetos: " << projetos << std::endl;
      std::cout << std::endl;
    }
    
  private:
    std::string nome;
    int projetos;

};
