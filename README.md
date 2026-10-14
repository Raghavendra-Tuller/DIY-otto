# 🤖 DIY Otto Obstacle Avoiding Robot

## 📌 Project Overview
The Otto Obstacle Avoiding Robot is a small, interactive walking robot that uses an ultrasonic sensor to detect obstacles and avoid collisions automatically. It uses the Otto DIY library to control its servo motors, movements, gestures, and buzzer sounds.

## ✨ Features
- 🚧 Detects obstacles using an ultrasonic sensor.
- 📏 Measures distance to nearby objects.
- 🔙 Moves backward when an obstacle is detected within 15 cm.
- ↩️ Turns left to avoid obstacles.
- 🔊 Plays a surprise sound and confused gesture.
- 🚶 Continues walking forward when no obstacle is detected.

## 🛠️ Components Required
- Otto DIY robot kit
- Arduino-compatible board
- Ultrasonic sensor (HC-SR04, if used)
- Servo motors
- Buzzer
- Jumper wires and power supply

## 🔌 Pin Connections

| Component | Arduino Pin |
|---|---|
| Left Leg Servo | 2 |
| Right Leg Servo | 3 |
| Left Foot Servo | 4 |
| Right Foot Servo | 5 |
| Buzzer | 13 |
| Ultrasonic Trigger | 8 |
| Ultrasonic Echo | 9 |

## ⚙️ Working Principle
1. The ultrasonic sensor measures the distance between the robot and an obstacle.
2. If an obstacle is detected within 15 cm, the robot plays a surprise sound and performs a confused gesture.
3. The robot walks backward for two steps and turns left for three steps.
4. The robot then resumes walking forward.
5. This process repeats continuously to help the robot navigate around obstacles.

## 💻 Software and Libraries
- Arduino IDE
- C++ (Arduino programming)
- OttoDIYLib
- Git and GitHub for version control

## 🚀 How to Run
1. Install the Arduino IDE.
2. Install the OttoDIYLib library.
3. Connect the servo motors, buzzer, and ultrasonic sensor according to the pin connections.
4. Open the Arduino sketch from the `code` folder.
5. Select the correct board and COM port.
6. Upload the code to the Arduino-compatible board.
7. Power on the robot and test its obstacle avoidance behavior.

## 📸 Project Images
Project photographs, hardware connections, and demonstration images are available in the `images` folder.

## 🔮 Future Improvements
- Detect obstacles in multiple directions.
- Add automatic left/right path selection.
- Improve movement based on measured distance.
- Add Bluetooth or wireless control.
- Optimize movement for smoother navigation.

## 👨‍💻 Author
**Raghavendra Tuller**

- GitHub: [Raghavendra-Tuller](https://github.com/Raghavendra-Tuller)
- LinkedIn: [Raghavendra Tuller](https://www.linkedin.com/in/raghavendra-tuller)

## 📄 License
This project is intended for educational and learning purposes. Refer to the Otto DIY library's license when redistributing its code or related materials.
