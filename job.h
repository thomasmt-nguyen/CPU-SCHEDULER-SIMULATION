#ifndef _JOB_H_
#define _JOB_H_

#include <string>
#include <iostream>

class Job{
  
  private:
    std::string name;
    int ticks;
    int level;
 
  public:
    Job(std::string, int);
    ~Job();
    bool process();
    void incrementLevel();
    int getTicks();
    int getLevel();
    std::string getName();
   
};
#endif

