#if !defined (_ISA_DEFINITIONS_H_)
#define _ISA_DEFINITIONS_H_

// diody LED
#define LED8		2
#define LED7		3
#define LED6		4
#define LED5		5
#define LED4		6
#define LED3		7
#define LED2		8
#define LED1		9

const static int LEDS[] = {LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8};

// brz�czyk
#define BUZZER		24

// klawisze - strza�ki
#define KEY_UP		47
#define KEY_DOWN	49
#define KEY_LEFT	48
#define KEY_RIGHT	46

const static int KEY_ARROWS[] = {KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT};

// potencjometr
#define	POT			A9

// joystick 1 i 2, obie osie (X, Y)
#define JOY1X		A11
#define JOY1Y		A10
#define JOY2X		A1
#define JOY2Y		A0

// serwonap�dy - wyj�cia PWM
#define SERVO1		10
#define SERVO2		11
#define SERVO3		12
#define SERVO4		13

const static int SERVOS[] = {SERVO1, SERVO2, SERVO3, SERVO4};

// ultrad�wi�kowy czujnik odleg�o�ci
#define USOUND_PING	45
#define USOUND_ECHO	44

// prze��czniki typu DIP-switch
#define SWITCH1		50
#define SWITCH2		51
#define SWITCH2		52
#define SWITCH3		53

const static int SWITCHES[] = {SWITCH1, SWITCH2, SWITCH3, SWITCH4};

// wyj�cie analogowe do wzmacniacza audio
#define SOUND		0

// wy�wietlacz OLED (128x64), wymaga sprz�towego kontrolera SPI
#define OLED_CS		22
#define OLED_DC		25

// wy�wietlacz matrycowy LED 8x8, wymaga sprz�towego kontrolera SPI
#define LED88_CS	43

// wy�wietlacz alfanumeryczny LCD 16x2
#define LCD_RS		26
#define LCD_RW		error
#define LCD_E		28
#define LCD_D4		29
#define LCD_D5		30
#define LCD_D6		31
#define LCD_D7		32

const static int LCD_DATA[] = {LCD_D4, LCD_D5, LCD_D6, LCD_D7};

// wy�wietlacz siedmiosegmentowy LED
#define SSEG_STR1	33
#define SSEG_STR2	34
#define SSEG_STR3	35
#define SSEG_STR4	36
#define SSEG_OE		37
#define SSEG_DATA	38
#define SSEG_CLOCK	39

// klawiatura numeryczna
#define NUM_LATCH	40
#define NUM_CLOCK	41
#define NUM_DATA	42

#endif // _ISA_DEFINITIONS_H_



