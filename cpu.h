#ifndef _CPU_H_
#define _CPU_H_

#include <vector>
#include <string>
#include <iostream>
#include "job.h"
#include "constants.h"

class CPU{
  
  private:
    std::vector<Job> queue[Q_SIZE];
    Job * current;
    int max_tick;
    void setMaxTick();
     
  public:
    void run();
    void addJob(Job);

};
#endif
