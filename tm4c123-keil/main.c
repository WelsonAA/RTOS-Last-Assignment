#include <stdint.h>
#include "scheduler.h"
#include "bsp.h"

void task_A() {
       BSP_ledGreenToggle();
}

void task_B() {
       BSP_ledRedToggle();
}


int main(void) {
    BSP_init();
    create_task(task_A, 5);
		create_task(task_B, 10);
 		Tasks_Scheduler();
    
		while(1){}
    //return 0;
}
