#include <stdio.h>
#include <string.h>

#define SIZE 100
// Receiver function that displays each frame received
void displayReceivedFrame(char* frame) {
    printf("Received Frame: %s\n", frame);
}

int main() {
    char frame[SIZE];
    int numFrames, numBytes, i;

    // Read in the number of frames to be entered
    printf("Enter the number of frames: ");
    scanf("%d", &numFrames);

    // Consume the newline character left behind by scanf
    getchar();

    // Read in the frames and perform operations on each frame
    for (i = 0; i < numFrames; i++) {
        printf("Enter frame %d: ", i+1);
        fgets(frame,SIZE, stdin);
            /n100110001
        // Remove the trailing newline character from fgets
       frame[strcspn(frame, "\n")] = '\0';

        // Count the number of bytes in the frame and display it
        //numBytes = countBytesInFrame(frame);
        numBytes=strlen(frame);
        printf("Number of bytes in the frame: %d\n", numBytes);

        // Display the received frame
        displayReceivedFrame(frame);
    }

    return 0;
}

