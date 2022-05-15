#include <stdio.h>
#include <windows.h>
#include<stdlib.h>

int main()
{
    //Sets the sizing of the command prompt
    system("MODE 120, 40");

    //sets the variable used for counting down
    int i;

    //Text file stuff
    FILE *f;
    int c;

    f = fopen("adachi.txt","r");
    while(1)
    {
        c = fgetc(f);
        if( feof(f) )
        {
            break;
        }
        printf("%c",c);
    }
    fclose(f);
    //Wait one second before printing True and using the vine boom
    sleep(1);

    PlaySound("vineboom.wav", NULL, SND_ASYNC);
    printf("\nTrue!\n\n");
    //sleep for 5 seconds before counting down to close the program
    sleep(5);
    //countdown till the program closes
    for(i = 3; i > 0; i--)
    {
        printf("\rThis app will close in aproximately: ");
        printf("%d", i);
        PlaySound("beep.wav", NULL, SND_ASYNC);
        sleep(1);
    }

    return 0;
}
