# 🚀 Embedded Linux System Monitor (C++)

## 📌 Overview

This project is a **system-level monitoring tool for Linux**, developed in C++.
It reads real-time system data directly from the Linux `/proc` filesystem and displays CPU and memory usage.

The project demonstrates core concepts used in **embedded Linux and low-level system programming**.

---

## 🎯 Key Features

* Real-time CPU usage monitoring from `/proc/stat`
* Memory usage tracking from `/proc/meminfo`
* Modular architecture (CPU, Memory, System separation)
* Continuous monitoring with timed updates
* Lightweight and efficient implementation

---

## 🧠 Technical Concepts Demonstrated

* System-level programming in Linux
* File parsing from `/proc` filesystem
* Real-time data processing
* Modular software design
* Basic multithreading concepts

---

## 🏗️ Architecture

```
Main Loop
   ↓
CPU Module → Reads /proc/stat
Memory Module → Reads /proc/meminfo
   ↓
Data Processing
   ↓
Console Output
```

---

## ⚙️ Build Instructions

```bash
mkdir build
cd build
cmake ..
make
```

---

## ▶️ Run

```bash
./monitor
```

---

## 📂 Project Structure

```
src/
 ├── main.cpp
 ├── cpu.cpp
 ├── memory.cpp

include/
 ├── cpu.h
 ├── memory.h
```

---

## ⚠️ Limitations

* Runs only on Linux systems
* Simplified CPU calculation (not production-grade)
* No GUI (CLI-based output)

---

## 🚀 Future Improvements

* Add process-level monitoring
* Implement ncurses-based UI
* Improve accuracy of CPU calculation
* Add logging and export functionality

---


---
