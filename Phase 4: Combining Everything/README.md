# Phase 4: Combining Everything (Ongoing)

## Overview
Integrate C, C++, DSA, and embedded skills into slightly larger projects. Focus on combining concepts for practical applications.

## Objectives
- Build multi-concept projects.
- Optimize for embedded constraints.
- Explore personal interests.

## Projects and DSA
1. **Traffic Light**:
   - **DSA**: Finite State Machine (array of states).
   - **Hardware**: 3 LEDs.
   - **Description**: Cycle through red, yellow, green states.
2. **Temperature Alarm**:
   - **DSA**: Queue (readings), Linear Search (threshold).
   - **Hardware**: DHT11 temp sensor.
   - **Description**: Alert if temp exceeds limit.
3. **Motor Speed**:
   - **DSA**: Stack (speed history), Bit Manipulation (control).
   - **Hardware**: Motor, button.
   - **Description**: Adjust speed with button, undo with stack.
4. **Data Logger**:
   - **DSA**: Binary Search Tree (sorted data), UART (output).
   - **Hardware**: Sensor (e.g., photoresistor).
   - **Description**: Log and sort sensor data, send via Serial.

## Resources
- **Books**: "Making Embedded Systems" by Elecia White.
- **Online**: Arduino.cc, r/embedded (Reddit).
- **Tools**: Arduino IDE, optional PlatformIO.

## Tips
- Keep code small (avoid heavy STL in embedded).
- Document each project’s purpose and lessons learned.
- Scale up complexity as confidence grows (e.g., add sensors).