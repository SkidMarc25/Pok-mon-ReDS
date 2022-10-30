// all of the current configurations for this project.  each is explained in a comment.

// START_ADDRESS defines the file address within the synthetic overlay where you would like to place all of the code that this project uses.  this is largely the repointed tables that the code uses.
// if START_ADDRESS is 0x10000, then the tables will be inserted at address 0x10000 of the synthetic overlay
// the current implementation (with all gen 5 mons) uses ~9222/0x2406 bytes.  make sure this points to that much free space (probably allow for a little bit more than that)
START_ADDRESS equ 0x0

// FAIRY_TYPE_IMPLEMENTED defines whether or not the fairy type has been implemented as type 9 or not.  it will be replaced with TYPE_NORMAL if the following is 0, 1 if the fairy type has been implemented
FAIRY_TYPE_IMPLEMENTED equ 0

// DEBUG_NEEDS_TESTING defines in progress implementations that may not necessarily function.
DEBUG_NEEDS_TESTING equ 0

// BATTLE_MODE_FORCE_SET defines whether or not players will be able to switch out mons when the opponent sends out their next mon. The player will be able to choose themselves like normal if the following is 0, 1 if the player will be forced to use "set"
BATTLE_MODE_FORCE_SET equ 0

// ALWAYS_HAVE_NATIONAL_DEX defines whether or not the player will always have the national dex unlocked.
ALWAYS_HAVE_NATIONAL_DEX equ 0

// ALWAYS_UNCAPPED_FRAME_RATE defines whether or not the frame rate of the game will always be uncapped, including in the overworld.
ALWAYS_UNCAPPED_FRAME_RATE equ 0

// BATTLES_UNCAPPED_FRAME_RATE defines whether or not the frame rate of the game will be uncapped solely in battles or not.
BATTLES_UNCAPPED_FRAME_RATE equ 1

// FAST_TEXT_PRINTING will make the text print quickly, almost instantly
FAST_TEXT_PRINTING equ 0
