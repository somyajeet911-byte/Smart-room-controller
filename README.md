# Smart Room Controller – State Machine Based Design

## Purpose
This project demonstrates the design of a simple smart room controller using a State Transition Machine (STM).  
The goal is to clearly model how user inputs (switches) control different electrical appliances in a room in a predictable and safe way.

## Project Overview
The controller is designed for a single room and can operate:
- Main light
- Bed light
- Lamp
- Fan

Only one appliance is active at a time to keep the control logic simple and easy to understand.  
The system behavior is defined using states, inputs, conditions, and actions.

## Design Approach
Before writing any firmware, the system logic was first modeled using a State Transition Machine.  
Each state represents the current condition of the room, while transitions occur based on switch inputs and power availability.

This approach helps in:
- Avoiding undefined behavior
- Making the logic easy to debug
- Clearly documenting system behavior

## State Description
- S0: All appliances OFF  
- S1: Main Light ON  
- S2: Bed Light ON  
- S3: Lamp ON  
- S4: Fan ON  

## File Description
- `main.c`  
  Contains the program entry point and the main execution loop.

- `stm.c`  
  Implements the state transition logic and controls outputs based on inputs.

- `stm.h`  
  Contains state definitions, function declarations, and shared variables.

- `STM_Table.png`  
  Visual representation of the state transition machine.


- `PCB_Layout.pdf`  
  Conceptual PCB layout for the controller hardware.
<img width="1024" height="1024" alt="PCB_Layout" src="https://github.com/user-attachments/assets/4bd51433-2c63-4528-a8e5-1649a6aa6d7a" />

- `Wiring_Diagram.pdf`  
  Wiring diagram showing appliance connections.
<img width="1024" height="1024" alt="Wiring_Diagram" src="https://github.com/user-attachments/assets/47ca2fd9-f257-4cd1-9ee7-c2c2c1ebf64e" />

## Notes
This project focuses on logic design and documentation rather than hardware fabrication.  
The code is written as structured pseudo-code and can be adapted for microcontrollers such as Arduino or ESP32.
