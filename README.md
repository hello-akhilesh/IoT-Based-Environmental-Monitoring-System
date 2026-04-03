# 📡 IoT based Monitoring System Using ESP8266 and ThingSpeak

A cloud-connected environmental monitoring project built using DHT11, LDR sensor, and NodeMCU ESP8266.

## 🧠 Project Overview

* This project measures temperature, humidity, and ambient light intensity using a DHT11 sensor and 4-pin LDR module, and uploads the readings to ThingSpeak every few seconds using an ESP8266 (NodeMCU).


* The ESP8266 collects sensor readings, connects to WiFi, and publishes the values to the cloud continuously—enabling real-time graph visualization.

## 🔄 How the System Works

* DHT11 measures temperature (°C) and humidity (%).

* LDR module detects ambient light through its analog output (A0).

* NodeMCU ESP8266 reads both sensors.

* The ESP8266 connects to WiFi.

* Data is uploaded to ThingSpeak Channel Fields (Field1, Field2, Field3).

* ThingSpeak automatically creates live graphs, dashboards, and data logs.


## 🎯 Key Features

* Real-time temperature monitoring
* Real-time humidity tracking
* Light intensity monitoring with LDR
* Automatic cloud uploading to ThingSpeak
* IoT-ready architecture
* Beginner-friendly circuitry
* Low-power and reliable ESP8266 operation
* Visualization through customizable ThingSpeak graphs

## 🛠️ Hardware Requirements

 1. NodeMCU ESP8266 (ESP-12E/ESP-12F)

 2. DHT11 Temperature & Humidity Sensor

 3. 4-Pin LDR Module AO 

 4. USB cable for programming

 5. Jumper wires

 6. Breadboard (optional)

## 🧩 Software & Programming Details

* Language: C++ (Arduino Framework)

* Required Libraries:

* ESP8266WiFi

* ThingSpeak

* DHT Sensor Library (Adafruit)

* Adafruit Unified Sensor (dependency)

## 🌐 ThingSpeak Setup

I have created:

 * 1 Channel

 * API Write Key

 *  3 Fields:

   1. Field1 → Temperature

   2. Field2 → Humidity

   3. Field3 → LDR Value

 * Used the Write API Key into my code.


## 📊 Visualization

ThingSpeak provides:

* Line graphs

* Real-time dashboards

## 📂 Clone the Repository
git clone https://github.com/hello-akhilesh/IoT-Based-Environmental-Monitoring-System

## 📹 Demonstration

 Video file: IoT-based environmental monitoring system.mp4

## 🧩 Applications

   * Home weather reporting

   * Light intensity monitoring

   * Wireless environmental sensing

   * Smart home automation





