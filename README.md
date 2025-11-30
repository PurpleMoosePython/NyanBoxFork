<div align="center">
  <img src="https://github.com/user-attachments/assets/0eba90bc-2ff5-40df-88a1-92e23396d1d3" alt="logo" width="100" height="auto" />
  
  <h1>nyanBOX</h1>
  <p>Integrated Platform for BLE and 2.4GHz Wireless Analysis</p>
  <p>By Nyan Devices | Maintained by jbohack & zr_crackiin</p>

  <!-- Badges -->
  <p>
    <a href="https://github.com/jbohack/nyanBOX" title="GitHub repo">
      <img src="https://img.shields.io/static/v1?label=nyanBOX&message=jbohack&color=purple&logo=github" alt="nyanBOX - jbohack">
    </a>
    <a href="https://github.com/jbohack/nyanBOX">
      <img src="https://img.shields.io/github/stars/jbohack/nyanBOX?style=social" alt="stars - nyanBOX">
    </a>
    <a href="https://github.com/jbohack/nyanBOX">
      <img src="https://img.shields.io/github/forks/jbohack/nyanBOX?style=social" alt="forks - nyanBOX">
    </a>
  </p>

  <h3>
    <a href="https://nyandevices.com">🌐 Learn More</a> ·
    <a href="https://shop.nyandevices.com">🛒 Purchase nyanBOX</a> ·
    <a href="https://discord.gg/J5A3zDC2y8">💬 Join Discord</a>
  </h3>
</div>

---

## What is nyanBOX?

**nyanBOX** is a compact, comprehensive 2.4GHz wireless analysis device designed for professionals working with Bluetooth, BLE, Wi-Fi, and other protocols operating within the 2.4GHz spectrum. It functions as a versatile, portable platform suitable for security researchers, penetration testers, engineers, and technical hobbyists seeking an in-depth understanding of wireless communication and device behavior.

Powered by an ESP32, three NRF24 modules, a high-clarity OLED display, and a 2500mAh rechargeable battery, nyanBOX enables effective wireless scanning, detection, and analysis in the field with no external hardware required. Typical applications include identifying BLE devices, detecting tracking beacons such as AirTags, locating skimming devices, examining RF channel activity, and performing authorized wireless security evaluations.

