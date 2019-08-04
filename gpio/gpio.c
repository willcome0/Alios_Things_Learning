#include <stdio.h>
#include "aos/kernel.h"
#include "ulog/ulog.h"

#include "aos/hal/gpio.h"

#define GPIO_LED_IO     18
#define GPIO_TRIGGER_IO 4
#define GPIO_INPUT_IO   5
// add for st nucleo board
#define GPIO_LED_NUCLEO     5

static void app_trigger_low_action(void *arg);
static void app_trigger_high_action(void *arg);

gpio_dev_t led;
gpio_dev_t trigger;
gpio_dev_t input;
//add for st nucleo board
gpio_dev_t led_nucleo;

gpio_dev_t io[40];
int application_start(int argc, char *argv[])
{
    io[0].port = 0;
    io[0].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[0]);

    io[4].port = 4;
    io[4].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[4]);

    io[16].port = 16;
    io[16].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[16]);

    io[17].port = 17;
    io[17].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[17]);

    io[5].port = 5;
    io[5].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[5]);

    io[18].port = 18;
    io[18].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[18]);

    io[19].port = 19;
    io[19].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[19]);

    io[21].port = 21;
    io[21].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[21]);

    io[22].port = 22;
    io[22].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[22]);

    io[23].port = 23;
    io[23].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[23]);

    io[2].port = 2;
    io[2].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[2]);

    io[15].port = 15;
    io[15].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[15]);

    io[13].port = 13;
    io[13].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[13]);

    io[12].port = 12;
    io[12].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[12]);

    io[14].port = 14;
    io[14].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[14]);

    io[27].port = 27;
    io[27].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[27]);

    io[26].port = 26;
    io[26].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[26]);

    io[25].port = 25;
    io[25].config = OUTPUT_PUSH_PULL;
    hal_gpio_init(&io[25]);

    // io[33].port = 33;
    // io[33].config = OUTPUT_PUSH_PULL;
    // hal_gpio_init(&io[33]);

    // io[32].port = 32;
    // io[32].config = OUTPUT_PUSH_PULL;
    // hal_gpio_init(&io[32]);

    // io[35].port = 35;
    // io[35].config = OUTPUT_PUSH_PULL;
    // hal_gpio_init(&io[35]);

    // io[34].port = 34;
    // io[34].config = OUTPUT_PUSH_PULL;
    // hal_gpio_init(&io[34]);

    // io[36].port = 36;
    // io[36].config = OUTPUT_PUSH_PULL;
    // hal_gpio_init(&io[36]);

    // io[39].port = 39;
    // io[39].config = OUTPUT_PUSH_PULL;
    // hal_gpio_init(&io[39]);

    aos_set_log_level(LOG_DEBUG);
    while (1)
    {

         aos_msleep(100);
         printf("gpio test\n");
         LOG("log test");
         hal_gpio_output_toggle(&io[0]);
         hal_gpio_output_toggle(&io[4]);
         hal_gpio_output_toggle(&io[16]);
         hal_gpio_output_toggle(&io[17]);
         hal_gpio_output_toggle(&io[5]);
         hal_gpio_output_toggle(&io[18]);
         hal_gpio_output_toggle(&io[19]);
         hal_gpio_output_toggle(&io[21]);
         hal_gpio_output_toggle(&io[22]);
         hal_gpio_output_toggle(&io[23]);
         hal_gpio_output_toggle(&io[2]);
         hal_gpio_output_toggle(&io[15]);
         hal_gpio_output_toggle(&io[13]);
         hal_gpio_output_toggle(&io[12]);
         hal_gpio_output_toggle(&io[14]);
         hal_gpio_output_toggle(&io[27]);
         hal_gpio_output_toggle(&io[26]);
         hal_gpio_output_toggle(&io[25]);
        //  hal_gpio_output_toggle(&io[33]);
        //  hal_gpio_output_toggle(&io[32]);
        //  hal_gpio_output_toggle(&io[35]); //
        //  hal_gpio_output_toggle(&io[34]); //
        //  hal_gpio_output_toggle(&io[36]);
        //  hal_gpio_output_toggle(&io[39]);
    }

    aos_loop_run();
    return 0;
}
