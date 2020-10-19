#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    const int MESES = 12;
    std::string nome;  	  
	
	double quotaTotalAnual() {
	  return quotaMensalVendas * MESES;
	}
	
};

