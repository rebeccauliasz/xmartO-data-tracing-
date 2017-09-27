# xmartO-data-tracing
Assignment for Physical Comptuing, 9_27

Unsecured Camera List 
https://reolink.com/unsecured-ip-camera-list/

Databases 
insecam.org 
Insecam is a controversial database that collects and organizes the IP addresses of unprotected or admin-password weakly protected security camera and presents them in a public interface. The people who are behind the site state that it is done for the sake of raising awareness, and that anyone can contact them at any time and request that their camera be removed… 

shodan 
Publicly searchable IoT devices database


https://www.csoonline.com/article/2224469/microsoft-subnet/hacks-to-turn-your-wireless-ip-surveillance-cameras-against-you.html

"Foscam wireless IP cameras are called by different brand names in Europe, but the actual insecure device is the same. According to security researchers, two out of 10 wireless IP cameras in the wild that can be found via Shodan will authenticate you with 'admin' without requiring password. For example, using Shodan to search for 'Netwave IP Camera,' 16,293 wireless IP cameras were found in the US, 15,898 in Germany, and 13,289 in France.”

"Shekyan and Harutyunyan said DoS is yet a different attack scenario and it takes only seconds; since the camera only logs authenticated requests, there are no traces on the camera. An attacker can "grab videostream, email, FTP, MSN, Wi-Fi credentials." Malicious hackers could also host malware, or run arbitrary software such as botnets, proxies, and scanners. Another attack involves creating a backdoor by adding a hidden user to the camera and attacking a victim's browser using BeEF. These cameras are also connected to the local network, meaning that an attacker could exploit it to find and remotely hack other devices that wouldn't normally be accessible from the Internet.”

Automated attack tool: 

https://github.com/artemharutyunyan/getmecamtool

TrapWire 
https://io9.gizmodo.com/5933966/wikileaks-reveals-trapwire-a-government-spy-network-that-uses-ordinary-surveillance-cameras


Insecam is down at the time of my writing this, but I had given a talk a few months ago and had some IP addresses of unsecured cams saved in my notes (yes, I know this is very creepy, but I was trying to argue a point). I checked all the links and found that all of them were dead now (good, maybe Insecam is working?) except for one, which brought up the interface when I followed it. The default username was “admin” and it was not password protected 

Once inside the interface, I can view all 4 connected cams, pan and zoom them, go back in time to prerecorded footage, and access the settings to find out the device and hardware info, and the network information including MAC, IP, DNS etc. I can do things like disable cams, change the schedules, and set alarms

By searching the model number, I found that these cameras were made by a company called xmartO 



Research into xmartO reveals that they are a newish company, opened in 2015 and based out of Hong Kong. Their system uses an IP camera/ NVR (Network Video Receiver) model that can either connect to a router or serve as a router itself. Research into the system yielded the following flowchart: 

It is unclear, based on the provided information, who the “3rd party” agents are. It seems problematic, considering how easily private information can be collected from an unsecured interface, that the company does not take tighter measures to ensure that confidential user information is not stolen. 


