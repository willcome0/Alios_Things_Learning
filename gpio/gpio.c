#include <stdio.h>
#include "aos/kernel.h"

#include "ulog/ulog.h"
#include "aos/hal/gpio.h"

gpio_dev_t io[40];
int application_start(int argc, char *argv[])
{
    io[0].port = 0;
    io[0].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[0]);

    while (1)
    {

         aos_msleep(100);
         printf("gpio test\n");
         LOG("log test");
         hal_gpio_output_toggle(&io[0]);

    }

    aos_loop_run();
    return 0;
}
