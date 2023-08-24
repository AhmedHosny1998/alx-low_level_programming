#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
 int create_file(const char *filename, char *text_content)
 {
     int fo;
     int nl;
     int rw;
     if(!filename)
        return(-1);
     fo = open(filename , O_CREAT | O_TRUNC | O_WRONLY , 0600);
     if(fo == -1)
        return(-1);
     if(!text_content)
        text_content= "";
     for(nl = 0 , text_content[nl], nl++)
     rw = write(fo , text_content , nl);
     if(rw == -1)
        return(-1);
     close(fo);
 
 return(1);

}

