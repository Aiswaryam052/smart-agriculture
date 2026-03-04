# 🌱 AI-Driven IoT Framework for Smart Agriculture

## 📌 Project Overview
This project implements a Smart Agriculture system using ESP32, DHT11 sensor, and Soil Moisture Sensor.  
The system monitors environmental parameters in real time and predicts crop yield using a regression-based AI model.  
Data is displayed on the Blynk IoT cloud dashboard for remote monitoring.

---

## 🚀 Features
- 🌡 Real-time Temperature Monitoring
- 💧 Soil Moisture Detection
- 🌤 Humidity Monitoring
- 📊 AI-Based Yield Prediction
- ☁ Cloud Dashboard Integration
- 📱 Remote Monitoring via Mobile App

---

## 🛠 Hardware Components
- ESP32 Microcontroller
- DHT11 Temperature & Humidity Sensor
- Soil Moisture Sensor
- Breadboard
- Jumper Wires
- USB Cable / 5V Power Supply

---

## 🔌 Connection Details

### 📍 DHT11 Sensor → ESP32

| DHT11 Pin  | ESP32 Pin  |
|------------|------------|
| VCC        | 3.3V       |
| GND        | GND        |
| DATA       | GPIO 4     |

---

### 📍 Soil Moisture Sensor → ESP32

| Soil Sensor Pin | ESP32 Pin  |
|-----------------|------------|
| VCC             | 3.3V       |
| GND             | GND        |
| A0 (Analog Out) | GPIO 34    |

---

## 🧠 Working Principle
1. DHT11 measures temperature and humidity.
2. Soil sensor measures soil moisture level.
3. ESP32 reads sensor values.
4. AI formula predicts crop yield.
5. Data is sent to Blynk cloud using WiFi.
6. Farmer monitors data through mobile dashboard.

---

## 📊 AI Model
Yield = (0.48 × Temperature) + (0.63 × Humidity) + (1.1 × Soil Moisture) + 12.5

---

## 👩‍💻 Developed By
Aiswarya M  
