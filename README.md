# Smart Room Energy & Comfort Digital Twin

## Overview
The Smart Room Energy & Comfort Digital Twin is an IoT-based ongoing project designed to reduce unnecessary energy consumption in indoor environments such as classrooms, hostels, and offices while maintaining user comfort. The system integrates IoT sensors, edge computing, cloud computing, artificial intelligence, and digital twin visualization to enable intelligent monitoring and control of electrical appliances.

## Problem Statement
In many indoor spaces, electrical energy is wasted due to:
- Lights remaining ON even when rooms are unoccupied
- Fans and air conditioners operating unnecessarily
- Lack of real-time energy usage monitoring
- Absence of intelligent prediction and optimization

The challenge is to reduce energy consumption without compromising human comfort.

## Proposed Solution
This project implements a smart room system that:
- Monitors temperature, humidity, light intensity, and occupancy
- Performs real-time decision-making at the edge using ESP32
- Transfers sensor data to the cloud using MQTT
- Uses AI to predict future energy consumption
- Visualizes room conditions through a live dashboard and digital twin

## System Architecture
The system follows an **Edge–Cloud–AI architecture**:

Sensors → ESP32 (Edge Device) → Cloud (MQTT) → AI Models → Dashboard & Digital Twin

## Features
- IoT-based environmental monitoring
- Edge computing using ESP32
- Cloud data transfer using MQTT
- AI-based energy consumption prediction
- Digital twin visualization of room conditions
- Real-time data monitoring
- 
## Hardware Components Used
- ESP32 microcontroller (WiFi-enabled)
- DHT11 / DHT22 temperature and humidity sensor
- LDR (Light Dependent Resistor)
- PIR motion sensor
- Relay module (for device control)
- Power supply

## Software & Tools Used
- Arduino IDE (Embedded programming)
- C / C++ (ESP32 firmware)
- Python (Cloud processing & AI)
- MQTT protocol (Data communication)
- HTML, CSS, JavaScript (Dashboard)
- Scikit-learn (AI model implementation)

## Partial Implementation
The current implementation includes:
- Sensor data acquisition using ESP32
- Real-time data transmission to cloud via MQTT
- Cloud-side data reception using Python
- Basic AI-based energy prediction using Linear Regression
- Conceptual digital twin visualization using a web dashboard

## Artificial Intelligence Usage
Artificial Intelligence is used to:
- Predict next-hour energy consumption
- Analyze historical usage patterns
- Support intelligent decision-making for energy optimization

Simple machine learning models such as **Linear Regression** are used in the current phase.

## Digital Twin
The digital twin is a virtual representation of the physical room that:
- Displays room condition visually
- Reflects device ON/OFF states
- Changes appearance based on temperature and occupancy
- Updates in real time using sensor data
