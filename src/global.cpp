#include <global.h>
#include <ArduinoJson.h>

esp_now_peer_info_t peerInfo;

char RECV_MESSAGE[250], SENT_MESSAGE[250], PAYLOAD[250];
uint16_t ID = 0;
float SCL_TANK = 0, BCL_TANK = 0, EC = 0, EC_TEMP = 0, PH = 0, PH_TEMP = 0, TEMPERATURE = 0, HUMIDITY = 0;
bool EC_SENSOR_INPUT = false, PH_SENSOR_INPUT = false, ULTRASONIC_SENSOR_INPUT = false, MESSAGE_STATUS = false;
uint8_t BOARD_CAST_ADDRESS[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