**→ [Learn more at nyandevices.com](https://nyandevices.com)**

<div align="center">
  <img src="https://github.com/user-attachments/assets/530e5686-09db-4f02-aabe-80a8abcbb036" alt="nyanBOX Interface" width="650" />
</div>

---

## ⚡ Key Advantages

- **Plug & Play Operation** – USB-C powered and ready for immediate use  
- **Extended Battery Life** – 2500mAh battery supports up to a full day of typical operation  
- **Progress Monitoring System** – Integrated leveling system providing usage insights  
- **Open-Source Firmware** – Fully customizable with active community contributions  
- **Comprehensive 2.4GHz Suite** – Over 20 integrated tools for BLE, Bluetooth, Wi-Fi, and RF diagnostics  
- **Portable Design** – Compact form factor optimized for field work  
- **Regular Updates** – Ongoing feature additions and improvements

**Interested? [Purchase nyanBOX at shop.nyandevices.com](https://shop.nyandevices.com)**

---

## 🎯 Features & Capabilities

> **⚠️ Note:** Some advanced tools may require activation through the Settings menu.

### 📶 WiFi Tools
- **WiFi Scanner** – Identifies nearby Wi-Fi access points  
- **Channel Analyzer** – Measures channel utilization and signal strength for network assessment  
- **WiFi Deauther** – Educational tool for performing authorized deauthentication tests  
- **Deauth Scanner** – Monitors and analyzes Wi-Fi deauthentication frames in real time  
- **Beacon Spam** – Broadcasts multiple simulated Wi-Fi networks; supports cloning real SSIDs and generating customized lists  
- **Evil Portal** – Creates a configurable captive portal with realistic network spoofing options  
- **Pineapple Detector** – Identifies nearby Wi-Fi Pineapple devices  
- **Pwnagotchi Detector** – Detects Pwnagotchi units and displays relevant data  
- **Pwnagotchi Spam** – Generates spoofed Pwnagotchi beacons, with optional DoS mode for controlled testing

### 🔵 Bluetooth (BLE) Tools
- **BLE Scanner** – Detects and profiles nearby BLE devices  
- **nyanBOX Detector** – Locates nearby nyanBOX units with signal and version data  
- **Flipper Scanner** – Identifies nearby Flipper Zero devices  
- **Axon Detector** – Detects Axon body-worn law enforcement equipment  
- **Meshtastic Detector** – Identifies devices running Meshtastic firmware  
- **MeshCore Detector** – Detects MeshCore-based devices  
- **Skimmer Detector** – Identifies HC-03, HC-05, and HC-06 modules often found in skimming equipment  
- **AirTag Detector** – Detects Apple AirTag devices  
- **AirTag Spoofer** – Clones and transmits AirTag identifiers for controlled testing scenarios  
- **Tile Detector** – Detects Tile tracking devices  
- **BLE Spammer** – Broadcasts custom BLE advertisements  
- **Swift Pair** – Triggers Windows Swift Pair notifications for research purposes  
- **Sour Apple** – Simulates Apple Bluetooth pairing broadcasts for resilience testing  
- **BLE Spoofer** – Fully clones detected BLE devices, including MAC address and advertisement data

### 📡 Signal & Protocol Tools
- **Flock Detector** – Detects Flock Safety surveillance units using correlated Wi-Fi/BLE scanning  
- **Scanner** – Performs band-wide scanning of the 2.4GHz spectrum  
- **Analyzer** – Provides detailed activity metrics for detected signals  

---

## 🎮 Leveling System

The integrated leveling system offers structured, persistent feedback on device usage:

- **Progress Tracking** – XP earned by using various tool categories  
- **Rank Advancement** – Nine rank tiers available  
- **Usage Analysis** – Tools award XP at varying rates  
- **Session Bonuses** – Extended use yields additional progression  
- **Persistent Storage** – Data stored in EEPROM across power cycles  
- **Reset Option** – Users may reset progress via the Settings menu  
- **Device Networking** – Level and version broadcast for discovery by other nyanBOX units  

Access detailed statistics via the RIGHT directional button in the main menu.

---

## 🛠️ Hardware Specifications

| Component        | Details                                      |
|-----------------:|----------------------------------------------|
| Microcontroller  | ESP32 WROOM-32U (dual-core, Wi-Fi + BLE)     |
| Wireless Modules | 3× NRF24 GTmini modules                      |
| Display          | 0.96" OLED                                   |
| Power            | USB-C + 2500mAh rechargeable battery         |
| Battery Life     | Up to one full day of typical usage          |
| Case             | Protective enclosure included                |
| Debug Interface  | UART                                          |

Purchase: https://shop.nyandevices.com

---

## 🚀 Getting Started

### First-Time Setup

Purchase a nyanBOX from **[shop.nyandevices.com](https://shop.nyandevices.com)** and install firmware within minutes using the web-based flashing tool.

### Firmware Installation & Updates

#### Recommended: Web Flasher
1. Visit **[nyandevices.com/flasher](https://nyandevices.com/flasher)**  
2. Connect the device via USB-C  
3. Select **Install nyanBOX Firmware**  
4. The installation completes automatically  

#### Advanced: PlatformIO
1. Install [VS Code](https://code.visualstudio.com/) and [PlatformIO](https://platformio.org/install/ide?install=vscode)  
2. Clone or download the repository  
3. Open the project in VS Code  
4. Select Upload in PlatformIO  
5. The device will flash and restart  

**Troubleshooting:**  
- Port unavailable: install [CP210x drivers](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers)  
- Upload failure: hold the BOOT button during flashing  
- Need assistance? Join the [Discord community](https://discord.gg/J5A3zDC2y8)

---

## ⚠️ Legal Disclaimer

**Use nyanBOX responsibly and ethically.**  
It is designed strictly for authorized testing, research, and educational purposes.

- Do not perform unauthorized network attacks  
- Obtain explicit permission prior to conducting assessments  
- Comply with all applicable local laws and regulations  
- Users are fully responsible for their actions  

By using nyanBOX, you agree to adhere to lawful and ethical usage practices.

---

## ❓ FAQ

**Is nyanBOX legal to own?**  
Yes. Ownership is legal, though specific features may be subject to local restrictions.

**How long does the battery last?**  
Up to one full day during typical operation. Continuous intensive scanning may reduce runtime.

**Can I develop my own tools?**  
Yes. The firmware is open source and supports extensive customization.

**Does it come with firmware pre-installed?**  
Devices ship ready for flashing. The web flasher enables installation in minutes.

---

## 💬 Join the Community

Have questions or need assistance?

- **[Discord](https://discord.gg/J5A3zDC2y8)** – Primary community hub  
- **[GitHub Issues](https://github.com/jbohack/nyanBOX/issues)** – Bug reports and feature requests  
- **[nyandevices.com](https://nyandevices.com)** – Documentation and guides  

---

## 💝 Support the Project

If you find nyanBOX valuable, consider supporting development:

- ⭐ Star this repository  
- 🛒 **[Purchase at shop.nyandevices.com](https://shop.nyandevices.com)**  
- ☕ Support the developers:  
  - [jbohack on Ko-fi](https://ko-fi.com/jbohack)  
  - [zr_crackiin on Ko-fi](https://ko-fi.com/zrcrackiin)  
- 🗣️ Share with others interested in wireless research  

### Built By
- [jbohack](https://github.com/jbohack)
- [zr_crackiin](https://github.com/zRCrackiiN)

---

## 🙏 Acknowledgments

- [Poor Man's 2.4 GHz Scanner](https://forum.arduino.cc/t/poor-mans-2-4-ghz-scanner/54846)  
- [arduino_oled_menu](https://github.com/upiir/arduino_oled_menu)  
- [Universal-RC-system](https://github.com/alexbeliaev/Universal-RC-system)  
- [AppleJuice](https://github.com/ECTO-1A/AppleJuice)  
- [ESP32-Sour-Apple](https://github.com/RapierXbox/ESP32-Sour-Apple)  
- [PwnGridSpam](https://github.com/7h30th3r0n3/PwnGridSpam)  
- [ESP32-AirTag-Scanner](https://github.com/MatthewKuKanich/ESP32-AirTag-Scanner)  
- [ESP Web Tools](https://esphome.github.io/esp-web-tools/)  
- [Flock You](https://github.com/colonelpanichacks/flock-you)  
- [Original nRFBOX Project](https://github.com/cifertech/nrfbox)

Thank you to all contributors, testers, supporters, and community members.

---

## 📜 License

MIT License – see [LICENSE](LICENSE) for details.

---

<div align="center">
  <h3>Ready to explore the 2.4GHz spectrum?</h3>
  <p>
    <a href="https://shop.nyandevices.com"><strong>🛒 Purchase nyanBOX</strong></a>
  </p>
  <p>#BadgeLife</p>
</div>
