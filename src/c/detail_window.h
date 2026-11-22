#pragma once
#include <pebble.h>

// Shows the reminder for a due dose: Taken, Snooze or Skip. Closing it any
// other way snoozes the dose.
void detail_window_push(uint8_t med_index, time_t dose_time);
// Adds a dose to show after the current reminder. Call after detail_window_push().
void detail_window_queue(uint8_t med_index, time_t dose_time);
// Called every minute to keep "In 25 min" current.
void detail_window_tick(void);
