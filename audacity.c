#include <avr/io.h>
#include <avr/pgmspace.h>
#include <uzebox.h>

#include "data/patches.inc"
#include "data/midisong.h"
#include "data/tileset.inc"

int main()
{
  SetTileTable(tileset);
  InitMusicPlayer(patches);
  DrawMap(0, 0, map_graphic);
  WaitVsync(60);
  TriggerNote(4, 5, 23, 255); // testing
  WaitVsync(60);
  StartSong(midisong);
  for (;;) {
    WaitVsync(240);
    TriggerNote(4, 6, 12, 255); // skrattar du
  }
}
