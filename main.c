#include "stm.h"

int main()
{
    // Initialize system
    system_init();

    // Initial state
    current_state = S0;

    // Infinite loop
    while (1)
    {
        // Update state machine continuously
        stm_update();
    }

    return 0;
}
