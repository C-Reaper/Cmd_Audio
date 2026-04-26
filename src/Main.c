#if defined __linux__
#include "/home/codeleaded/System/Static/Library/Audio.h"
#elif defined _WINE
#include "/home/codeleaded/System/Static/Library/Audio.h"
#elif defined _WIN32
#include "F:/home/codeleaded/System/Static/Library/Audio.h"
#endif

#define SAMPLE_RATE             44100
#define CHANNELS                1
#define BITS_PER_SAMPLE         16
#define DURATION_SECONDS        5
#define FRAMES_PER_BUFFER       1024
#define FILENAME_IN             "./data/coin.wav"
#define FILENAME_OUT            "./data/Rec_out.wav"

/*
int main(int argc, char *argv[]) {
    IAudio a = IAudio_New(BITS_PER_SAMPLE,FRAMES_PER_BUFFER,CHANNELS,SAMPLE_RATE,500000);
    IAudio_Start(&a);
    
    sleep(DURATION_SECONDS);
    
    IAudio_Stop(&a);  
    IAudio_Write(&a,FILENAME_OUT);
    IAudio_Free(&a);
    printf("record done.\n");
    return 0;
}
*/

int main(int argc, char *argv[]) {
    // if (argc != 2) {
    //     printf("use: %s <wav-file .wav>\n",argv[0]);
    //     return 1;
    // }

    OAudio a = OAudio_New(BITS_PER_SAMPLE,FRAMES_PER_BUFFER,2,SAMPLE_RATE);
    WavFile wf = WavFile_Read(FILENAME_IN,FRAMES_PER_BUFFER);
    //WavFile wf = WavFile_Read(argv[1],FRAMES_PER_BUFFER);
    WavFile_Print(&wf);

    OAudio_Adapt(&a,&wf);
    OAudio_Play(&a,&wf);

    WavFile_Free(&wf);
    OAudio_Free(&a);

    printf("replay done.\n");
    return 0;
}
