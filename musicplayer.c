#include "musicplayer.h"
#include <stdlib.h>

MusicPlayer_p createMusicPlayer()
{
    MusicPlayer_p player1 = (MusicPlayer_p)malloc(sizeof(MusicPlayer));
    player1->capacity = max_songs;

    player1->front = 0;
    player1->rear = -1;

    for (int i = 0; i < max_songs; i++)
    {
        player1->songq[i] = NULL;
    }

    player1->currentsong = NULL;
    return player1;
}

int addSongToQueue(MusicPlayer_p player1, song_p songtoadd)
{
    if (player1->rear == max_songs - 1)
    {
        return 1;
    }
    else
    {
        player1->rear++;
        player1->songq[player1->rear] = songtoadd;
        return 0;
    }
}

int removeSongFromQueue(MusicPlayer_p player1, int index)
{

    if (player1->rear == -1)
        return 1;

    if (player1->rear < index)
        return 1;
    else
    {
        song_p temp;
        temp = player1->songq[index];

        for (int i = index; i < player1->rear; i++)
        {
            player1->songq[i] = player1->songq[i + 1];
        }

        player1->songq[player1->rear] = NULL;
        player1->rear--;
        return 0;
    }
}

int playSong(MusicPlayer_p player1)
{
    if (player1->rear == -1)
        return 1;
    else
    {
        player1->currentsong = player1->songq[0];

        for (int i = 0; i < player1->rear; i++)
        {
            player1->songq[i] = player1->songq[i + 1];
        }

        player1->songq[player1->rear] = NULL;
        player1->rear--;
        return 0;
    }
}

song_p getCurrentSong(MusicPlayer_p player1)
{
    return player1->currentsong;
}
