#include "song.h"

#include <stdlib.h>
#include <string.h>

song_p makeSong(char *song_name_, char *song_artist_, float duration_)
{

    song_p made_song = (song_p)malloc(sizeof(song));

    strcpy(made_song->name, song_name_);
    strcpy(made_song->artist_name, song_artist_);
    made_song->duration = duration_;

    return made_song;
}
