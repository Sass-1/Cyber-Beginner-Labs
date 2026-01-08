# Lab 02: Network Reconnaissance & Threat Hunting

## Objective
Identify network assets and simulate an incident response workflow to neutralize persistent processes.

## 1. Network Identification
- **Tool:** `ip addr` & `hostname -I`
- **Result:** Identified local IP and active network interfaces to map the attack surface.

## 2. Threat Hunting Simulation
I simulated a background threat to practice the **Identify-Analyze-Neutralize** workflow.
- **Threat name:** `persistent_threat.sh`
- **Detection:** Used `ps -aux | grep persistent` to find the process ID (PID).
- **Neutralization:** Executed `kill -15 [PID]` to terminate the process gracefully.
- **Verification:** Confirmed process termination with a secondary audit.

## 3. Incident Response SOP
Based on this lab, I established a Standard Operating Procedure:
1. **Identify:** Locate suspicious PIDs and listening ports (`netstat -tunlp`).
2. **Analyze:** Check process origins and parents (`ps -f`).
3. **Neutralize:** Use `kill` signals (15 for graceful, 9 for forced).
