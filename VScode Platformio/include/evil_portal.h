/* ____________________________
   This software is licensed under the MIT License:
   https://github.com/jbohack/nyanBOX
   ________________________________________ */

#ifndef EVIL_PORTAL_H
#define EVIL_PORTAL_H

#include <WiFi.h>
#include "esp_wifi.h"
#include <U8g2lib.h>
#include <Arduino.h>
#include <WebServer.h>
#include <DNSServer.h>
#include <vector>

void evilPortalSetup();
void evilPortalLoop();

#endif