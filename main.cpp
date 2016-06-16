#include <iostream>
#include <string>
#include <memory>
#include "job.h"

int main(){
    
  std::unique_ptr<Job> job1( new Job("test_job1", 10));
  std::unique_ptr<Job> job2( new Job("test_job2", 10));
  
  std::string job1_name = job1->getName();
  std::string job2_name = job2->getName();

  int job1_ticks = job1->getTicks();
  int job2_ticks = job2->getTicks();

  int job1_level = job1->getLevel();
  int job2_level = job2->getLevel();

  printf("... Testing: %s - ticks: %d - level:%d\n", job1_name.c_str(), job1_ticks, job1_level);
  printf("... Testing: %s - ticks: %d - level:%d\n", job2_name.c_str(), job2_ticks, job2_level);
  
  job1->incrementLevel();
  job2->incrementLevel();
  job2->incrementLevel();
  job2->incrementLevel();
  job2->incrementLevel();
  job2->incrementLevel();


  job1->process();
  job2->process();
  job2->process();
  

  job1_ticks = job1->getTicks();
  job2_ticks = job2->getTicks();

  job1_level = job1->getLevel();
  job2_level = job2->getLevel();

  printf("... Testing: %s - ticks: %d - level:%d\n", job1_name.c_str(), job1_ticks, job1_level);
  printf("... Testing: %s - ticks: %d - level:%d\n", job2_name.c_str(), job2_ticks, job2_level);

  return 0;

}




