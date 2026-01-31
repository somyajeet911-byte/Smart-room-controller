#include "stm.h"

// Define global state
state_t current_state;

void stm_update(void)
{
    // Safety condition
    if (!power_ok())
    {
        // Turn everything OFF if power fails
        relay1_off();
        relay2_off();
        relay3_off();
        relay4_off();
        current_state = S0;
        return;
    }

    // ----- State Machine -----
    switch (current_state)
    {
        case S0:   // All OFF
            if (read_SW1())
            {
                relay1_on();
                current_state = S1;
            }
            else if (read_SW2())
            {
                relay2_on();
                current_state = S2;
            }
            else if (read_SW3())
            {
                relay3_on();
                current_state = S3;
            }
            else if (read_SW4())
            {
                relay4_on();
                current_state = S4;
            }
            break;

        case S1:   // Main Light ON
            if (read_SW1())
            {
                relay1_off();
                current_state = S0;
            }
            break;

        case S2:   // Bed Light ON
            if (read_SW2())
            {
                relay2_off();
                current_state = S0;
            }
            break;

        case S3:   // Lamp ON
            if (read_SW3())
            {
                relay3_off();
                current_state = S0;
            }
            break;

        case S4:   // Fan ON
            if (read_SW4())
            {
                relay4_off();
                current_state = S0;
            }
            break;

        default:
            current_state = S0;
            break;
    }
}
