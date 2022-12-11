#ifndef _MUSICPLAYER_H
#define _MUSICPLAYER_H

#include "song.h"

#define max_songs 100


typedef struct song_data song;
typedef struct Queue musicPlayer;

typedef unsigned max_size;
typedef struct Queue MusicPlayer;
typedef MusicPlayer *MusicPlayer_p;

struct Queue
{
    int front, rear;
    max_size capacity;
    song_p currentsong;
    song_p songq[max_songs];
};

MusicPlayer_p createMusicPlayer();
int addSongToQueue(MusicPlayer_p player1, song_p songd);
int removeSongFromQueue(MusicPlayer_p player1, int X);
int playSong(MusicPlayer_p player1);
song_p getCurrentSong(MusicPlayer_p player1);
#endif