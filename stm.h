#ifndef STM_H
#define STM_H

// ----- State Definitions -----
typedef enum
{
    S0,   // All OFF
    S1,   // Main Light ON
    S2,   // Bed Light ON
    S3,   // Lamp ON
    S4    // Fan ON
} state_t;

// ----- Global State Variable -----
extern state_t current_state;

// ----- Function Prototypes -----
void system_init(void);
void stm_update(void);

// ----- Input Functions (pseudo) -----
int read_SW1(void);
int read_SW2(void);
int read_SW3(void);
int read_SW4(void);

// ----- Output Functions (pseudo) -----
void relay1_on(void);
void relay1_off(void);
void relay2_on(void);
void relay2_off(void);
void relay3_on(void);
void relay3_off(void);
void relay4_on(void);
void relay4_off(void);

// ----- Condition Flags -----
int power_ok(void);

#endif
