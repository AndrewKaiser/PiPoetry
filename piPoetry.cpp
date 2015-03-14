#include <iostream>
#include <fstream>
// #include <string>
#include <vector>
#include <sstream>


void parse(std::ifstream input, char alpha[]) {
  char t;
  int num;
  while(t<<input) {
    
  }
}

int main(int argc, char* argv[]) {
  if(argc != 2) {
    std::cout<<"Usage [filename.txt]"<<std::endl;
    return 1;
  }
  char alpha[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  std::ifstream infile (argv[1]);

  std::ofstream oufile ("output.txt");


  return 0;
}
