Smart Glasses for the Visually Impaired

Overview
This project describes the creation of smart glasses designed to assist the visually impaired by providing real-time feedback on their surroundings. Unlike simpler systems that only use distance sensors, this advanced version leverages the ESP32-CAM module to perform visual object detection. This allows the glasses to not only detect obstacles but also identify and describe them, offering a more comprehensive and intuitive aid. The system is low-cost, open-source, and aims to enhance mobility and independence for people with low vision.

Features
Real-time Object Detection: The ESP32-CAM captures live video and processes the frames to identify common objects like doors, chairs, people, and stairs.

Auditory Feedback: Provides verbal alerts through a connected speaker or headphones. A text-to-speech module converts the identified objects into spoken words (e.g., "Person ahead," "Door on the left").

Obstacle Distance Warning: The system can estimate the distance of detected objects, providing an additional layer of safety.

Compact & Portable: All components are integrated into a small, wearable form factor that can be mounted on or built into a pair of glasses.

Low Power Consumption: The ESP32's efficient design ensures a long battery life, crucial for daily use.

Components
ESP32-CAM Module: The core of the project, featuring a powerful ESP32 microcontroller and an integrated OV2640 camera.

MicroSD Card: Stores the trained object detection model and configuration files.

Speaker/Audio Amplifier: A small speaker or buzzer, often with a simple audio amplifier module (e.g., PAM8403), to provide clear auditory feedback.

Microphone (Optional): Can be used for voice commands or sound recognition.

Push Button: To activate or deactivate the system, switch modes, or repeat the last announcement.

Power Source: A small LiPo battery (e.g., 3.7V, 1000mAh) to power the entire system.

FTDI Programmer: An external module required to upload code to the ESP32-CAM.

Connecting Wires: Used to link the components together.

Setup and Installation
Hardware
Connect the FTDI programmer:

VCC on FTDI to 5V on ESP32-CAM.

GND on FTDI to GND on ESP32-CAM.

RX on FTDI to U0TXD on ESP32-CAM.

TX on FTDI to U0RXD on ESP32-CAM.

Crucially, connect GPIO0 to GND while uploading the code to put the ESP32 into flash mode. Disconnect it after the upload.

Connect the speaker/amplifier:

Connect the L and R outputs of the audio amplifier to the speaker terminals.

Connect the VCC and GND of the amplifier to the ESP32-CAM's 5V and GND.

Connect the IN pin of the amplifier to a PWM-capable GPIO pin (e.g., GPIO 4) on the ESP32-CAM.

Insert the MicroSD card: Make sure the card is formatted and has the necessary model files loaded onto it.

Software
Install the Arduino IDE: Download and install the Arduino IDE.

Add the ESP32 Board Manager: In the Arduino IDE, go to File > Preferences and add the following URL to the "Additional Boards Manager URLs": https://dl.espressif.com/dl/package_esp32_index.json

Install the ESP32 package: Go to Tools > Board > Boards Manager, search for "esp32," and install the esp32 package.

Select the Board: Go to Tools > Board and select AI-Thinker ESP32-CAM.

Upload the Code: Open the provided Arduino sketch file (.ino). Ensure the model files are correctly loaded onto the MicroSD card. Select the correct board and COM port, then upload the code.

Usage
After the hardware is assembled and the software is uploaded, the glasses will automatically begin processing the video stream. The ESP32-CAM will capture images, run them through the pre-trained model, and if an object is identified, it will announce it through the speaker. For example, you may hear "Chair ahead," or "Door detected." The system is designed to provide rapid, continuous feedback as you move through your environment.

Customization and Improvements
Custom Models: Train your own lightweight object detection model (e.g., using a platform like Edge Impulse) to recognize specific objects relevant to the user.

Power Management: Add a battery charging and monitoring circuit to provide a low-battery warning.

Haptic Feedback: Combine the auditory alerts with a small vibration motor to provide an additional layer of feedback.

Cloud Integration: Connect the device to a cloud service (e.g., via Wi-Fi) to offload complex image processing or for remote monitoring.

Augmented Reality (AR) Overlay: For users with some residual vision, integrate a small micro-display to provide a simple AR overlay that highlights detected objects.

The updated version of this smart glasses for visually impaired with smart stick is in "prajna-Ai-blindstick" repository.
