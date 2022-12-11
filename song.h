#ifndef _SONG_H
#define _SONG_H

#define MAX_L 100


typedef struct song_data song;
typedef struct song_data *song_p;

struct song_data{
    char name[MAX_L];
    char artist_name[MAX_L];
    float duration;
};

song_p makeSong(char *song_name, char *song_data, float duration);

#endif