#!/bin/sh

avrdude -p m328p -c usbasp -U flash:w:42keebs_lumberjack_c_omikronik.hex:i
