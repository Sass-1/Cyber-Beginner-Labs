# Lab 01: Linux Process Management & Signals

## Objective
Understand how the Linux kernel manages programs and interact with them using system signals.

## Commands Mastered
- **top**: Real-time resource monitoring.
- **pstree**: Visualizing process hierarchy.
- **kill**: Sending signals (SIGTERM 15, SIGKILL 9).

# Displaying running processes with their PID and memory usage
ps aux | grep kali

# Sending a termination signal to a specific process (example PID 1234)
kill -15 1234

# Setting permissions: Owner can Read/Write, others have NO access
chmod 600 Linux_Processes.md

# Verifying the permissions change
ls -l Linux_Processes.md
# Expected output: -rw------- 1 kali kali ...
