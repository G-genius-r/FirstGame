struct Button_State {
	bool is_down;
	bool changed;
};

enum {
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_W,
	BUTTON_S,

	BUTTON_COUNT, // should be the last itom
};

struct Input {
	Button_State buttons[BUTTON_COUNT];
};