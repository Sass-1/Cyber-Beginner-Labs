#  Cybersecurity Learning Journey

Welcome to my technical portfolio! This repository documents my hands-on experience and progress as I transition into the cybersecurity field. My focus is on mastering Linux administration, network security, and defensive operations.

##  Skills & Tools
- **Operating Systems:** Advanced use of Linux (Kali Linux, Ubuntu) via Command Line Interface (CLI).
- **Networking:** Connectivity diagnostics, DNS resolution, and port monitoring.
- **System Administration:** Process management, signal handling (SIGTERM/SIGKILL), and package management (APT).
- **Version Control:** Professional use of Git and GitHub for technical documentation.

##  Labs & Projects

### [Lab 01: Linux Process Manipulation](./Linux_Processes.md)
* **Topic:** Managing system resources and understanding kernel signals.
* **Key Learning:** Mastered `top`, `ps`, and `kill` commands to monitor and secure system activity*
* **Technical Highlights:**
  * Process lifecycle management using `top`, `ps`, and `kill`.
  * Implementation of **File System Security** using `chmod` octal modes.
  * Verified access control (Confidentiality) by testing permission denials for non-owner users..

### [Lab 02: Network Reconnaissance & Threat Hunting](./Networking_Lab.md)
* **Topic:** Monitoring system processes and neutralizing persistent threats.
* **Key Learning:** Understanding how to identify, track, and terminate suspicious background activities.
* **Technical Highlights:**
  * Network surface mapping using `nmap` and `ip addr`.
  * Identification of active services and unauthorized listening ports.
  * **Threat Hunting Simulation:** Detecting and neutralizing persistent processes.
  * Implementation of Incident Response SOP (Standard Operating Procedures).

### [Lab 03: Network Hardening & Firewalling (UFW)]
* **Topic:** Securing system access and minimizing the attack surface.
* **Key Learning:** Implementation of the "Least Privilege" principle at the network level using a firewall.
* **Technical Highlights:**
  * Configuration of a "Deny by Default" policy to block unauthorized incoming traffic.
  * Selective port management (SSH/HTTP) to maintain secure administrative access.
  * Post-Hardening Verification: Using nmap to validate the invisibility of filtered ports from an external perspective.

### [Lab 04: C++ Network Scanner Development]
* **Topic:** Socket programming and low-level network protocol analysis.
* **Key Learning:** Understanding the TCP Three-Way Handshake and implementing manual network requests at the system level.
* **Technical Highlights:**
    * **Socket Programming:** Developed a custom port scanner using C++ to interact directly with network interfaces.
    * **TCP Connectivity Testing:** Implemented logic to detect open, closed, or filtered ports via connection attempts.
    * **Memory Management:** Applied efficient memory usage through pointers and data structures to handle multiple scan requests.
    * **Comparative Audit:** Validated the custom scanner's accuracy by comparing results against professional tools like `nmap`.
---
*“Continuous learning is the best defense in a changing threat landscape.”*
