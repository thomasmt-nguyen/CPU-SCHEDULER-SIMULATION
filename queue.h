#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <memory>
#include <job.h>

class Queue{
  
  private:
    static std::shared_ptr<Queue> instance;

  public:    
    static std::shared_ptr<Queue> getInstace();
    

};
#endif
