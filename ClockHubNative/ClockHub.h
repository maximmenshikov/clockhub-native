// (C) ultrashot 2011-2013
// All rights reserved
#pragma once

typedef enum
{
    TIME_CHANGE = 0,
    BATTERY_PERCENT_CHANGE = 1,
    POWER_STATE_TRANSITION = 2,
    PROCESS_SWITCH = 3,
    TOKEN_SHOWN = 4,
    CONDITION_CHANGED = 5
}CLOCKHUB_UPDATE_TIME_REASON;

typedef struct
{
    BOOL isAlarmInQueue;
    DWORD batteryPercent;
    SYSTEMTIME localTime;
    BOOL isTime24;
    DWORD AccentColor;
}CLOCKHUB_STATE_IMAGE;

#define WM_LIVETOKENS_INVOKE (WM_USER + 0x1504)
#define WM_LIVETOKENS_INVOKE_SYNC 1
//#define WM_LIVETOKENS_INVOKE_UNSYNC 2
//#define WM_LIVETOKENS_INVOKE_UPDATE 3
#define WM_LIVETOKENS_INVOKE_UPDATE_BATTERY_PERCENTAGE 4

#define CLOCKHUB_TOKEN L"ClockHubToken"
