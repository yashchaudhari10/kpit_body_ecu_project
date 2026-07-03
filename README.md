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

| **STM32 Pin** | **Function** | **Description** |
|:-------------:|--------------|-----------------|
| PA0 | Motor IN1 | Power window motor – H-bridge direction input 1 |
| PA1 | Motor IN2 | Power window motor – H-bridge direction input 2 |
| PA2 | Liftgate IN3 | Liftgate motor – H-bridge direction input 3 |
| PA3 | Liftgate IN4 | Liftgate motor – H-bridge direction input 4 |
| PA4 | IR Sensor | Gesture / obstacle detection input |
| PA8 | EN1 (PWM) | Power window motor – Speed control (PWM enable) |
| PA9 | EN2 (PWM) | Liftgate motor – Speed control (PWM enable) |
| PB12 | LCD CS | ST7920 LCD – Chip Select (SPI) |
| PB13 | LCD CLK | ST7920 LCD – Serial Clock (SPI) |
| PB14 | LCD RST | ST7920 LCD – Reset |
| PB15 | LCD SID | ST7920 LCD – Serial Data Input (SPI) |
| PC0 | Window Switch | Push-button input – Power Window UP/DOWN |
| PC1 | Liftgate Switch | Push-button input – Liftgate OPEN/CLOSE |

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

report file link:- https://1drv.ms/w/c/8f53b8135e7e5000/IQBqRNvjZWFOTYiW2YXNjQWIAQpTNnU6JRrWXUZxYP2JpuA?e=5m2aHN

