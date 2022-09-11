#include <Arduino.h>
#include <global.h>
#include <sent_recv.h>

void espnow_init();

void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status);
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len);