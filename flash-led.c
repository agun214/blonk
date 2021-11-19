#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = 25;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    void one_dot() {
	gpio_put(LED_PIN, 1);
        sleep_ms(92);
    }

    void three_dash() {
        gpio_put(LED_PIN, 1);
        sleep_ms(286);
    }

    void one_rest() {
        gpio_put(LED_PIN, 0);
        sleep_ms(92);
    }

    void three_rest(){
        gpio_put(LED_PIN, 0);
        sleep_ms(286);
    }

    void seven_rest() {
        gpio_put(LED_PIN, 0);
        sleep_ms(644);
    }

    while (true) {
	/* L */
        one_dot();
	one_rest();
	three_dash();
	one_rest();
	one_dot();
	one_rest();
	one_dot();
	three_rest();

	/*E */
        one_dot();	
	three_rest();

	/*T */        
	three_dash();
	three_rest();

	/*S */
        one_dot();
	one_rest();
        one_dot();
	one_rest();
        one_dot();

	/* */
	seven_rest();

	/*G */
	three_dash();
	one_rest();
	three_dash();
	one_rest();
	one_dot();
	three_rest();

	/* E*/
        one_dot();
	three_rest();

	/* T*/
	three_dash();

	/* */
	seven_rest();

	/* H*/
        one_dot();
	one_rest();
        one_dot();
	one_rest();
        one_dot();
	one_rest();
        one_dot();
	three_rest();

	/* I*/
        one_dot();
	one_rest();
        one_dot();
	three_rest();

	/* G*/
	three_dash();
	one_rest();
	three_dash();
	one_rest();
	one_dot();
	three_rest();

	/* H*/
        one_dot();
	one_rest();
        one_dot();
	one_rest();
        one_dot();
	one_rest();
        one_dot();

	/* */
	seven_rest();
   }
}