#include "hana.h"
#include "brandon.h"
#include "brian.h"
#include <cstdlib>
#include <ctime>

// EVERYONE CREATES THEIR OWN CPP FILE AND WRITE THEIR SORTING ALGOS 
// THEN WE'LL LINK THE OUR INDIVIDUAL FILES IN THIS MAIN FILE 

using namespace std;
using namespace std::chrono;

int inputDataSize();
void intiializeArray(int randomArray[], int ascArray[], int dscArray[], int arraySize);
int counter = 0;

int main() {
  
  for(int index = 1; index <= 7; index++){
    int arraySize = inputDataSize();

    int *randomArray = new int[arraySize];
    int *ascArray = new int[arraySize];
    int *dscArray = new int[arraySize];
    intiializeArray(randomArray, ascArray, dscArray, arraySize);
    
  }
}

int inputDataSize(){
  switch(counter){
    case(1):
    return 100;
    case(2):
    return 300;
      case(3):
  return 500;
    case(4):
    return 1000;
    case(5):
    return 5000;
    case(6):
    return 100000;
    case(7):
    return 50000;
    default:
    break;
      
  }
}

void intiializeArray(int randomArray[], int ascArray[], int dscArray[], int arraySize){
  for(int i = 0; i < arraySize; i++){
    ascArray[i] = i+1;
  }
  for(int i = arraySize; i <= 0 ; i--){
    dscArray[arraySize - i] = 1;
  }

  //INPUT DATA FOR RANODM FUNCTION 
  
}