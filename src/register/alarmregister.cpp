#include "alarmregister.h"

String AlarmRegister::getFormattedValue(int address) {
    int value = getValue(address);
    if(value == VAL_INVALID)
        return "";
    return value == 0 ? "OFF" : "ON";
}
