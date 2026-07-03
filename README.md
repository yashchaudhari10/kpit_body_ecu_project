# kpit_body_ecu_project
# Body Control ECU for Power Window and Liftgate Applications

## Overview
This project implements a Body Control ECU (Electronic Control Unit) for automotive Power Window and Liftgate applications using the STM32 Nucleo development board. The system simulates automotive-grade body control features by interfacing switches, motors, sensors, and safety logic.

The project focuses on embedded system design, GPIO control, PWM motor driving, interrupt handling, and state machine implementation.

---

## Features

- Power Window Up/Down Control
- Liftgate Open/Close Control
- PWM Motor Speed Control
- GPIO-based Switch Inputs
- IR Sensor Integration
- Safety Interlock Logic
- State Machine Based Control
- Modular Embedded C Code
- STM32 HAL Driver Implementation

---

## Hardware Used

- STM32 Nucleo-F446RE
- L293D Motor Driver
- DC Motor
- IR Sensor
- Push Buttons
- LCD Display (Optional)
- Breadboard
- Jumper Wires
- External Power Supply

---

## Software Used

- STM32CubeIDE
- STM32CubeMX
- Embedded C
- STM32 HAL Libraries
- Git
- GitHub

---

## Project Structure

```
Body-Control-ECU/
│
├── Core/
│   ├── Inc/
│   └── Src/
│
├── Drivers/
│
├── STM32CubeMX/
│
├── Images/
│
├── Docs/
│
└── README.md
```

---

## Working

1. User presses the window or liftgate switch.
2. STM32 reads the GPIO input.
3. Controller determines the requested operation.
4. PWM signal drives the motor through the L293D driver.
5. IR sensor provides obstacle detection.
6. Safety logic stops or reverses the motor when required.

---

## Pin Connections

| Component | STM32 Pin |
|-----------|-----------|
| Motor IN1 | PA0 |
| Motor IN2 | PA1 |
| PWM Output | PA8 |
| IR Sensor | PA4 |
| Window Switch | PC13 |
| Liftgate Switch | PB0 |
| LCD (Optional) | GPIO Pins |

*(Modify according to your actual connections.)*

---

## Future Improvements

- CAN Bus Communication
- LIN Bus Support
- Anti-Pinch Algorithm
- Automatic Window Function
- Diagnostic Fault Detection
- AUTOSAR Integration

---

## Learning Outcomes

- Embedded C Programming
- STM32 HAL Development
- GPIO Configuration
- PWM Generation
- Interrupt Handling
- State Machine Design
- Automotive ECU Development
- Git & GitHub Version Control

---

## Author

**Yash Omprakash Chaudhari**

Second Year Electrical Engineering

COEP Technological University

---

## License

This project is for educational and learning purposes.

presentation link:- https://1drv.ms/p/c/8f53b8135e7e5000/IQBU20GW-XRlQrdTw_gV1ymqARjkWVaZ0nk1tq0txZKC78c?e=MlkgWz

report file link:- https://1drv.ms/w/c/8f53b8135e7e5000/IQD9b5oz5WM1QrkenWfa8fg7AQh6wcjQIwHeDgdxQAeX75Y?e=vkYc9L 
