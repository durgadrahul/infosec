# Summary
This document will walk you through the procedure (step-by-step) to root the machine Metasploitable2.
The Goal is to get root access in the target machine.

**WARNING:** This walk through is to be used for learning/educational purposes only.

**NOTE:**
Metasploitable2 is a vulnerable VM, which will be our target machine.
Kali Linux (2020) is the VM being used to carry out the pentesting, a.k.a. the attacker machine.
Both VMs are being hosted on VM Workstation.

# WalkThrough

**Step 1:**
Turn on the Target Machine. Run netdiscover on local machine (Attacker's) on interface eth0
> netdiscover -i eth0

Target Machine IP found to be `192.168.1.39`
