#define HIDE __attribute__((visibility("hidden")))
#define SHOW __attribute__((visibility("default")))

HIDE int my_hidden_symbol();
SHOW int my_visible_symbol();
