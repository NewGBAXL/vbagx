/****************************************************************************
 * Visual Boy Advance GX
 *
 * Tantric 2008-2023
 *
 * button_mapping.h
 *
 * Controller button mapping
 ***************************************************************************/

#ifndef BTN_MAP_H
#define BTN_MAP_H

enum {
	CTRLR_NONE = -1,
	CTRLR_GCPAD,
	CTRLR_WIIMOTE,
	CTRLR_NUNCHUK,
	CTRLR_CLASSIC,
	CTRLR_WUPC,
	CTRLR_WIIDRC,
	CTRLR_AGBPAD
};

const char ctrlrName[7][32] =
{ "GameCube Controller", "Wiimote", "Nunchuk + Wiimote", "Classic Controller", "Wii U Pro Controller", "Wii U Gamepad", "Game Boy Advance" };

typedef struct _btn_map {
	u32 btn;					// button 'id'
	char* name;					// button name
} BtnMap;

typedef struct _ctrlr_map {
	BtnMap map[15];				// controller button map
	int num_btns;				// number of buttons on the controller
	u16 type;					// controller type
} CtrlrMap;

extern CtrlrMap ctrlr_def[7];

#endif
