/** 
  * File:     person.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  
  */

#include <string>

namespace people {
  class Person {
  public:
    Person(std::string firstname, std::string lastname);
    std::string firstname() const;
    std::string lastname() const;
    
  private:
    std::string _firstname;
    std::string _lastname;
  };

  std::string getFullName(const Person &p);
}
