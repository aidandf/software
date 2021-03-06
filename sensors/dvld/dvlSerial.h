#ifndef DVLSERIAL_H
#define DVLSERIAL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>

// Maximum number of times we try to send data when writing over the serial port
#define MAX_RETRIES 255

// Do we really want to put this in the sensord namespace or would it be better
// in some sort of utils namespace? -Tommy
namespace sensord {

  class DVLSerialPort {
  public:
    DVLSerialPort(const char* devname);
    ~DVLSerialPort();

    // Write the contents of buf to the serial port.
    // buf is size bytes long.  Returns 0 on success
    int writeSer(const unsigned char* buf, ssize_t size);

    // Sends a break
    int sendBreak(int duration);

    // Read up to maxSize bytes into buf
    // Returns after at most uwait microseconds whether or not any bytes have
    // been received
    // Returns the number of bytes read, or -1 on error
    ssize_t readWithTimeout(unsigned char *buf, size_t maxSize, long uwait);

    // Attempt to read toRead bytes into buf within uwait microseconds
    // Returns the number of bytes actually read, or -1 on error
    // Note: failing to read toRead bytes is not an error
    ssize_t readnWithTimeout(unsigned char *buf, size_t toRead, long uwait);

    // Flush in and out buffers.
    // Returns the return value of tcflush (0 on success)
    // I think the function only signals to the kernel to flush the buffers, so
    // extra checking beyond the return value is probably in order if we want to
    // be really really safe. -Tommy
    int flushBuffers();

    // Flush only the input buffer
    int flushInput();
  private:
    int fd;
  };

};

#endif
