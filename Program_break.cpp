#include <iostream>

int main () {
  //untuk for
  for(int OperatorIndex = 1; OperatorIndex <= 10; /* Sebagai batas*/OperatorIndex++) {
    if(OperatorIndex == 5 ) {
      break;
    }
    std::cout << OperatorIndex << std::endl;
  }
   for(int OperatorIndex = 1; OperatorIndex <= 10; /* Sebagai batas*/OperatorIndex++) {
    if(OperatorIndex == 5 ) {
      continue;
    }
    std::cout << OperatorIndex << std::endl;
  }
  //untuk while
  int OperatorIndexTwo = 0; /*Sebagai indeks awal*/
  while ( OperatorIndexTwo <= 10 ) {
    OperatorIndexTwo++;
    if(OperatorIndexTwo == 5) {
      break;
    }
    std::cout << OperatorIndexTwo << std::endl;
    
  }
  
   while ( OperatorIndexTwo <= 10 ) {
    OperatorIndexTwo++;
    if(OperatorIndexTwo == 5) {
      continue; /*Ketika operator indeks berada di 5 maka lakukan aksi break/continue. jangan takut hehe*/
    }
    std::cout << OperatorIndexTwo << std::endl;
    
  }
}