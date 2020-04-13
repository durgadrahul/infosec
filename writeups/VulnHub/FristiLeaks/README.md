# Summary
This document will walk you through the procedure (step-by-step) to root the machine FristiLeaks.

**WARNING:** This walk through is to be used for learning/educational purposes only.

**NOTE:**
FristiLeaks is a vulnerable VM, which will be our target machine.
Kali Linux (2020) is the VM being used to carry out the pentesting, a.k.a. the attacker machine.
Both VMs are being hosted on VM Workstation.

# WalkThrough

**Step 1:**
Turn on the Target Machine. Machine IP is found to be 192.168.1.28

**Step 2:**
Run nikto or Burp Suite Spider on http://192.168.1.28/ to locate any points of vulnerabilities.
> nikto -h http://192.168.1.28/
Found robots.txt. It has entries for /cola, /sisi and  /beer. All 3 pages are dead end.

**Step 3:**
Since all 3 entries in robots.txt were drinks, I guessed visiting http://192.168.1.28/fristi, which is also a drink. 
This URL takes us to a page which is the admin portal for FristiLeaks website.

**Step 4:**
Continuing the exploration we view the page source. There are some comments which includes a base64 code.

> echo "base64 code" | base64 --decode > evidence.png 

[evidence.png][https://github.com/durgadrahul/pentesting/blob/master/writeups/VulnHub/FristiLeaks/evidence.png]

Once decoded to the .png format, the text in the .png file is found.
There is also a note in the page source, written by someone named "eezeepz".

Attemmpting admin login with username "eezeepz" and password "keKkeKKeKKeKkEkkEk" (text in the png file). Login is successful!!



