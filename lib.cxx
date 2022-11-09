#include "lib.hxx"// Must include to hide symbols properly using __attribute__

int my_hidden_symbol() {
	return 0;
}

int my_visible_symbol() {
	return 1;
}
