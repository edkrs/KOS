#include <iostream>
#include "syscalls.h"
#include "pthread.h"


int main() {

  cpu_set_t mask = 0x2;
  sched_setaffinity(0,sizeof(cpu_set_t),&mask);
  for(;;){}

  return 0;
}
