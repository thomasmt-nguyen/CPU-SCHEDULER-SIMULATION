#include "cpu.h"

void CPU::run(){
  
  std::cout << "... CPU running ... " << std::endl;

}

void CPU::addJob(Job job){
 
  queue[0].push_back(job);
  std::cout << "... Queue[0] size: "  <<queue[0].size() << " ..." << std::endl;
  
}
