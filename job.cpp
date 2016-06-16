#include "job.h"

Job::Job(std::string name, int ticks){
  
  this->name = name;
  this->ticks = ticks;
  this->level = 1;

}

Job::~Job(){

  std::cout << "... Job " << name << " destroyed ..." << std::endl;

}

//Decrements the # of ticks remaining, returns true if process has 
//ticks remaining. 
bool Job::process(){
  
  ticks--;
  
  if(ticks <= 0)
    return false;

  return true;
    
}


//Increment level
//4 is the max level that can be incremented
void Job::incrementLevel(){

  switch(level){
    case 1: 
      level = 2;
      return;
    case 2:
      level = 3;
      return;
    case 3: 
      level = 4;
      return;
    case 4:
      level = 4;
      return;
    default:
      std::cout << "... Error: Level Setting ... " << std::endl;
      exit(0);
  }

}

int Job::getTicks(){
  
  return ticks;

}

int Job::getLevel(){

  return level;

}

std::string Job::getName(){

  return name;

}
