/*
CH-230-A
a8_p9.c
Yen Ling Wong
ywong@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to join files together
void concat(FILE *fp1, char * fname){
    
    int lSize;
    // Variable to store size of file
    FILE *fp = fopen(fname, "rb");
    // Opening file to read in bytes
    char buffer[64];
    // Small chunks of code of 64 bytes read one at a time
    memset(buffer, '\0', sizeof(buffer));
    // Initializing buffer as null pointer

    if (fp == NULL){
        printf("The file doesn't exist\n");
        exit(1);
    }
    // Check if file exist
    fseek( fp , 0L , SEEK_END);
    lSize = ftell( fp );
    fseek( fp, 0L , SEEK_SET);
    // points to the start of the file
    // Then iterates through the end
    // ftell finds size of file
    // The pointer is at the end, so now go to front

    while(fread(buffer, 1, lSize, fp) && lSize > 0){
        // Reading function to read by chunks
        // Buffer is the name of the chunk
        // 1 is how many bytes to read at a time
        // lSize is how many bytes to read from the file
        // Which is, in this context, the whole file
        // fp is the file you read from
        
        if (lSize < 64){
            // For the last chunk, which may be
            // Smaller than 64
            for (int i = 0; i < lSize; i++){
                printf("%c", buffer[i]);
            }
            printf("\n");
            fwrite(buffer, lSize, 1, fp1);
            // To write into the output file
            // 1 byte at a time
            lSize = 0;
            // Stops the while loop
        } else {
            for (int i = 0; i < lSize; i++){
                printf("%c", buffer[i]);
            }
            printf("\n");
            fwrite(buffer, 64, 1, fp1);
            lSize = lSize - 64;
            // The size of the file is reduced by 64 at a time
        }

    }

    fputc('\n', fp1);
    // program should concatenate the content of the 
    //n files separated by ’\n’
    fclose(fp);
    // Closing the file
}

int main () {
    int n;
    // Read number of files
    FILE *fp1;
    
    fp1 = fopen("output.txt", "wb");

    if (fp1 == NULL){
        printf("The file doesn't exist\n");
        exit(1);
    }
    // Check if file exists

    char fname[100];
    // Variable for file name
    scanf("%d", &n);
    // Reading number of files to be read
    getchar();

    printf("We are going to concating the content of %d files ...\n", n);
    printf("Please enter the names of the files: \n");
    

    for (int i = 0; i < n; i++ ){
        scanf("%s", fname);
        concat(fp1, fname);
        // Loop because arbitary number of files
        // Concat function
    }
    fclose(fp1);
    // Closing the file
    printf("The result was written into output.txt\n");


    return 0 ;
}