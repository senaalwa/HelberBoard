#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 17;
static const uint8_t RX = 16;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

static const uint8_t SS    = 2;
static const uint8_t MOSI  = 23;
static const uint8_t MISO  = 19;
static const uint8_t SCK   = 18;
static const uint8_t RESET = 4;

static const uint8_t A1 = 13;
static const uint8_t A2 = 25;

static const uint8_t D1 = 12;
static const uint8_t D2 = 14;
static const uint8_t D3 = 27;
static const uint8_t D4 = 26;


#endif /* Pins_Arduino_h */
