# Lab 03: System Hardening with UFW (Uncomplicated Firewall)

## Objective
To secure the Linux environment by implementing a host-based firewall, restricting unauthorized access while maintaining essential service connectivity.

## Steps Performed
1. **Installation & Activation:** Configured `ufw` on Kali Linux to deny all incoming traffic by default.
2. **Rule Configuration:** Explicitly allowed port `22/tcp` (SSH) to ensure administrative access.
3. **Verification:** Used `nmap` to verify the state of the system before and after firewall activation.

## Results
* **Firewall Status:** `Active`
* **Incoming Policy:** `Deny` (Default)
* **Outgoing Policy:** `Allow` (Default)
* **Evidence:** After activation, unauthorized port connection attempts changed from `closed` to `filtered`, indicating that the firewall is actively dropping suspicious packets.

## Evidence
Here is the status of the firewall after configuration:

![UFW Status Screenshot](ufw_status.png)

> [!IMPORTANT]
> This lab demonstrates "System Hardening," a critical step in the defense-in-depth strategy to reduce the attack surface of a machine.
