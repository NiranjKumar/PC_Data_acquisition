# PC-Based Data Acquisition System

This project demonstrates a **PC-based Data Acquisition System** using an ARM7-based microcontroller (LPC2129), RTC, and temperature sensor. It showcases efficient data acquisition, processing, and communication using protocols like I2C, SPI, UART, and RS232.

---

## 📋 **Problem Statement**

The need for a cost-effective and reliable system to:
- Acquire real-time environmental data (e.g., temperature).
- Synchronize and log this data with accurate time information.
- Communicate the processed data to a PC for analysis and display.

---

## ✅ **Solution**

A PC-based data acquisition system is developed using an LPC2129 microcontroller. It reads time from an RTC module and temperature data from a sensor via I2C and SPI. The data is transmitted to a PC via RS232 for logging and visualization.

---

## 🛠️ **Hardware Requirements**

### **Microcontroller**
- **LPC2129 (ARM7-based MCU by NXP)**:
  - **CPU**: 16/32-bit ARM7TDMI-S core running at up to 60 MHz.
  - **On-chip Flash**: 128 KB.
  - **On-chip RAM**: 16 KB.
  - Supports multiple communication protocols (I2C, SPI, UART).

### **Development Board**
- **RidoLabz LPC2129 Development Board**:
  - Integrated LPC2129 microcontroller.
  - GPIO headers for connecting sensors and peripherals.

### **Peripherals**
1. **RTC Module**:  
   - DS1307 (Real-Time Clock) with I2C interface for timekeeping.
2. **Temperature Sensor**:  
   - LM35 (Temperature Sensor) with SPI interface.
3. **RS232 Transceiver**:  
   - MAX232 or equivalent for UART-to-RS232 level shifting.
4. **Optional Display**:  
   - 16x2 LCD or OLED for local data visualization.
5. **Power Supply**:  
   - 5V regulated power supply for the microcontroller and peripherals.

---

## 🔌 **Communication Protocols**
- **I2C**: Interfacing RTC.
- **SPI**: Interfacing Temperature Sensor(LM35).
- **UART**: Communicating data to the PC via RS232.

---

## 💻 **Software Requirements**

### **Development Tools**
1. **Keil μVision IDE**:
   - Compiler: ARM Compiler (RealView).
   - Debugger: JTAG-based debugging.
2. **Flash Magic**:
   - For programming LPC2129 via UART.

### **Programming Language**
- Embedded C for all firmware development.

---

## ⚙️ **System Functionality**

### **1. Data Acquisition**
- Reads time data from the RTC module (I2C).
- Captures temperature data from the LM75 sensor (I2C).

### **2. Data Processing**
- Formats data for display and transmission.
- Implements error detection and correction.

### **3. PC Communication**
- Transmits processed data to the PC using UART (RS232 protocol).
- Data can be logged and displayed using terminal software like Tera Term or custom PC applications.

### **4. Local Display (Optional)**
- Displays data on a 16x2 LCD or OLED screen for quick monitoring.

---
