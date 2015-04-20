// This file contains only 32bit-Due-boards

#ifndef BOARDS_H
#define BOARDS_H

#define BOARD_UNKNOWN -1

#ifndef __SAM3X8E__
 #error Oops!  Make sure you have 'Arduino Due' selected from the 'Tools -> Boards' menu.
#endif

#define BOARD_RADDS         402   // RADDS
#define BOARD_RAMPS_FDV1    403   // RAMPS-FD V1
#define BOARD_RAMPS_FDV2    404   // RAMPS-FD V2
#define BOARD_RAMPS4DUE     433   // RAMPS4DUE with AndrewBCN's RAMPS mods (http://forums.reprap.org/read.php?219,479626,page=1)
#define BOARD_ALLIGATOR     501   // ALLIGATOR R2 ARM 32

#define MB(board) (MOTHERBOARD==BOARD_##board)

#endif //__BOARDS_H
