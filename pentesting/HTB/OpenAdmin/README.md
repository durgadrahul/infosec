# Summary
This document will walk you through the procedure (step-by-step) to root the machine OpenAdmin.
The Goal is to locate all 3 keys hidden in the target machine.

**WARNING:** This walk through is to be used for learning/educational purposes only.

**NOTE:**
OpenAdmin is a vulnerable VM, which will be our target machine.
Kali Linux (2020) is the VM being used to carry out the pentesting, a.k.a. the attacker machine.
Kali is being hosted on VM Workstation. OpenAdmin is a server hosted by HackTheBox.

# WalkThrough

**Step 1:**
Connect to the Target Machine via VPN connection file issued by HackTheBox. Target Machine IP found to be `10.10.10.171`

Run NMap to scan target machine for open ports. 
> nmap -sC 10.10.10.171

Port 80 is found open.

**Step 2:**
